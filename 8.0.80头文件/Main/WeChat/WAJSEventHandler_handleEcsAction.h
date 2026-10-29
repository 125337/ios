@interface WAJSEventHandler_handleEcsAction : WAJSEventHandler_BaseEvent <EcsActionHandlerDelegate>
{
    EcsActionHandler_Base * _actionHandler; // +0x8
    NSString * _sceneId; // +0x10
}
- (void)eja_handleJSEvent:(id)arg1;
- (id)init;
- (void)handleJSEvent:(id)arg1;
- (void)dispatchHandleJSAction:(id)arg1 extraData:(id)arg2;
- (void)dealloc;
- (void)callerMacroEnd:(long long)arg1 optionalArg1:(id)arg2 optionalArg2:(id)arg3 actionHandler:(id)arg4;
- (id)callerContextViewController;
- (id)callerNavigationController;
- (BOOL)isRunningInSheetMode;
- (id)getAbosulteFilePath:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (id)getContact;
- (id)actionHandler;
- (void)setActionHandler:(id)arg1;
- (id)sceneId;
- (void)setSceneId:(id)arg1;
- (void).cxx_destruct;
@end
