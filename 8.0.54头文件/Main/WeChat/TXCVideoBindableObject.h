@interface TXCVideoBindableObject : NSObject <TXIVideoBindable>
{
    BOOL _checkInterval; // +0x8
    NSString * _tag; // +0x10
    id <TXIVideoBindable> _nextBindable; // +0x18
}
- (id)init;
- (id)bindTo:(id)arg1;
- (void)processVideoFrameResult:(id)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (BOOL)checkInterval;
- (void)setCheckInterval:(BOOL)arg1;
- (id)nextBindable;
- (void)setNextBindable:(id)arg1;
- (void).cxx_destruct;
@end

