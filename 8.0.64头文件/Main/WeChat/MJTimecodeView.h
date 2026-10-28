@interface MJTimecodeView : MMUIView
{
    unsigned long long _fontConfiguration; // +0x8
    UILabel * _currentTimeLabel; // +0x10
    UILabel * _durationLabel; // +0x18
    UILabel * _separatorLabel; // +0x20
    UIStackView * _labelContainer; // +0x28
    UIFont * _normalFont; // +0x30
    UIFont * _subscriptFont; // +0x38
    UIColor * _currentTimeColor; // +0x40
    UIColor * _durationColor; // +0x48
    struct _currentTime; // +0x50
    struct _currentDuration; // +0x68
    BOOL _shouldShowHourDigit; // +0x80
    NSMutableAttributedString * _currentTimeAttributedString; // +0x88
    NSMutableAttributedString * _durationAttributedString; // +0x90
    unsigned long long _displayMode; // +0x98
    struct _frameDuration; // +0xa0
}
+ (id)timecodeFontOfSize:(double)arg1 weight:(double)arg2;
- (id)initWithFontConfiguration:(unsigned long long)arg1;
- (id)initWithFontConfiguration:(unsigned long long)arg1 currentTimeColor:(id)arg2 durationColor:(id)arg3;
- (void)commonInit;
- (void)setTime:(struct)arg1;
- (void)setDuration:(struct)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)updateTimeLabel;
- (void)updateDurationLabel;
- (struct)frameDuration;
- (void)setFrameDuration:(struct)arg1;
- (unsigned long long)displayMode;
- (void).cxx_destruct;
@end
