@interface NSValueDeleteOnDealloc : NSValue
{
    NSValue * _value; // +0x8
    id /* block */ _deallocBlock; // +0x10
}
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id /* block */)deallocBlock;
- (void)setDeallocBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
