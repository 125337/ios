@interface RTELinkedList : MMObject <NSCopying>
{
    RTELinkedListNode * _headNode; // +0x8
    RTELinkedListNode * _cacheNode; // +0x10
    unsigned long long _cacheLocation; // +0x18
    unsigned long long _totalLength; // +0x20
}
+ (id)creatEmptyList:(unsigned int)arg1 Length:(unsigned long long)arg2;
- (BOOL)updateListIndexSinceHeadNode:(id)arg1 withLocation:(unsigned long long)arg2 withTotalLength:(unsigned long long)arg3;
- (void)resetIndexAtRange:(_NSRange)arg1;
- (BOOL)containNodeMatch:(id /* block */)arg1 InRange:(_NSRange)arg2;
- (BOOL)canSetHeadIndexToOrderListNode:(id)arg1;
- (id)headAttributeNode;
- (void)setHeadAttributeNode:(id)arg1;
- (id)cacheAttributeNode;
- (void)setCacheAttributeNode:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)description;
- (id)getFrontAttributeNodeWithType:(unsigned int)arg1 SinceIndex:(unsigned long long)arg2;
- (id)getAfterAttributeNodeWithType:(unsigned int)arg1 SinceIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (_NSRange)rangeOfNode:(id)arg1;
- (void)updateCacheToIndex:(unsigned long long)arg1;
- (void)deleteNodesAtRange:(_NSRange)arg1;
- (void)insertNodes:(id)arg1 ofLength:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)appendNodes:(id)arg1 ofLength:(unsigned long long)arg2;
- (id)copyListInRange:(_NSRange)arg1;
- (void)mergeNodesStartFrom:(id)arg1 isForward:(BOOL)arg2;
- (id)headNode;
- (void)setHeadNode:(id)arg1;
- (id)cacheNode;
- (void)setCacheNode:(id)arg1;
- (unsigned long long)cacheLocation;
- (void)setCacheLocation:(unsigned long long)arg1;
- (unsigned long long)totalLength;
- (void)setTotalLength:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
