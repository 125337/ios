@interface NewInitEventHandler : ProtobufEventHandler
{
    NSData * m_curKey; // +0x8
    NSData * m_maxKey; // +0x10
    NSObject<OS_dispatch_queue> * m_worker; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)saveKeyBuffer:(unsigned int)arg1 withSelector:(unsigned int)arg2 withCurKey:(id)arg3 withMaxKey:(id)arg4;
- (void).cxx_destruct;
@end

