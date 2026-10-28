@interface WACampusVoipTipsPageSheet : WAPageSheet
{
    id /* block */ _okAction; // +0x8
    UILabel * _titlelLabel; // +0x10
    UILabel * _descLabel; // +0x18
    UIImageView * _imageView; // +0x20
    UIButton * _okButton; // +0x28
}
- (double)contentHeight;
- (id)init;
- (void)setupUI;
- (id /* block */)okAction;
- (void)setOkAction:(id /* block */)arg1;
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
