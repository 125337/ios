@interface NewChatRoomInvitationListViewController : ChatRoomInvitationListViewController <IMMQRCodeExt>
{
    NSMutableDictionary * m_cellInfoCache; // +0x70
    MMUILabel * m_hasReadLabel; // +0x78
    MMUIView * m_hasReadLeftLineView; // +0x80
    MMUIView * m_hasReadRightLineView; // +0x88
    ChatRoomInvitationWrap * _handleInvitationWrap; // +0x90
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)initEffectiveQRCodeInvitations;
- (Class)getChatRoomInvitationMultiMenuTableViewCellClass;
- (id)getChatRoomInvitationListEmptyTips;
- (void)handelApproveChatRoomInvitation:(id)arg1 success:(BOOL)arg2 errInfo:(id)arg3;
- (void)makeHasReadSectionHeaderView;
- (void)addMultiMenu:(id)arg1 invitationWrap:(id)arg2;
- (void)handleTableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)genRevokeQRCodeIcon:(BOOL)arg1 isDisable:(BOOL)arg2;
- (void)handleRevokeQRCode:(id)arg1;
- (BOOL)checkCanTapApproveForChatRoomInvitation:(id)arg1;
- (id)genImageOfView:(id)arg1;
- (void)showContactListPageSheet:(id)arg1;
- (id)getCellInfoCacheForInvitation;
- (void)onRevokeChatroomQRCode:(id)arg1 success:(BOOL)arg2 errTip:(id)arg3;
- (void)onGetChatRoomQRCodeStatus:(id)arg1 arrResultChatRoomQRCode:(id)arg2 success:(BOOL)arg3 errTip:(id)arg4;
- (void)updateInvalidQRCodeInCache:(id)arg1;
- (id)handleInvitationWrap;
- (void)setHandleInvitationWrap:(id)arg1;
- (void).cxx_destruct;
@end
