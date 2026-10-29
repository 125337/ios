@interface WCFinderDoublyLinkedList : NSObject
{
    WCFinderDoublyLinkedNode * _headNode; // +0x8
    WCFinderDoublyLinkedNode * _tailNode; // +0x10
    NSMutableDictionary * _nodeDict; // +0x18
}
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)insertObjectToHead:(id)arg1 forKey:(id)arg2;
- (void)insertObject:(id)arg1 forKey:(id)arg2 afterObjectForKey:(id)arg3;
- (void)insertObject:(id)arg1 forKey:(id)arg2 beforeObjectForKey:(id)arg3;
- (void)moveObjectForKeyToHead:(id)arg1;
- (id)removeTailObject;
- (id)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)nodeForKey:(id)arg1;
- (id)nodeDict;
- (id)headNode;
- (void)setHeadNode:(id)arg1;
- (id)tailNode;
- (void)setTailNode:(id)arg1;
- (void)setNodeDict:(id)arg1;
- (void).cxx_destruct;
@end
