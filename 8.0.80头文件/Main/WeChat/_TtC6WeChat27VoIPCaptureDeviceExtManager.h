@interface _TtC6WeChat27VoIPCaptureDeviceExtManager : MMUserService <MMServiceProtocol>
+ (id)frontUltraWideCameraDevice;
+ (BOOL)isSystemSupportDynamicAspectRatio;
- (BOOL)enableLandscapeMode;
- (BOOL)enableUltraWideAngleCamera;
- (BOOL)enableInputPriorityMode;
- (BOOL)enableLandscapeCompatOldVersion;
- (void)onServiceInit;
- (void)updateAspectRatioWithIsLandscapeMode:(BOOL)arg1;
- (void)set4x3AspectRatio;
- (void)set3x4AspectRatio;
- (void)set1x1AspectRatio;
- (BOOL)isSupportDynamicRatioWithIsFrontCamera:(BOOL)arg1;
- (id)init;
@end
