@interface SyncCmdHandler : ProtobufEventHandler
{
    NSMutableArray * m_arrMsgList; // +0x8
    NSMutableDictionary * m_dicWebWxClearUnRead; // +0x10
    NSMutableArray * m_arrContactList; // +0x18
    NSMutableDictionary * m_dicChatroomMemberList; // +0x20
    NSMutableArray * m_arrChatroomContactList; // +0x28
    NSMutableArray * m_arrMsgDigest; // +0x30
    CMMDB * m_oMMDB; // +0x38
    NSRecursiveLock * m_oLock; // +0x40
    BOOL _m_ignoreSession; // +0x48
    unsigned int _syncMsgNum; // +0x4c
    unsigned long long _addMsgTime; // +0x50
    unsigned long long _clearUnReadTime; // +0x58
}
- (id)init;
- (BOOL)handleCmds:(id)arg1 isFromPushData:(BOOL)arg2 showLocalPush:(BOOL)arg3;
- (BOOL)HandleBatch:(BOOL)arg1 ShowPush:(BOOL)arg2;
- (BOOL)handleBatchMessages:(id)arg1;
- (BOOL)handleBatchMessages:(id)arg1 isFromPushData:(BOOL)arg2 ShowPush:(BOOL)arg3;
- (BOOL)processSpecialMessage:(id)arg1;
- (BOOL)BatchAddMsg:(BOOL)arg1 ShowPush:(BOOL)arg2;
- (BOOL)checkLastAddMsg:(id)arg1 chatName:(id)arg2;
- (id)StatusNotifyParseUsrName:(XmlReaderNode_t *)arg1 msgWrap:(id)arg2;
- (void)ParseStatusNotify:(id)arg1 map:(id)arg2;
- (unsigned int)StatusNotifyParseCreateTime:(id)arg1 chatName:(id)arg2;
- (void)AddSpecialMsg:(id)arg1 ChatName:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)HandleHelloMsg:(id)arg1 SpcialSession:(id)arg2 NotAddDBSession:(id)arg3 GetChangeDisplay:(BOOL *)arg4;
- (BOOL)AddHelloMsg:(id)arg1 HelloUser:(id)arg2 ChatName:(id)arg3 Des:(unsigned int)arg4 OpCode:(unsigned int)arg5 DBRet:(BOOL *)arg6 GetChangeDisplay:(BOOL *)arg7;
- (BOOL)AddHelloMessageToDB:(id)arg1 HelloUser:(id)arg2 MsgWrap:(id)arg3 Des:(unsigned int)arg4 OpCode:(unsigned int)arg5 GetChangeDisplay:(BOOL *)arg6;
- (void)HandleModContact:(id)arg1;
- (id)HandleMemContactDetail:(id)arg1 isSimplify:(BOOL)arg2;
- (void)BatchModContact;
- (void)BatchModChatroomMember;
- (void)HandleModUsrImg:(id)arg1;
- (int)handleAddMessageActionNotifyData:(id)arg1;
- (BOOL)m_ignoreSession;
- (void)setM_ignoreSession:(BOOL)arg1;
- (unsigned int)syncMsgNum;
- (void)setSyncMsgNum:(unsigned int)arg1;
- (unsigned long long)addMsgTime;
- (void)setAddMsgTime:(unsigned long long)arg1;
- (unsigned long long)clearUnReadTime;
- (void)setClearUnReadTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

