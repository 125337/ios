@interface TXYHYTuringModule : NSObject
{
    BOOL _isExpires; // +0x8
    id <TXYHYTuringModuleDelegate> _delegate; // +0x10
    NSTimer * _timer; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)turingTaskStart:(id)arg1 timeout:(double)arg2 lic:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isExpires;
- (void)setIsExpires:(BOOL)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
