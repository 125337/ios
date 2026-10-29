@interface WCFinderMinimizeSilenceMonitor : NSObject
{
    NSString * _tid; // +0x8
    id _target; // +0x10
    SEL _action; // +0x18
}
- (void)cancel;
- (void)invoke;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (void).cxx_destruct;
@end
