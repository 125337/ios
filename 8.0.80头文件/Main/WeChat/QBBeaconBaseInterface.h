@interface QBBeaconBaseInterface : NSObject
+ (BOOL)enableAnalytics:(id)arg1 gatewayIP:(id)arg2;
+ (BOOL)onUserAction:(id)arg1 isSucceed:(BOOL)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
+ (void)setAppKey:(id)arg1;
+ (void)setGUID:(id)arg1;
+ (void)setUserId:(id)arg1;
+ (void)setSDKVersion:(id)arg1;
+ (void)setAdditionalInfo:(id)arg1;
@end
