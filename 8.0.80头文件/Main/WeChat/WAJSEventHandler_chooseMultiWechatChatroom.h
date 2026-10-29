@interface WAJSEventHandler_chooseMultiWechatChatroom : WAJSEventHandler_BaseEvent <MultiSelectChatRoomHalfScreenViewControllerDelegate>
{
    MultiSelectChatRoomHalfScreenViewController * _m_viewController; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (id)getWebviewController;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactCancel;
- (id)m_viewController;
- (void)setM_viewController:(id)arg1;
- (void).cxx_destruct;
@end
