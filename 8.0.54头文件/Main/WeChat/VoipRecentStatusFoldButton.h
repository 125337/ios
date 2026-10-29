@interface VoipRecentStatusFoldButton : UIView
{
    UILabel * _titleLabel; // +0x8
    UIImageView * _arrowIconImageView; // +0x10
    UIView * _containerView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowIconImageView;
- (void)setArrowIconImageView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end

