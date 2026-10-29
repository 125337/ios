@interface MMAssetPickerNavTitleView : UIView <MMDropableTitleViewAbility>
{
    MMUILabel * _titleLabel; // +0x8
}
- (id)initWithTitle:(id)arg1;
- (void)updateTitle:(id)arg1 animated:(BOOL)arg2;
- (void)rotateArrowWithAnimated:(BOOL)arg1;
- (void)setIsEnable:(BOOL)arg1;
- (void)resizeToFitText;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
