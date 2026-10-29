@interface KVOInfo : NSObject
{
    KVOController * m_controller; // +0x8
    NSString * m_keyPath; // +0x10
    unsigned long long m_options; // +0x18
    unsigned char m_state; // +0x20
    SEL m_action; // +0x28
    void * m_context; // +0x30
    id /* block */ m_block; // +0x38
}
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4 action:(SEL)arg5 context:(void *)arg6;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void).cxx_destruct;
@end

