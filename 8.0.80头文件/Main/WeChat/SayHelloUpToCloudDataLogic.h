@interface SayHelloUpToCloudDataLogic : MMObject <SendVerifyMsgViewControllerDelegate, VerifyRecordLogicDelegate, FriendAsistSessionExt, ContactsItemViewDelegate, contactVerifyLogicDelegate, IAutoSetRemarkExt, IContactMgrExt>
{
    unsigned int m_uiScene; // +0x8
    NSMutableArray * m_arrHellos; // +0x10
    NSMutableDictionary * m_dicSections; // +0x18
    NSMutableDictionary * m_dicHellos; // +0x20
    CContactVerifyLogic * m_oContactVerifyLogic; // +0x28
    SendVerifyMsgLogicController * m_sendVerifylogicVC; // +0x30
    VerifyRecordLogic * m_oVerifyRecordlogic; // +0x38
    BOOL m_bLocalVerifyRecordIsEmpty; // +0x40
    BOOL m_bFinshGetNextLocalVerifyRecord; // +0x41
    BOOL m_bFinshGetNextNetWorkVerifyRecord; // +0x42
    unsigned long long m_maxLoadedVerifyRecordVersion; // +0x48
    unsigned long long m_lastLoadedVerifyRecordVersion; // +0x50
    OrderedDictionary * m_recordDictionary; // +0x58
    SayHelloUpToCloudDeleteHello * m_deleteHello; // +0x60
    NSMutableDictionary * m_dicVerifyRecordSayHelloUpToCloudHello; // +0x68
    id <SayHelloUpToCloudDataLogicDelegate> m_delegate; // +0x70
}
+ (BOOL)isVerifyRecordRequester:(id)arg1;
+ (void)updateVerifyRecordWaitingStatus:(id)arg1 status:(unsigned int)arg2;
+ (id)getContactFrom:(id)arg1;
+ (id)getContactForChatName:(id)arg1 UserName:(id)arg2;
+ (id)genVerifyMessageWrapWithContent:(id)arg1 msgServerId:(unsigned long long)arg2 createTime:(unsigned int)arg3 direction:(unsigned int)arg4 chatName:(id)arg5;
- (void)removeArrHello:(id)arg1;
- (id)getContactForUserName:(id)arg1;
- (id)getContactForIndex:(unsigned int)arg1 Section:(unsigned int)arg2;
- (void)loadData:(unsigned int)arg1;
- (void)mergeVisibleUnreadLegacyHelloForRedDot;
- (void)handleGroupHelloUsersByTime:(id)arg1;
- (void)insetLatestHello:(id)arg1;
- (id)getChatName:(unsigned int)arg1;
- (void)clearMsg:(unsigned int)arg1 ForIndex:(unsigned int)arg2 Section:(unsigned int)arg3;
- (void)handleLocalClearMsg:(unsigned int)arg1 ForIndex:(unsigned int)arg2 Section:(unsigned int)arg3;
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
- (id)getSayHelloUpToCloudHelloListInVerifyRecordWithlastVersion:(unsigned long long)arg1 limit:(long long)arg2;
- (id)genSayHelloUpToCloudHelloWithVerifyRecord:(id)arg1;
- (id)getSayHelloUpToCloudHelloListInVerifyMessage:(id)arg1;
- (id)genSayHelloUpToCloudHelloWithHelloMessage:(id)arg1;
- (void)insetLatestSayHelloUpToCloudHello:(id)arg1 messageWrap:(id)arg2;
- (id)genSayHelloUpToCloudHelloWithSyncVerifyRecord:(id)arg1;
- (BOOL)checkHadVerifyRecordSync;
- (unsigned long long)getMaxLoadedVerifyRecordVersion;
- (void)checkOldNewTableConsistency;
- (void)getMoreData;
- (void)getMoreData:(BOOL)arg1;
- (void)OnGetVerifyRecordHistorySuccessWithVersion:(unsigned long long)arg1 records:(id)arg2 hasMore:(BOOL)arg3 syncKeyBuff:(id)arg4 syncScene:(unsigned int)arg5;
- (void)OnGetVerifyRecordHistoryFail:(id)arg1 syncScene:(unsigned int)arg2;
- (void)OnDelVerifyRecordSuccessWithUserName:(id)arg1;
- (void)OnDelVerifyRecordFailWithUserName:(id)arg1 failMessage:(id)arg2;
- (void)onVerifyRecordReliableSyncDataReceived:(id)arg1;
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
