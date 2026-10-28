@interface HintWithJumpWebViewHalfScreenViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    NSString * _title; // +0x70
    NSString * _url; // +0x78
    NSString * _confirmWording; // +0x80
    NSString * _cancelWording; // +0x88
    id /* block */ _urlClickCallabck; // +0x90
    id /* block */ _confirmCallback; // +0x98
    id /* block */ _cancelCallback; // +0xa0
    unsigned long long _supportedOrientationMask; // +0xa8
    OrientationSafePageSheetContainer * container; // +0xb0
}
- (id)initWithTitle:(id)arg1 withBottomUrl:(id)arg2 withConfirmCallback:(id /* block */)arg3 withCancelCallback:(id /* block */)arg4 withBottomUrlClickCallback:(id /* block */)arg5 withConfirmWording:(id)arg6 wtihCancelWording:(id)arg7 withSupportedOrientationMask:(unsigned long long)arg8;
- (id)pageSheetContainer;
- (void)viewDidLoad;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
@end
