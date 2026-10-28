@interface TextStateAffDBReporter : NSObject
+ (void)reportAction:(long long)arg1;
+ (void)reportAction:(long long)arg1 taskType:(long long)arg2;
+ (void)reportAction:(long long)arg1 taskType:(long long)arg2 taskId:(id)arg3;
+ (void)reportAction:(long long)arg1 taskType:(long long)arg2 taskRetryNum:(unsigned int)arg3 taskId:(id)arg4 TaskUseTimeMs:(unsigned long long)arg5 oldDBNum:(unsigned int)arg6 transferDBNum:(unsigned int)arg7;
+ (void)reportSquareEmpty;
@end
