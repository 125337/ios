@interface WAAgentAuthCardReporter : NSObject
+ (void)reportExposureForSession:(id)arg1;
+ (void)reportAction:(long long)arg1 element:(long long)arg2 extra:(id)arg3 status:(unsigned long long)arg4 forSession:(id)arg5;
+ (void)reportCompletionForSession:(id)arg1 status:(unsigned long long)arg2 source:(id)arg3;
+ (id)subscribeExposureExtraForSession:(id)arg1;
+ (long long)reportTriggerSourceForSession:(id)arg1;
+ (long long)reportCardTypeForSessionType:(unsigned long long)arg1;
+ (long long)reportFinalStatus:(unsigned long long)arg1;
+ (id)jsonStringForExtra:(id)arg1;
@end
