@interface MMFinderLiveCashOutAuthTypeView : UIView
{
    UIView * _topLine; // +0x8
    UIView * _bottomLine; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subtitleLabel; // +0x20
    UILabel * _stateLabel; // +0x28
    UIImageView * _arrowView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateTitle:(id)arg1 subtitle:(id)arg2;
- (void)updateIsDone:(BOOL)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
