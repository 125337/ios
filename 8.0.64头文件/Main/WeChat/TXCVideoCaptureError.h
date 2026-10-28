@interface TXCVideoCaptureError : NSObject
+ (id)noDevice;
+ (id)unauthorized;
+ (id)captureFrameFailed;
+ (id)screenCaptureStartFailed;
+ (id)screenInterrupted;
+ (id)errorWithCode:(long long)arg1;
@end
