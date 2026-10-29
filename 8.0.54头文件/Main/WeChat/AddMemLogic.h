@interface AddMemLogic : MMObject <IChatRoomHistoryUploadExt, MultiSelectContactsViewControllerDelegate, contactVerifyLogicDelegate, IGroupMgrExt, UITextFieldDelegate, MMTipsViewControllerDelegate>
{
    id <AddMemLogicDelegate> m_delegate; // +0x8
    NSMutableArray * m_arrNeedVerifyUsrName; // +0x10
    CContactVerifyLogic * m_oContactVerifyLogic; // +0x18
    NSArray * m_arrMemberList; // +0x20
    NSString * m_historyUploadTaskId; // +0x28
    NSArray * m_selectedMsgList; // +0x30
    NSArray * m_waitingAddedMemerList; // +0x38
    NSString * m_waitingDesp; // +0x40
    unsigned int _m_viewScene; // +0x48
    CContact * _m_oContact; // +0x50
}
- (id)init;
- (void)dealloc;
- (void)start:(id)arg1;
- (id)getErrorContactName:(id)arg1;
- (id)genErrorString:(id)arg1 withGroupVerify:(BOOL)arg2;
- (BOOL)canShowUpgradeStatus;
- (void)OnAddGroupMember:(id)arg1 withStatus:(unsigned int)arg2 memberList:(id)arg3 inviteList:(id)arg4 Error:(id)arg5 tipContent:(id)arg6 historyInfo:(id)arg7;
- (void)addGroupVerifySuccessSystemNodeView:(id)arg1;
- (void)showDespAlertView:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)addMembersToChatRoom:(id)arg1;
- (id)getHistoryInfoWithChatRoom:(id)arg1 WithDesp:(id)arg2;
- (BOOL)addMembersToChatRoom:(id)arg1 WithDesp:(id)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectWithMsgHistory:(id)arg1 uploadTaskId:(id)arg2;
- (void)onContactVerifyFail;
- (void)contactVerifyOk:(id)arg1;
- (void)verifyContact;
- (void)OnInviteChatRoomMember:(id)arg1 Ret:(int)arg2 Error:(id)arg3 withUserData:(id)arg4;
- (void)onInviteAlert:(id)arg1 isCancelButton:(BOOL)arg2 historyInfo:(id)arg3;
- (unsigned long long)getFTSCommonScene;
- (id)contactForContext;
- (void)onFailToAddMemberWithHistory;
- (BOOL)checkHistoryUploadInfo:(id)arg1;
- (BOOL)shouldWaitHistoryUploadTask;
- (void)onHistoryUploadFinish:(id)arg1 uploadInfo:(id)arg2 errMsg:(id)arg3;
- (void)onNewHistoryUploadFinish:(id)arg1 uploadInfo:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_viewScene;
- (void)setM_viewScene:(unsigned int)arg1;
- (id)m_oContact;
- (void)setM_oContact:(id)arg1;
- (void).cxx_destruct;
@end

