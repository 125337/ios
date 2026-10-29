@interface KindaDeviceService : NSObject <MMKDeviceService>
- (BOOL)isRoot;
- (id)soterCpuId;
- (id)soterUid;
- (BOOL)useLastestTouchInfo;
- (BOOL)isDeviceOpenBiometricVerification;
- (BOOL)isDeviceTouchIdHardwareSupported;
- (BOOL)isDeviceSupportFaceId;
- (BOOL)isDeviceSupportTouchId;
- (void)updateBiometricVerificationState:(int)arg1 biometricVerificationState:(BOOL)arg2;
- (void)invokePhoneCall:(id)arg1;
- (void)getClipboardTextImpl:(id)arg1;
@end
