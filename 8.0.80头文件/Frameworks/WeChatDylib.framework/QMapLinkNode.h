@interface QMapLinkNode : NSObject
{
    QMapLinkNode * _prev; // +0x8
    QMapLinkNode * _next; // +0x10
    id _object; // +0x18
    id _key; // +0x20
    unsigned long long _cost; // +0x28
}
- (id)initWithObject:(id)arg1 key:(id)arg2 cost:(unsigned long long)arg3;
- (id)prev;
- (void)setPrev:(id)arg1;
- (id)next;
- (void)setNext:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (unsigned long long)cost;
- (void)setCost:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
