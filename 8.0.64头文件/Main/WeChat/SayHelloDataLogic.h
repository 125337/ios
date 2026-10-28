@interface SayHelloDataLogic : MMObject <SendVerifyMsgViewControllerDelegate, FriendAsistSessionExt, ContactsItemViewDelegate, contactVerifyLogicDelegate, IAutoSetRemarkExt, IContactMgrExt>
{
    unsigned int m_uiScene; // +0x8
    id <SayHelloDataLogicDelegate> m_delegate; // +0x10
    NSMutableArray * m_arrHellos; // +0x18
    NSMutableDictionary * m_dicSections; // +0x20
    NSMutableDictionary * m_dicHellos; // +0x28
    CContactVerifyLogic * m_oContactVerifyLogic; // +0x30
    SendVerifyMsgLogicController * m_sendVerifylogicVC; // +0x38
}
+ (id)getContactFrom:(id)arg1;
- (void)removeArrHello:(id)arg1;
- (id)getContactForUserName:(id)arg1;
- (id)getContactForIndex:(unsigned int)arg1 Section:(unsigned int)arg2;
- (void)loadData:(unsigned int)arg1;
- (void)insetLatestHello:(id)arg1;
- (id)getChatName:(unsigned int)arg1;
- (void)clearMsg:(unsigned int)arg1 ForIndex:(unsigned int)arg2 Section:(unsigned int)arg3;
- (void)clearMsg:(unsigned int)arg1;
- (void)handleAddedContact:(id)arg1;
- (void)onContactVerifyFail;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)verifyContact:(id)arg1;
- (void)addContact:(id)arg1;
- (unsigned int)getSectionCount;
- (unsigned int)getHelloCount:(unsigned long long)arg1;
- (id)getSectionTitle:(unsigned long long)arg1;
- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)onFriendAssistUnreadCountChanged;
- (void)onFriendAssistAddMsg:(id)arg1;
- (void)onFriendAssistRelpyMsg:(id)arg1;
- (void)onFriendAssistClearMsg:(id)arg1;
- (void)onFriendAssistStatusChange:(id)arg1;
- (void)onSetStrangerRemark:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
