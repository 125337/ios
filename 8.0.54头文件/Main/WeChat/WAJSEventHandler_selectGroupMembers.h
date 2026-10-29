@interface WAJSEventHandler_selectGroupMembers : WAJSEventHandler_BaseEvent <WASelectGroupMemberControllerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onWASelectGroupMemberViewControllerCancel;
- (void)onWASelectGroupMemberViewControllerFinish:(id)arg1;
- (id)init;
@end

