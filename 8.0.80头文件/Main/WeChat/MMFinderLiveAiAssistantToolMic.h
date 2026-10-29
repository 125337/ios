@interface MMFinderLiveAiAssistantToolMic : NSObject <MMFinderLiveAiAssistantTool>
+ (id)toolName;
+ (id)toolVersion;
+ (id)toolDescription;
+ (Class)paramsClass;
+ (double)defaultTimeout;
+ (id)defaultMockArguments;
- (BOOL)isAvailableInContext:(id)arg1;
- (void)invokeWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)startRandomMicWithMicLogic:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)startTargetedAnchorMicWithMicLogic:(id)arg1 targetNickname:(id)arg2 targetFinderUsername:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)searchOnlineAnchorWithNickname:(id)arg1 finderUsername:(id)arg2 completionBlock:(id /* block */)arg3;
@end
