@interface NewSyncEventHandler : ProtobufEventHandler
{
    unsigned int ct1; // +0x8
    unsigned long long m_startTime; // +0x10
}
- (void)OnProtocolStart:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
@end

