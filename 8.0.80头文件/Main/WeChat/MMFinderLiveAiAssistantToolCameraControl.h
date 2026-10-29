@interface MMFinderLiveAiAssistantToolCameraControl : NSObject <MMFinderLiveAiAssistantTool>
+ (id)toolName;
+ (id)toolVersion;
+ (id)toolDescription;
+ (Class)paramsClass;
+ (id)defaultMockArguments;
- (BOOL)isAvailableInContext:(id)arg1;
- (void)invokeWithParams:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)handleFlipWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetCameraEnabled:(BOOL)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)handleMirrorWithContext:(id)arg1 completion:(id /* block */)arg2;
@end
