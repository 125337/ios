@interface MMFinderLivePromoteDisplayRecordInfo : NSObject
{
    BOOL _supportDisplayCountDown; // +0x8
    BOOL _isBeginCountDown; // +0x9
    BOOL _isCancelCountDown; // +0xa
    double _beginDisplayTime; // +0x10
    double _endDisplayTime; // +0x18
    NSString * _promoteId; // +0x20
    id /* block */ _timeoutCallback; // +0x28
    double _enableDisplayDuration; // +0x30
    double _sumCostDuration; // +0x38
}
- (BOOL)udpateEnableDisplayDuraion:(unsigned int)arg1;
- (void)beginDisplay;
- (void)endDisplay;
- (void)cancelCountDown;
- (void)destroy;
- (BOOL)needCountDown;
- (void)startCountDown;
- (void)stopCountDown;
- (void)modifyCountDown;
- (void)handleCountDownEnd;
- (void)updateBeginDisplayTime;
- (void)updateEndDisplayTime;
- (double)beginDisplayTime;
- (void)setBeginDisplayTime:(double)arg1;
- (double)endDisplayTime;
- (void)setEndDisplayTime:(double)arg1;
- (BOOL)supportDisplayCountDown;
- (void)setSupportDisplayCountDown:(BOOL)arg1;
- (id)promoteId;
- (void)setPromoteId:(id)arg1;
- (id /* block */)timeoutCallback;
- (void)setTimeoutCallback:(id /* block */)arg1;
- (double)enableDisplayDuration;
- (void)setEnableDisplayDuration:(double)arg1;
- (double)sumCostDuration;
- (void)setSumCostDuration:(double)arg1;
- (BOOL)isBeginCountDown;
- (void)setIsBeginCountDown:(BOOL)arg1;
- (BOOL)isCancelCountDown;
- (void)setIsCancelCountDown:(BOOL)arg1;
- (void).cxx_destruct;
@end
