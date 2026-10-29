@interface TXCVideoBindableSerialGroup : NSObject <TXIVideoBindable>
{
    id <TXIVideoBindable> _head; // +0x8
    id <TXIVideoBindable> _tail; // +0x10
    NSString * _tag; // +0x18
    id <TXIVideoBindable> _nextBindable; // +0x20
}
- (id)init;
- (id)bindTo:(id)arg1;
- (void)processVideoFrameResult:(id)arg1;
- (void)setTail:(id)arg1;
- (id)head;
- (void)setHead:(id)arg1;
- (id)tail;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)nextBindable;
- (void)setNextBindable:(id)arg1;
- (void).cxx_destruct;
@end

