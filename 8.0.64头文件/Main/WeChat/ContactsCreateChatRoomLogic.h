@interface ContactsCreateChatRoomLogic : MMObject <contactVerifyLogicDelegate, IGroupMgrExt>
{
    NSDictionary * m_dicMultiSelect; // +0x8
    UIView * m_ParentView; // +0x10
    MMLoadingView * m_loadingView; // +0x18
    id <ContactsCreateChatRoomLogicDelegate> m_Delegate; // +0x20
    unsigned int m_uiUseChatState; // +0x28
    CContactVerifyLogic * m_oContactVerifyLogic; // +0x30
    NSMutableArray * m_arrNeedVerifyUsrName; // +0x38
}
- (id)init;
- (void)reset;
- (BOOL)start:(id)arg1 parentView:(id)arg2;
- (void)startLoading;
- (void)stopLoading;
- (id)genMemerList;
- (BOOL)createChatRoom;
- (void)verifyContact;
- (id)getErrorContactName:(id)arg1;
- (id)genErrorString:(id)arg1 needVerify:(BOOL *)arg2;
- (void)OnCreateGroup:(id)arg1 withStatus:(int)arg2 resp:(id)arg3;
- (void)OnOpenIMCreateGroup:(id)arg1 withStatus:(int)arg2 resp:(id)arg3;
- (id)genOpenIMErrorString:(id)arg1 needVerify:(BOOL *)arg2;
- (id)m_Delegate;
- (void)setM_Delegate:(id)arg1;
- (unsigned int)m_uiUseChatState;
- (void)setM_uiUseChatState:(unsigned int)arg1;
- (void).cxx_destruct;
@end
