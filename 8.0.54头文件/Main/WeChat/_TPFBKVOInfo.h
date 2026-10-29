@interface _TPFBKVOInfo : NSObject
{
    TPFBKVOController * _controller; // +0x8
    NSString * _keyPath; // +0x10
    unsigned long long _options; // +0x18
    SEL _action; // +0x20
    void * _context; // +0x28
    id /* block */ _block; // +0x30
    unsigned char _state; // +0x38
}
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4 action:(SEL)arg5 context:(void *)arg6;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)debugDescription;
- (void).cxx_destruct;
@end

