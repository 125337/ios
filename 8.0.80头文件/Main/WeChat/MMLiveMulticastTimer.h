@interface MMLiveMulticastTimer : NSObject
{
    NSString * _identifier; // +0x8
    MMLiveMulticastTimerToken * _token; // +0x10
    MMTimer * _timer; // +0x18
}
- (id)initWithTimeInterval:(double)arg1 repeating:(BOOL)arg2;
- (void)dealloc;
- (void)invalidate;
- (void)subscribe:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (void)onTick;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
