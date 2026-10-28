@interface MMFinderLiveConnectedMicHintBaseViewCell : UIView
{
    UILabel * _hintLabel; // +0x8
    UIView * _separatorBar; // +0x10
    double _targetBottom; // +0x18
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (id)hint;
- (void)setHint:(id)arg1;
- (void)layoutSubviews;
- (void)resetState;
- (void)setTextLabelBottom:(double)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (double)targetBottom;
- (void)setTargetBottom:(double)arg1;
- (void).cxx_destruct;
@end
