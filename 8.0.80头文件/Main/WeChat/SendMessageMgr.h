@interface SendMessageMgr : MMUserService <PBMessageObserverDelegate, INewSyncExt, MMServiceProtocol>
{
    NSRecursiveLock * m_oLock; // +0x8
    BOOL m_isSending; // +0x10
    unsigned int m_uiSyncSendCount; // +0x14
    NSDate * m_dtLastSyncSend; // +0x18
    NSString * m_path; // +0x20
    NSMutableArray * m_messageQueue; // +0x28
    CMMDB * m_oMMDB; // +0x30
}
+ (unsigned long long)SendMessageCountLimit;
- (id)init;
- (void)onServiceInit;
- (void)dealloc;
- (id)loadMessages;
- (void)saveMessages:(id)arg1;
- (void)AddMsgToSendTable:(id)arg1 MsgWrap:(id)arg2;
- (void)DeleteSendMessageByChatName:(id)arg1 localId:(unsigned int)arg2;
- (unsigned int)deleteSendMsgInArray:(id)arg1 withChatName:(id)arg2 localId:(unsigned int)arg3;
- (id)getSendMessages;
- (unsigned long long)GetCountOfSendMessage;
- (id)getPBPath;
- (void)onNewSyncOplogOK;
- (BOOL)IsSendingMsg;
- (void)CheckResend;
- (BOOL)hasSendableMessage;
- (void)SendMsg;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
