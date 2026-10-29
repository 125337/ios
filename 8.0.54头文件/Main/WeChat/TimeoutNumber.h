@interface TimeoutNumber : UIView
{
    BOOL _isYogaRightAlignment; // +0x8
    BOOL _timeout; // +0x9
    BOOL _grayIndicator; // +0xa
    ScrollNumber * _scrollNumber; // +0x10
    MMUIActivityIndicatorView * _indicatorView; // +0x18
    UILabel * _unitLabel; // +0x20
    double _indicatorViewMargin; // +0x28
    long long _indicatorAlign; // +0x30
    long long _textAlign; // +0x38
    double _delay; // +0x40
    unsigned long long _noAnimationStart; // +0x48
    double _noAnimationDelay; // +0x50
}
- (void)noAnimationDelay:(double)arg1;
- (CGSize)singleNumberSize;
- (CGSize)dotSize;
- (CGSize)unitSize;
- (void)updateTextAlignment:(long long)arg1;
- (void)updateIndicatorMargin:(double)arg1;
- (void)updateIndicatorAlign:(long long)arg1;
- (void)useGrayIndicator:(BOOL)arg1;
- (id)init;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateUnit:(id)arg1;
- (void)startTimeout:(double)arg1;
- (void)stopTimeout;
- (void)layoutSubviews;
- (void)updateUnitLabel;
- (void)updateScrollNumber;
- (void)updateActivity;
- (void)adjustIndicator;
- (void)updateFont:(id)arg1;
- (void)updateColor:(id)arg1;
- (void)updateDotPos:(unsigned int)arg1;
- (void)updateAnimationTime:(double)arg1;
- (void)updateAnimationDelay:(double)arg1;
- (void)updateNumberInternal:(unsigned long long)arg1;
- (void)updateNumber:(unsigned long long)arg1;
- (unsigned long long)numWidth:(unsigned long long)arg1;
- (void)setIsYogaRightAlignment:(BOOL)arg1;
- (void)defaultNumber:(unsigned long long)arg1;
- (CGSize)scrollNumberSize;
- (double)animationTime;
- (id)unit;
- (id)getAccessibilityLabelString;
- (BOOL)isYogaRightAlignment;
- (id)scrollNumber;
- (void)setScrollNumber:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (BOOL)timeout;
- (void)setTimeout:(BOOL)arg1;
- (id)unitLabel;
- (void)setUnitLabel:(id)arg1;
- (BOOL)grayIndicator;
- (void)setGrayIndicator:(BOOL)arg1;
- (double)indicatorViewMargin;
- (void)setIndicatorViewMargin:(double)arg1;
- (long long)indicatorAlign;
- (void)setIndicatorAlign:(long long)arg1;
- (long long)textAlign;
- (void)setTextAlign:(long long)arg1;
- (double)delay;
- (void)setDelay:(double)arg1;
- (unsigned long long)noAnimationStart;
- (void)setNoAnimationStart:(unsigned long long)arg1;
- (double)noAnimationDelay;
- (void)setNoAnimationDelay:(double)arg1;
- (void).cxx_destruct;
@end

