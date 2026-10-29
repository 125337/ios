@interface MMFinderLiveAiAssistantToolCommentAdminControl : NSObject <MMFinderLiveAiAssistantTool>
+ (id)toolName;
+ (id)toolVersion;
+ (id)toolDescription;
+ (Class)paramsClass;
+ (id)defaultMockArguments;
- (BOOL)isAvailableInContext:(id)arg1;
- (void)invokeWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)handleOpenWithContext:(id)arg1 completion:(id /* block */)arg2;
@end
