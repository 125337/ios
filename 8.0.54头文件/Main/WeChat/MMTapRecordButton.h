@interface MMTapRecordButton : UIView
{
    BOOL _hasIgnoreUntilMaxSeconds; // +0x8
    id <MMTapRecordButtonEventReciever> _reciever; // +0x10
    double _maxSeconds; // +0x18
    unsigned long long _state; // +0x20
    UIView * _redPart; // +0x28
    UIView * _blurPart; // +0x30
    MMRingView * _normalRing; // +0x38
    MMRingView * _processRing; // +0x40
    NSObject<OS_dispatch_source> * _updateTimer; // +0x48
    double _startTime; // +0x50
    UILabel * _tips; // +0x58
    UILabel * _timeLabel; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)layoutTips;
- (void)setSubviewsNormal;
- (void)setSubviewsRecord;
- (void)onTap:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)reset;
- (void)updateProcess;
- (void)startUpdateProcess;
- (void)stopUpdateProcess;
- (void)dealloc;
- (id)reciever;
- (void)setReciever:(id)arg1;
- (double)maxSeconds;
- (void)setMaxSeconds:(double)arg1;
- (unsigned long long)state;
- (id)redPart;
- (void)setRedPart:(id)arg1;
- (id)blurPart;
- (void)setBlurPart:(id)arg1;
- (id)normalRing;
- (void)setNormalRing:(id)arg1;
- (id)processRing;
- (void)setProcessRing:(id)arg1;
- (id)updateTimer;
- (void)setUpdateTimer:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (BOOL)hasIgnoreUntilMaxSeconds;
- (void)setHasIgnoreUntilMaxSeconds:(BOOL)arg1;
- (void).cxx_destruct;
@end

