@interface WCFinderLiveErrorReporter : NSObject
+ (void)reportLiveCgiErrorWithLiveId:(unsigned long long)arg1 cgiNumber:(unsigned int)arg2 errorCode:(int)arg3 errorMsg:(id)arg4;
+ (void)reportLiveCgiDelayWithLiveId:(unsigned long long)arg1 cgiNumber:(unsigned int)arg2 costTime:(unsigned int)arg3;
+ (void)reportLiveCgiDelayWithLiveId:(unsigned long long)arg1 cgiNumber:(unsigned int)arg2 costTime:(unsigned int)arg3 errorCode:(int)arg4 errorMsg:(id)arg5;
+ (void)reportLiveSDKErrorWithLiveId:(unsigned long long)arg1 sdkRoomId:(unsigned int)arg2 errorCode:(int)arg3 errorMsg:(id)arg4;
+ (void)reportLiveCaptureErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveLocalErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveAssertErrorWithErrorMsg:(id)arg1 errorTags:(id)arg2;
+ (void)reportLiveCDNPlayerErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 errorTags:(id)arg4;
+ (void)reportLiveUIErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 severityLevel:(unsigned long long)arg4;
+ (void)reportLiveLogicErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 severityLevel:(unsigned long long)arg4;
+ (void)reportLivePerformanceErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 errorTags:(id)arg4 level:(unsigned int)arg5;
+ (void)reportLiveUIWarningWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveLogicWarningWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveUIErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveLogicErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveFatalUIErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveFatalLogicErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveNexusPageErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 errorTags:(id)arg4;
+ (id)replaceCommaToSemicolon:(id)arg1;
@end
