@interface FileExpireViewController : MMUIViewController
{
    MMUIImageView * _iconView; // +0x70
    MMUILabel * _tipsLabel; // +0x78
    UIButton * _confirmButton; // +0x80
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (id)iconView;
- (id)tipsLabel;
- (id)confirmButton;
- (void)setIconView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
