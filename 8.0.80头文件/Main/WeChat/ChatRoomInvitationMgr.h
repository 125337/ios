@interface ChatRoomInvitationMgr : MMUserService <IGroupMgrExt, IMsgExt, MMServiceProtocol>
{
    ChatRoomInvitationDB * _db; // +0x8
    NSMutableDictionary * _dicLastReadTime; // +0x10
}
- (void)onServiceInit;
- (void)addNewChatRoomInvitationMessage:(id)arg1;
- (id)getInvitationsWithChatRoom:(id)arg1;
- (BOOL)batchUpdateInvitationQRCodeDisabledWithChatRoom:(id)arg1 arrQRCode:(id)arg2;
- (id)getEffectiveInvitationsInQRCodeSceneWithChatRoom:(id)arg1;
- (id)invitationWrapFromMessageWrap:(id)arg1;
- (BOOL)deleteChatRoomInvitation:(id)arg1;
- (BOOL)deleteAllInvitationsWithChatRoom:(id)arg1;
- (BOOL)updateInvitationsQRCodeDisabled:(id)arg1 svrId:(long long)arg2;
- (BOOL)approveChatRoomInvitation:(id)arg1;
- (void)onChatRoomInvitationApproved:(id)arg1;
- (void)onChatRoomInvitationApprovedWithChatRoom:(id)arg1 svrId:(long long)arg2;
- (void)OnApproveChatRoomInvitation:(id)arg1 ErrorInfo:(id)arg2 Success:(BOOL)arg3 withUserData:(id)arg4;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)updateLastReadTimeForChatRoom:(id)arg1;
- (unsigned int)lastReadTimeForChatRoom:(id)arg1;
- (unsigned int)unReadCountForChatRoom:(id)arg1;
- (id)lastReadTimeFilePath;
- (void)loadLastReadTime;
- (void)saveLastReadTime;
- (void)updateSessionGreenLabel:(id)arg1;
- (void)updateSessionRedTips:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)dicLastReadTime;
- (void)setDicLastReadTime:(id)arg1;
- (void).cxx_destruct;
@end
