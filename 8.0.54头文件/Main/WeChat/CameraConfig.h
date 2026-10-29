@interface CameraConfig : NSObject
+ (id)getBlackCameraPreset;
+ (CGSize)getBlackCameraSizeByPreset:(id)arg1;
+ (BOOL)isBlackCameraSize1080x1920;
+ (BOOL)isBlackCameraSize720x1280;
+ (BOOL)isBlackCameraSize480x640;
+ (BOOL)canAccessCamera;
+ (BOOL)tryShowAccessCameraAlert;
+ (void)checkAccessCameraAndShowAlertFor:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
@end

