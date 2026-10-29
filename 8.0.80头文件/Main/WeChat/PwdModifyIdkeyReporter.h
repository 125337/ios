@interface PwdModifyIdkeyReporter : NSObject
+ (void)reportKey:(unsigned int)arg1;
+ (void)reportClickEntry;
+ (void)reportClickResetPwd;
+ (void)reportClickGetVerifyCode;
+ (void)reportClickChangeMobile;
+ (void)reportModifySuccess;
+ (void)reportModifyFail;
@end
