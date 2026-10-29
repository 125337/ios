@interface MMFinderLiveAiAssistantToolFilterControl : NSObject <MMFinderLiveAiAssistantTool>
+ (id)toolName;
+ (id)toolVersion;
+ (id)toolDescription;
+ (Class)paramsClass;
+ (id)defaultMockArguments;
- (BOOL)isAvailableInContext:(id)arg1;
- (void)invokeWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)handleSelectWithFilterId:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)handleSetValue:(id)arg1 filterId:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)handleUndoWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleResetWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleOpenPanelWithContext:(id)arg1 completion:(id /* block */)arg2;
@end
