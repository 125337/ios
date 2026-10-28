@interface ChatRoomInvitationDB : NSObject
{
    WCTDatabase * _database; // +0x8
    WCTTable * _table; // +0x10
}
- (id)init;
- (void)reloadDatabase;
- (void)didRecoverDatabase;
- (id)tableForChatRoom:(id)arg1;
- (id)tableNameForChatRoom:(id)arg1;
- (id)getInvitationWithChatRoom:(id)arg1 inviter:(id)arg2 memberList:(id)arg3 hasApproved:(BOOL)arg4;
- (id)getInvitationWithChatRoomInQrcodeScene:(id)arg1 inviter:(id)arg2 memberList:(id)arg3 hasApproved:(BOOL)arg4 qrCode:(id)arg5;
- (id)getInvitationWithChatRoom:(id)arg1 svrId:(long long)arg2;
- (id)getEffectiveInvitationsInQRCodeSceneWithChatRoom:(id)arg1;
- (BOOL)batchUpdateInvitationQRCodeDisabledWithChatRoom:(id)arg1 arrQRCode:(id)arg2;
- (BOOL)updateInvitationQRCodeDisabledWithChatRoom:(id)arg1 svrId:(long long)arg2;
- (id)getInvitationWithChatRoom:(id)arg1 oneOfHistoryMsgId:(long long)arg2;
- (id)getLastInvitationWithChatRoom:(id)arg1;
- (id)getInvitationsWithChatRoom:(id)arg1;
- (BOOL)replaceInvitationWithChatRoom:(id)arg1 oldInvitationId:(long long)arg2 newInvitation:(id)arg3;
- (BOOL)addNewInvitationWithChatRoom:(id)arg1 invitation:(id)arg2;
- (BOOL)updateInvitationWithChatRoom:(id)arg1 invitation:(id)arg2;
- (BOOL)deleteInvitationWithChatRoom:(id)arg1 svrId:(long long)arg2;
- (BOOL)deleteAllInvitationsWithChatRoom:(id)arg1;
- (BOOL)deleteInvitationsWithChatRoom:(id)arg1 offset:(long long)arg2;
- (unsigned int)getCountWithChatRoom:(id)arg1 afterTime:(unsigned int)arg2;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)table;
- (void)setTable:(id)arg1;
- (void).cxx_destruct;
@end
