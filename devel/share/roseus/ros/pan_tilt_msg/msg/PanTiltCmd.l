;; Auto-generated. Do not edit!


(when (boundp 'pan_tilt_msg::PanTiltCmd)
  (if (not (find-package "PAN_TILT_MSG"))
    (make-package "PAN_TILT_MSG"))
  (shadow 'PanTiltCmd (find-package "PAN_TILT_MSG")))
(unless (find-package "PAN_TILT_MSG::PANTILTCMD")
  (make-package "PAN_TILT_MSG::PANTILTCMD"))

(in-package "ROS")
;;//! \htmlinclude PanTiltCmd.msg.html


(defclass pan_tilt_msg::PanTiltCmd
  :super ros::object
  :slots (_yaw _pitch _speed ))

(defmethod pan_tilt_msg::PanTiltCmd
  (:init
   (&key
    ((:yaw __yaw) 0.0)
    ((:pitch __pitch) 0.0)
    ((:speed __speed) 0)
    )
   (send-super :init)
   (setq _yaw (float __yaw))
   (setq _pitch (float __pitch))
   (setq _speed (round __speed))
   self)
  (:yaw
   (&optional __yaw)
   (if __yaw (setq _yaw __yaw)) _yaw)
  (:pitch
   (&optional __pitch)
   (if __pitch (setq _pitch __pitch)) _pitch)
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:serialization-length
   ()
   (+
    ;; float32 _yaw
    4
    ;; float32 _pitch
    4
    ;; int16 _speed
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _yaw
       (sys::poke _yaw (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _pitch
       (sys::poke _pitch (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int16 _speed
       (write-word _speed s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _yaw
     (setq _yaw (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _pitch
     (setq _pitch (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int16 _speed
     (setq _speed (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get pan_tilt_msg::PanTiltCmd :md5sum-) "965a993146bc193a21484f0f1e9162eb")
(setf (get pan_tilt_msg::PanTiltCmd :datatype-) "pan_tilt_msg/PanTiltCmd")
(setf (get pan_tilt_msg::PanTiltCmd :definition-)
      "## pan tilt control msg
## pan tilt yaw angle :deg
float32 yaw

## pan tilt pitch angle :deg
float32 pitch 

## pan tilt speed :deg/s
int16 speed

")



(provide :pan_tilt_msg/PanTiltCmd "965a993146bc193a21484f0f1e9162eb")


