@interface MMFinderLiveConnectedMicHintBaseViewCell : UIView
{
    BOOL _showSeparatorBar; // +0x8
    double _hintLabelTop; // +0x10
    UILabel * _hintLabel; // +0x18
    UIView * _separatorBar; // +0x20
    double _targetBottom; // +0x28
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (id)hint;
- (void)setHint:(id)arg1;
- (void)layoutSubviews;
- (void)resetState;
- (void)setTextLabelBottom:(double)arg1;
- (BOOL)showSeparatorBar;
- (void)setShowSeparatorBar:(BOOL)arg1;
- (double)hintLabelTop;
- (void)setHintLabelTop:(double)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (double)targetBottom;
- (void)setTargetBottom:(double)arg1;
- (void).cxx_destruct;
@end
