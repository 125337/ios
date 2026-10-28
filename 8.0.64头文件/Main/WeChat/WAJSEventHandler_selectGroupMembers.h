@interface WAJSEventHandler_selectGroupMembers : WAJSEventHandler_BaseEvent <WASelectGroupMemberControllerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onWASelectGroupMemberViewControllerCancel;
- (void)onWASelectGroupMemberViewControllerFinish:(id)arg1 chatroomContact:(id)arg2;
- (id)init;
@end
