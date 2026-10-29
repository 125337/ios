@interface WCPayTouchIDAuthHelper : MMObject
+ (void)showTouchIDAuthView:(id)arg1 whenSuccess:(id /* block */)arg2 whenFail:(id /* block */)arg3;
+ (void)showTouchIDAuthView:(id)arg1 whenSuccess:(id /* block */)arg2 whenFail:(id /* block */)arg3 askUnlock:(id)arg4;
+ (void)internalShowTouchIDAuthView:(id)arg1 whenSuccess:(id /* block */)arg2 whenFail:(id /* block */)arg3;
+ (void)showTouchIDAuthView:(id)arg1 whenSuccessData:(id /* block */)arg2 whenFail:(id /* block */)arg3;
+ (void)showTouchIDAuthView:(id)arg1 disableFallBack:(BOOL)arg2 whenSuccessData:(id /* block */)arg3 whenFail:(id /* block */)arg4;
+ (void)showTouchIDAuthView:(id)arg1 disableFallBack:(BOOL)arg2 whenSuccessData:(id /* block */)arg3 whenFail:(id /* block */)arg4 askUnlock:(id)arg5;
+ (void)internalShowTouchIDAuthView:(id)arg1 disableFallBack:(BOOL)arg2 whenSuccessData:(id /* block */)arg3 whenFail:(id /* block */)arg4;
+ (void)showTouchIDAuthView:(id)arg1 disableFallBack:(BOOL)arg2 callback:(id /* block */)arg3;
+ (void)showTouchIDAuthView:(id)arg1 disableFallBack:(BOOL)arg2 callback:(id /* block */)arg3 askUnlock:(BOOL)arg4;
+ (void)internalShowTouchIDAuthView:(id)arg1 disableFallBack:(BOOL)arg2 callback:(id /* block */)arg3;
+ (void)askForUnlockTouchID:(id)arg1 whenSuccess:(id /* block */)arg2 whenFail:(id /* block */)arg3;
+ (BOOL)canUseTouchIDFromData:(id)arg1;
+ (BOOL)isInWhiteList:(id)arg1;
+ (BOOL)isDeviceJailBreak;
+ (BOOL)isDeviceTouchIDHardwareSupported;
+ (BOOL)isDeviceFaceIDHardwareSupported;
+ (BOOL)isTouchIDEnrolledInDevice;
+ (BOOL)isDeviceTouchIDHardwareSupportedAndNotJailBreak;
+ (BOOL)isDeviceTouchIDAvailable;
+ (BOOL)isUsingFaceID;
+ (BOOL)isDeviceTouchIDAvailableAndNotJailBreak;
+ (void)logAbTestItem:(id)arg1 transactionId:(id)arg2 event:(int)arg3;
+ (BOOL)isLockOut:(id)arg1;
@end

