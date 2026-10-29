@interface MMFinderLiveAiAssistantToolFansGroupOpen : NSObject <MMFinderLiveAiAssistantTool>
+ (id)toolName;
+ (id)toolVersion;
+ (id)toolDescription;
+ (Class)paramsClass;
+ (id)defaultMockArguments;
- (BOOL)isAvailableInContext:(id)arg1;
- (void)invokeWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)openDetailWithViewController:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)openSettingsWithViewController:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
@end
