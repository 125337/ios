@interface WCFinderMyTabFinderCardWordingView : UIView
{
    UIView * _topLine; // +0x8
    UILabel * _wordingLabel; // +0x10
    UIImageView * _arrowView; // +0x18
    MMBadgeView * _redDotView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setWording:(id)arg1;
- (id)wording;
- (void)makeTopLine;
- (void)makeRedDotView;
- (void)makeWordingLabel;
- (void)makeArrow;
- (void)_layoutSubview;
- (void)setShowRedDot:(BOOL)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (void).cxx_destruct;
@end
