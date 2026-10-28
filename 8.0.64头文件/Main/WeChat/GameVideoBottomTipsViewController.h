@interface GameVideoBottomTipsViewController : GameCenterNativeVc
{
    UIView * _backgroundView; // +0x70
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)doNothing;
- (BOOL)dismissWhenTapOutside;
- (void)setupOkButton:(id)arg1;
- (BOOL)hideOkButton;
- (double)contentHeight;
- (void)setupContentView:(id)arg1;
- (void)show:(id)arg1;
- (void)close;
- (void)closeWithCompletion:(id /* block */)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)makePartCornerToView:(id)arg1 corner:(unsigned long long)arg2 radius:(double)arg3;
- (void).cxx_destruct;
@end
