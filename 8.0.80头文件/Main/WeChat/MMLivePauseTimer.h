@interface MMLivePauseTimer : NSObject
{
    long long _accumulatedTime; // +0x8
    long long _startTime; // +0x10
    id /* block */ _progressBlock; // +0x18
    MMTimer * _timer; // +0x20
}
- (id)init;
- (id)initWithAccumulatedTime:(long long)arg1;
- (void)start;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)countup;
- (void)_adjustStartTimeWithAccumulatedTime:(long long)arg1;
- (void)_adjustAccumulatedTimeForResume;
- (void)adjustAccumulatedTime:(long long)arg1;
- (void)adjustAccumulatedTimeIfNeeded:(long long)arg1;
- (void)adjustAccumulatedTimeIfNeeded:(long long)arg1 adjustedMin:(long long)arg2 adjustedMax:(long long)arg3;
- (void)notifyProgress;
- (long long)accumulatedTime;
- (void)setAccumulatedTime:(long long)arg1;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
