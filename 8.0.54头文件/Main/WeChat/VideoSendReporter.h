@interface VideoSendReporter : NSObject
+ (void)reportSendWithMsg:(id)arg1 action:(int)arg2;
+ (void)reportSendFailWithMsg:(id)arg1 reason:(int)arg2;
+ (void)reportSelectFail:(int)arg1 deltail:(unsigned long long)arg2 chatname:(id)arg3;
+ (int)getVideoSource:(id)arg1;
@end

