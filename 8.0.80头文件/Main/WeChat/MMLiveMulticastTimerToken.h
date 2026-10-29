@interface MMLiveMulticastTimerToken : NSObject
{
    NSString * _identifier; // +0x8
    MMLiveMulticastTimer * _timer; // +0x10
}
- (void)subscribe:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
