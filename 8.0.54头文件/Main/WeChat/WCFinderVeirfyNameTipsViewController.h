@interface WCFinderVeirfyNameTipsViewController : MMWindowViewController
{
    NSString * _tips; // +0x78
    NSString * _tinyAppName; // +0x80
    NSString * _tinyAppPath; // +0x88
    id <WCFinderVeirfyNameTipsViewControllerDelegate> _delegate; // +0x90
    UIView * _backgroundView; // +0x98
    UIView * _contentView; // +0xa0
    UILabel * _tipsLabel; // +0xa8
    UIButton * _confirmButton; // +0xb0
    UIButton * _cancelButton; // +0xb8
}
- (void)viewDidLoad;
- (void)showTips;
- (void)hide;
- (void)onClickConfirm;
- (void)startVerify;
- (id)roundCornersOnView:(id)arg1 onTopLeft:(BOOL)arg2 topRight:(BOOL)arg3 bottomLeft:(BOOL)arg4 bottomRight:(BOOL)arg5 radius:(float)arg6;
- (id)backgroundView;
- (id)contentView;
- (id)tipsLabel;
- (id)confirmButton;
- (id)cancelButton;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)tinyAppName;
- (void)setTinyAppName:(id)arg1;
- (id)tinyAppPath;
- (void)setTinyAppPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end

