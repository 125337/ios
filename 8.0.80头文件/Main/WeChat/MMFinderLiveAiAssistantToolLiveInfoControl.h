@interface MMFinderLiveAiAssistantToolLiveInfoControl : NSObject <MMFinderLiveAiAssistantTool>
+ (id)toolName;
+ (id)toolVersion;
+ (id)toolDescription;
+ (Class)paramsClass;
+ (id)defaultMockArguments;
- (BOOL)isAvailableInContext:(id)arg1;
- (void)invokeWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)handleSetTopicWithTitle:(id)arg1 desc:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
@end
