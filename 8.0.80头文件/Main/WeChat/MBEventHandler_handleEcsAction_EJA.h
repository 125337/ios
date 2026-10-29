@interface MBEventHandler_handleEcsAction_EJA : MBEventHandlerBaseAsync <EcsJsApiHandlerDelegate>
- (void)invoke:(id)arg1;
- (void)callerMacroEnd:(long long)arg1 optionalArg1:(id)arg2 optionalArg2:(id)arg3 actionHandler:(id)arg4;
- (void)internalEndWithState:(long long)arg1 msg:(id)arg2 dic:(id)arg3;
- (id)callerContextViewController;
- (id)callerNavigationController;
- (id)getAbosulteFilePath:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (id)getContact;
- (id)apiName;
- (BOOL)invokeInMainThread;
@end
