@interface MMRollableLabelViewConfig : NSObject
{
    BOOL _autoAnimation; // +0x8
    double _maxLabelWidth; // +0x10
    double _rollSpeedPerSecond; // +0x18
    double _reverseInterval; // +0x20
    UIFont * _labelFont; // +0x28
    double _minHeight; // +0x30
    unsigned long long _rollingMode; // +0x38
    double _scrollSpacing; // +0x40
    double _iconTextPading; // +0x48
    CGSize _pagSize; // +0x50
    UIEdgeInsets _contentInset; // +0x60
}
- (double)maxLabelWidth;
- (void)setMaxLabelWidth:(double)arg1;
- (double)rollSpeedPerSecond;
- (void)setRollSpeedPerSecond:(double)arg1;
- (double)reverseInterval;
- (void)setReverseInterval:(double)arg1;
- (UIEdgeInsets)contentInset;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (id)labelFont;
- (void)setLabelFont:(id)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (unsigned long long)rollingMode;
- (void)setRollingMode:(unsigned long long)arg1;
- (double)scrollSpacing;
- (void)setScrollSpacing:(double)arg1;
- (BOOL)autoAnimation;
- (void)setAutoAnimation:(BOOL)arg1;
- (CGSize)pagSize;
- (void)setPagSize:(CGSize)arg1;
- (double)iconTextPading;
- (void)setIconTextPading:(double)arg1;
- (void).cxx_destruct;
@end

