@interface MMLiveMagicRewardResourceCheckCallbackObj : NSObject
{
    id /* block */ _callback; // +0x8
    double _maxWaitTime; // +0x10
    id /* block */ _timeOverLimitBlock; // +0x18
}
- (void)invokeTimeOverLimitAutoCheckIfNeed;
- (void)timerOverLimit;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (double)maxWaitTime;
- (void)setMaxWaitTime:(double)arg1;
- (id /* block */)timeOverLimitBlock;
- (void)setTimeOverLimitBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
