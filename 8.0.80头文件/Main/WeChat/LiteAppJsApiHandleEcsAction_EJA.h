@interface LiteAppJsApiHandleEcsAction_EJA : LiteAppJsApi <EcsJsApiHandlerDelegate>
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)callerContextViewController;
- (id)callerNavigationController;
- (BOOL)isRunningInSheetMode;
- (id)getAbosulteFilePath:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (id)getContact;
@end
