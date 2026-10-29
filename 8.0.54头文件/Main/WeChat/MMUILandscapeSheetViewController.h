@interface MMUILandscapeSheetViewController : MMUIViewController <MMUIViewControllerOverrideOrientationMaskProtocol>
{
    id /* block */ _onRequirePortrait; // +0x68
    unsigned long long _overrideOrientationMask; // +0x70
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)commonInit;
- (BOOL)isFullPageViewOverLiveRoom;
- (void)setOverrideOrientationMask:(unsigned long long)arg1;
- (void)adjustTableViewInset:(id)arg1;
- (BOOL)isPortrait;
- (BOOL)shouldOverrideMethods;
- (double)getContentViewY;
- (double)getNavigationBarHeight;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (void)didAskSearchControllerShouldBeginWithResult:(BOOL)arg1;
- (void)didAppearFromSearchController;
- (id /* block */)onRequirePortrait;
- (void)setOnRequirePortrait:(id /* block */)arg1;
- (unsigned long long)overrideOrientationMask;
- (void).cxx_destruct;
@end

