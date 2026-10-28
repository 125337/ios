@interface MJGeographicPicker : UIView
{
    id /* block */ _didSelectUpdateHandler; // +0x8
    NSString * _title; // +0x10
    UIView * _containerView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _contentLabel; // +0x28
    UIImageView * _icon; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupViews;
- (void)setTitle:(id)arg1;
- (id /* block */)didSelectUpdateHandler;
- (void)setDidSelectUpdateHandler:(id /* block */)arg1;
- (id)title;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void).cxx_destruct;
@end
