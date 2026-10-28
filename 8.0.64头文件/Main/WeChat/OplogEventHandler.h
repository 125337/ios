@interface OplogEventHandler : ProtobufEventHandler
{
    NSMutableArray * m_arrOplogs; // +0x8
}
- (void)OnProtocolStart:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnProtocolConnectFail:(id)arg1;
- (void).cxx_destruct;
@end
