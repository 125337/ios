@interface SendMessageEventHandler : ProtobufEventHandler
{
    NSMutableDictionary * m_dicMsgList; // +0x8
    NSMutableArray * m_arrMsgList; // +0x10
    CMMDB * m_oMMDB; // +0x18
}
- (id)init;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnProtocolConnectFail:(id)arg1;
- (void)HandleSendFail;
- (void)handleSendSuccessMsg:(id)arg1;
- (void)LoadMsgFromDB;
- (void).cxx_destruct;
@end

