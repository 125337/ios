@interface MMFinderLiveShopShelfAnchorLocalLifeMiniAppButton : UIButton
{
    MMPaddingView * _miniAppImageView; // +0x8
    UILabel * _nameLabel; // +0x10
    UILabel * _jumpLabel; // +0x18
    UIImageView * _arrowView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithHeaderViewModel:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)accessibilityLabel;
- (void)updateStyleIsHightLighted:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)miniAppImageView;
- (void)setMiniAppImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)jumpLabel;
- (void)setJumpLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end

