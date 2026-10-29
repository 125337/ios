@interface ChatRoomBatchUpgradeOpenIMLogic : MMObject <IGroupMgrExt>
{
    NSMutableDictionary * m_upgradeChatRoomDicResult; // +0x8
    id <ChatRoomBatchUpgradeOpenIMLogicDelegate> m_delegate; // +0x10
    NSString * _chatRoomBatchUpgradeOpenIMTicket; // +0x18
    NSArray * _m_upgradeOpenIMChatRoomUsrNameAr; // +0x20
    NSArray * _m_normalChatRoomUsrNameAr; // +0x28
}
+ (void)reportBatchUpgradeAssociateChatRoomWithRecomdCount:(unsigned long long)arg1 andIsClickMore:(BOOL)arg2 andRecomdSelectCount:(unsigned long long)arg3 andOtherSelectCount:(unsigned long long)arg4 andIsClickChange:(BOOL)arg5 andTicketId:(id)arg6 andOtherCount:(unsigned long long)arg7;
+ (void)reportBatchUpgradeAssociateChatRoomResultWithRecomdSuccessCount:(unsigned long long)arg1 andRecomdFailCount:(unsigned long long)arg2 andOtherSuccessCount:(unsigned long long)arg3 andOtherFailCount:(unsigned long long)arg4 andSuccessRoomUsrNameList:(id)arg5 andTicketId:(id)arg6;
- (id)init;
- (void)start;
- (void)startBatchUpgradeAssociateChatRoom:(id)arg1;
- (void)openChatRoomUpgradeOpenIMViewControllerWithResp:(id)arg1;
- (void)OnGetUpgradeAssociateChatRoom:(id)arg1 withTicket:(id)arg2 withResult:(unsigned int)arg3 errorMsg:(id)arg4 withResp:(id)arg5;
- (void)OnUpgradeAssociateChatRoom:(id)arg1 withTicket:(id)arg2 withResult:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)reportBatchUpgradeAssociateChatRoom;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)chatRoomBatchUpgradeOpenIMTicket;
- (void)setChatRoomBatchUpgradeOpenIMTicket:(id)arg1;
- (id)m_upgradeOpenIMChatRoomUsrNameAr;
- (void)setM_upgradeOpenIMChatRoomUsrNameAr:(id)arg1;
- (id)m_normalChatRoomUsrNameAr;
- (void)setM_normalChatRoomUsrNameAr:(id)arg1;
- (void).cxx_destruct;
@end

