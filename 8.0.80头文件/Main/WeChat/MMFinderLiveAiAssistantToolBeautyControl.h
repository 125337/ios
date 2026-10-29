@interface MMFinderLiveAiAssistantToolBeautyControl : NSObject <MMFinderLiveAiAssistantTool>
+ (id)toolName;
+ (id)toolVersion;
+ (id)toolDescription;
+ (Class)paramsClass;
+ (id)defaultMockArguments;
- (BOOL)isAvailableInContext:(id)arg1;
- (void)invokeWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)handleSetValueWithItems:(id)arg1 suiteId:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)handleResetWithSuiteId:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)handleUndoWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleOpenPanelWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)suiteWithId:(id)arg1 beautyLogic:(id)arg2;
@end
