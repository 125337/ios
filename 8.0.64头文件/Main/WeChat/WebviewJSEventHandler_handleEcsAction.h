@interface WebviewJSEventHandler_handleEcsAction : WebviewJSEventHandlerBase <EcsActionHandlerDelegate>
{
    NSMutableArray * _arrActionHandler; // +0x8
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)arrActionHandler;
- (void)callerMacroEnd:(long long)arg1 optionalArg1:(id)arg2 optionalArg2:(id)arg3 actionHandler:(id)arg4;
- (id)callerContextViewController;
- (id)callerNavigationController;
- (void)internalEndWithState:(long long)arg1 msg:(id)arg2 dic:(id)arg3;
- (id)getAbosulteFilePath:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (id)getContact;
- (void)notifyContextViewVisibilityChangedIfNeeded:(BOOL)arg1;
- (void)setArrActionHandler:(id)arg1;
- (void).cxx_destruct;
@end
