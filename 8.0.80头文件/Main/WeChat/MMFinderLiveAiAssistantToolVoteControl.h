@interface MMFinderLiveAiAssistantToolVoteControl : NSObject <MMFinderLiveAiAssistantTool>
+ (id)toolName;
+ (id)toolVersion;
+ (id)toolDescription;
+ (Class)paramsClass;
+ (double)defaultTimeout;
+ (id)defaultMockArguments;
- (BOOL)isAvailableInContext:(id)arg1;
- (void)invokeWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)handleCreateWithParams:(id)arg1 context:(id)arg2 viewController:(id)arg3 completion:(id /* block */)arg4;
- (void)handleOpenCreatePageWithParams:(id)arg1 context:(id)arg2 viewController:(id)arg3 completion:(id /* block */)arg4;
- (void)handleOpenHistoryWithContext:(id)arg1 viewController:(id)arg2 completion:(id /* block */)arg3;
@end
