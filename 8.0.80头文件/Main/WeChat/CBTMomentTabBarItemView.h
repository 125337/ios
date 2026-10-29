@interface CBTMomentTabBarItemView : UIView
{
    BOOL _isSelected; // +0x8
    CBTMomentTabBarInfo * _info; // +0x10
    UILabel * _titleLabel; // +0x18
    MMBadgeView * _redDotView; // +0x20
}
- (id)initWithInfo:(id)arg1;
- (void)layoutContentView;
- (void)layoutRedDotView;
- (void)resetRedDot;
- (void)setIsSelected:(BOOL)arg1;
- (void)setupTitleLabelColor;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (BOOL)isSelected;
- (void).cxx_destruct;
@end
