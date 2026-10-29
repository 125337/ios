@interface LiteAppJsApiHandleEcsAction : LiteAppJsApi <EcsActionHandlerDelegate>
{
    NSMutableArray * _arrActionHandler; // +0x20
    NSString * _sceneId; // +0x28
}
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (BOOL)invokeInMainThread;
- (id)arrActionHandler;
- (void)callerMacroEnd:(long long)arg1 optionalArg1:(id)arg2 optionalArg2:(id)arg3 actionHandler:(id)arg4;
- (void)internalEndWithState:(long long)arg1 msg:(id)arg2 dic:(id)arg3;
- (id)callerContextViewController;
- (id)callerNavigationController;
- (id)getAbosulteFilePath:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (id)getContact;
- (void)setArrActionHandler:(id)arg1;
- (id)sceneId;
- (void)setSceneId:(id)arg1;
- (void).cxx_destruct;
@end
