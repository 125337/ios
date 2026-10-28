@interface WCFinderNativeDramaIAAFeedCountDownTipsViewModel : NSObject
{
    unsigned long long _state; // +0x8
    long long _countDown; // +0x10
}
+ (id)modelWithState:(unsigned long long)arg1 countDown:(long long)arg2;
- (id)textContent;
- (id)_countDownContent;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (long long)countDown;
- (void)setCountDown:(long long)arg1;
@end
