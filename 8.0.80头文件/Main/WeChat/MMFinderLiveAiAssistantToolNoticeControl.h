@interface MMFinderLiveAiAssistantToolNoticeControl : NSObject <MMFinderLiveAiAssistantTool>
+ (id)toolName;
+ (id)toolVersion;
+ (id)toolDescription;
+ (Class)paramsClass;
+ (double)defaultTimeout;
+ (id)defaultMockArguments;
- (BOOL)isAvailableInContext:(id)arg1;
- (void)invokeWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)handleOpenListPanelWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleOpenDetailWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (long long)parseSubAction:(id)arg1;
- (void)presentNoticeDetailsWithNoticeInfo:(id)arg1 anchorContact:(id)arg2 fromVC:(id)arg3 subActionKind:(long long)arg4 noticeId:(id)arg5 completion:(id /* block */)arg6;
- (id)subActionKeyForKind:(long long)arg1;
- (void)handleCreateWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (id)parseAndValidateStartTime:(id)arg1 error:(id *)arg2;
@end
