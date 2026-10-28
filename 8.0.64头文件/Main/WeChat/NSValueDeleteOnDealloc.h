@interface NSValueDeleteOnDealloc : NSValue
{
    NSValue * _value; // +0x8
}
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void).cxx_destruct;
@end
