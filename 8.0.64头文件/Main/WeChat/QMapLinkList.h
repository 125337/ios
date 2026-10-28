@interface QMapLinkList : NSObject
{
    unsigned long long _count; // +0x8
    unsigned long long _cost; // +0x10
    QMapLinkNode * _head; // +0x18
    QMapLinkNode * _trail; // +0x20
}
- (void)addFirst:(id)arg1;
- (void)addLast:(id)arg1;
- (void)remove:(id)arg1;
- (id)removeLast;
- (void)removeAllObjects;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (unsigned long long)cost;
- (void)setCost:(unsigned long long)arg1;
- (id)head;
- (void)setHead:(id)arg1;
- (id)trail;
- (void)setTrail:(id)arg1;
- (void).cxx_destruct;
@end
