@interface WCFinderFeedArrayObserver : NSObject
{
    id <NSObject> _observer; // +0x8
    SEL _action; // +0x10
    WCFinderFeedArrayObserver * _next; // +0x18
}
- (id)observer;
- (void)setObserver:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)next;
- (void)setNext:(id)arg1;
- (void).cxx_destruct;
@end
