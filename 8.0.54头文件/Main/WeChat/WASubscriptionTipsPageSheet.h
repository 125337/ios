@interface WASubscriptionTipsPageSheet : WAPageSheet
{
    id /* block */ _okAction; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _titlelLabel; // +0x18
    UILabel * _descLabel; // +0x20
    UIImageView * _imageView; // +0x28
    UIButton * _okButton; // +0x30
}
- (double)contentHeight;
- (id)init;
- (void)setupUI;
- (id /* block */)okAction;
- (void)setOkAction:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titlelLabel;
- (void)setTitlelLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)okButton;
- (void)setOkButton:(id)arg1;
- (void).cxx_destruct;
@end

