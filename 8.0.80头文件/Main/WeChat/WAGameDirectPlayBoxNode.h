@interface WAGameDirectPlayBoxNode : NSObject
{
    WAGameDirectPlayBoxGameItem * _game; // +0x8
    WAGameDirectPlayBoxNode * _prev; // +0x10
    WAGameDirectPlayBoxNode * _next; // +0x18
}
- (id)game;
- (void)setGame:(id)arg1;
- (id)prev;
- (void)setPrev:(id)arg1;
- (id)next;
- (void)setNext:(id)arg1;
- (void).cxx_destruct;
@end
