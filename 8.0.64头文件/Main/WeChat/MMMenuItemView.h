@interface MMMenuItemView : UIButton <MMMenuItemProtocol>
{
    BOOL _isShow; // +0x8
    id <MMMenuItemViewDelegate> _delegate; // +0x10
    MMMenuItem * _menuItem; // +0x18
    UIImageView * _iconImageView; // +0x20
    UILabel * _textLabel; // +0x28
    UILabel * _menuSubtitleLabel; // +0x30
    double _leftPadding; // +0x38
    double _rightPadding; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithItem:(id)arg1;
- (void)updateWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)onItemButtonClick:(id)arg1;
- (void)onMenuItemViewDidShow;
- (void)onMenuItemAnimatorChange:(id)arg1;
- (id)getIconImageView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)menuItem;
- (void)setMenuItem:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)menuSubtitleLabel;
- (void)setMenuSubtitleLabel:(id)arg1;
- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg1;
- (double)leftPadding;
- (void)setLeftPadding:(double)arg1;
- (double)rightPadding;
- (void)setRightPadding:(double)arg1;
- (void).cxx_destruct;
@end
