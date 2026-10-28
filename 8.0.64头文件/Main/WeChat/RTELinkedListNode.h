@interface RTELinkedListNode : MMObject <NSCopying>
{
    unsigned long long _length; // +0x8
    RTELinkedListNode * _nextNode; // +0x10
    RTELinkedListNode * _preNode; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (void)clearNode;
- (BOOL)canBeMergedInto:(id)arg1;
- (unsigned long long)length;
- (void)setLength:(unsigned long long)arg1;
- (id)nextNode;
- (void)setNextNode:(id)arg1;
- (id)preNode;
- (void)setPreNode:(id)arg1;
- (void).cxx_destruct;
@end
