@interface WebviewJSEventHandler_chooseChatRoomMember : WebviewJSEventHandlerBase <MultiRoomContactSelectViewControllerDelegate>
{
    NSMutableArray * m_customMemberList; // +0x8
    MultiRoomContactSelectViewController * _m_viewController; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)addContactToList:(id)arg1 toArray:(id)arg2 dicEncryptSecret:(id)arg3 isCanSelectSelf:(BOOL)arg4;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactCancel;
- (BOOL)useCustomMemberList;
- (id)m_viewController;
- (void)setM_viewController:(id)arg1;
- (void).cxx_destruct;
@end

