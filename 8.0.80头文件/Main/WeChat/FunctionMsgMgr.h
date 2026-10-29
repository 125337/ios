@interface FunctionMsgMgr : MMUserService <IMsgExt, INewSyncExt, PBMessageObserverDelegate, MMServiceProtocol>
{
    NSRecursiveLock * m_oLock; // +0x8
    BOOL m_bGettingMsg; // +0x10
    FunctionNewXml * m_oCurrNewXml; // +0x18
    unsigned int m_nextActionTime; // +0x20
    NSMutableArray * m_xmlList; // +0x28
}
- (void)onServiceInit;
- (void)test;
- (id)parseAddMsg:(XmlReaderNode_t *)arg1 baseMsg:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleFunctionNewXml:(id)arg1;
- (void)tryNextTask;
- (void)onNewSyncEnd;
- (void)insertFunctionNewXml:(id)arg1;
- (id)getFunctionNewXml:(id)arg1;
- (id)removeFunctionNewXml:(id)arg1;
- (id)removeFunctionNewXml:(id)arg1 version:(unsigned long long)arg2;
- (void)mergeFunctionNewXml:(id)arg1;
- (void)updateFunctionNewXml:(id)arg1 opType:(unsigned int)arg2 version:(unsigned long long)arg3;
- (void)updateFunctionNewXml:(id)arg1 retryCount:(unsigned int)arg2 nextRetry:(unsigned int)arg3 customBuf:(id)arg4 businessBuf:(id)arg5;
- (id)getPBPath;
- (id)loadFunctionNewXml;
- (void)saveFunctionNewXml:(id)arg1;
- (void)requestCgiWithCgiName:(id)arg1 cgiPath:(id)arg2 cmdid:(unsigned int)arg3 businessId:(unsigned int)arg4 functionMsgId:(id)arg5 customBuff:(id)arg6;
- (void)requestCgi:(id)arg1;
- (void)handleGetMsgFail:(id)arg1 buf:(id)arg2 businessBuf:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetFuncMsgResp:(id)arg1 Event:(unsigned int)arg2;
- (void)revokeMsg:(id)arg1;
- (id)loadFunctionMsg;
- (void)saveFunctionMsg:(id)arg1;
- (void)insertFunctionMsg:(id)arg1;
- (void)removeFunctionMsg:(id)arg1;
- (void)updateFunctionMsg:(id)arg1 opType:(unsigned int)arg2;
- (id)getFunctionMsg:(id)arg1;
- (void)showAddMsg:(id)arg1 version:(unsigned long long)arg2 createTime:(unsigned int)arg3;
- (void)showMessageWrap:(id)arg1 bussinessId:(unsigned long long)arg2;
- (void)showMessageWraps:(id)arg1 bussinessId:(unsigned long long)arg2 businessInfo:(id)arg3;
- (void)insertAddMsg:(id)arg1;
- (id)getAddMsg:(id)arg1;
- (void)removeAddMsg:(id)arg1;
- (id)loadAddMsg;
- (void)saveAddMsg:(id)arg1;
- (void).cxx_destruct;
@end
