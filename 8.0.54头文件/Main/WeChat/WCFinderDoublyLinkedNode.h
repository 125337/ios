@interface WCFinderDoublyLinkedNode : NSObject
{
    WCFinderDoublyLinkedNode * _prevNode; // +0x8
    WCFinderDoublyLinkedNode * _nextNode; // +0x10
    id _key; // +0x18
    id _value; // +0x20
}
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)description;
- (id)prevNode;
- (void)setPrevNode:(id)arg1;
- (id)nextNode;
- (void)setNextNode:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void).cxx_destruct;
@end

