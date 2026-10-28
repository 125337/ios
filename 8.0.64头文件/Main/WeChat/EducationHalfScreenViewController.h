@interface EducationHalfScreenViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    NSString * _title; // +0x70
    NSString * _hint; // +0x78
    BOOL _isFirstTime; // +0x80
    BOOL _isLandscape; // +0x81
    id /* block */ _confirmCallback; // +0x88
    unsigned long long _supportedOrientationMask; // +0x90
    OrientationSafePageSheetContainer * container; // +0x98
}
- (id)initWithTitle:(id)arg1 withHint:(id)arg2 withIsLandscape:(BOOL)arg3 withIsFirstTime:(BOOL)arg4 withConfirmCallback:(id /* block */)arg5 withSupportedOrientationMask:(unsigned long long)arg6;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)pageSheetContainer;
- (void)viewDidLoad;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (long long)styleForPageSheetConfirmButton;
- (void).cxx_destruct;
@end
