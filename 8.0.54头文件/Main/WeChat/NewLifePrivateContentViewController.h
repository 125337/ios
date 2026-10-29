@interface NewLifePrivateContentViewController : MMUIViewController
{
    NSString * _message; // +0x68
    MMUIScrollView * _backgroundView; // +0x70
    UIImageView * _imageView; // +0x78
    UILabel * _titleLabel; // +0x80
    UIButton * _confirmButton; // +0x88
}
- (void)viewDidLoad;
- (BOOL)shouldInteractivePop;
- (BOOL)useTransparentNavibar;
- (void)initLayout;
- (id)backgroundView;
- (id)imageView;
- (id)titleLabel;
- (id)confirmButton;
- (id)titleText;
- (void)onTapConfirmButton;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end

