@interface WCFinderTipsViewController : MMWindowViewController
{
    BOOL _supportLandscape; // +0x74
    BOOL _lockOrientation; // +0x75
    id <WCFinderTipsViewControllerDelegate> _delegate; // +0x78
    UIColor * _confirmButtonBkgColor; // +0x80
    UIColor * _confirmButtonTextColor; // +0x88
    UIColor * _cancelButtonTextColor; // +0x90
    UIButton * _confirmButton; // +0x98
    UIView * _backgroundView; // +0xa0
    UIView * _contentView; // +0xa8
    UIImageView * _iconView; // +0xb0
    UILabel * _titleLabel; // +0xb8
    UILabel * _tipsLabel; // +0xc0
    UIButton * _cancelButton; // +0xc8
}
- (void)viewDidLoad;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showTipsWithTipsDetail:(id)arg1 confirmButtonTitle:(id)arg2;
- (void)showTipsWithTipsTitle:(id)arg1 tipsDetail:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4;
- (void)setButtonTextFont:(id)arg1;
- (void)cancel;
- (void)confirm;
- (void)hide;
- (void)realHideWithoutReport;
- (id)roundCornersOnView:(id)arg1 onTopLeft:(BOOL)arg2 topRight:(BOOL)arg3 bottomLeft:(BOOL)arg4 bottomRight:(BOOL)arg5 radius:(float)arg6;
- (id)backgroundView;
- (id)contentView;
- (id)iconView;
- (id)titleLabel;
- (id)tipsLabel;
- (id)confirmButton;
- (id)cancelButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)confirmButtonBkgColor;
- (void)setConfirmButtonBkgColor:(id)arg1;
- (id)confirmButtonTextColor;
- (void)setConfirmButtonTextColor:(id)arg1;
- (id)cancelButtonTextColor;
- (void)setCancelButtonTextColor:(id)arg1;
- (BOOL)supportLandscape;
- (void)setSupportLandscape:(BOOL)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (BOOL)lockOrientation;
- (void)setLockOrientation:(BOOL)arg1;
- (void).cxx_destruct;
@end

