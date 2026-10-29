@interface WCFinderStreamProfileHeaderViewController : MMUIViewController
{
    BOOL _alawayDarkModel; // +0x68
}
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (id)headerView;
- (void)setAlawayDarkModel:(BOOL)arg1;
- (long long)overrideUserInterfaceStyle;
- (long long)currentMMUserInterfaceStyle;
- (BOOL)useTransparentNavibar;
- (BOOL)alawayDarkModel;
@end

