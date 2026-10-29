@interface KidsWatchRegisterReportObject : NSObject
+ (void)reportAction:(unsigned long long)arg1 kidsUserName:(id)arg2 errorCode:(int)arg3;
+ (void)reportSuccessWithKidsUserName:(id)arg1;
+ (void)reportFailureWithErrorCode:(int)arg1;
+ (void)reportCancel;
@end

