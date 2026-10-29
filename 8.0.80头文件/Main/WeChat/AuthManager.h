@interface AuthManager : NSObject
+ (void)showFailedReason:(int)arg1;
+ (int)initAuthForQQ;
+ (int)setLicencePath:(id)arg1;
+ (int)setLicenceStr:(id)arg1;
+ (id)getErrorReason:(int)arg1;
+ (void)setIsShowFailedReason:(BOOL)arg1;
+ (long long)getEndTime;
+ (void)clearAuthInfo;
+ (int)currentAuthStatus;
+ (int)getVersion;
+ (void)clearLicenceStr;
+ (id)getLicenceStr;
@end
