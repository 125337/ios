@interface WANavigateLogicController : MMObject <WCActionSheetDelegate>
{
    id <WANavigateLogicControllerDelegate> _delegate; // +0x8
    NSArray * _allMaps; // +0x10
    NSArray * _displayMaps; // +0x18
    WAMapAppNavigateItem * _navigateFrom; // +0x20
    WAMapAppNavigateItem * _navigateTo; // +0x28
    UIViewController * _showVC; // +0x30
}
- (id)init;
- (void)initAllMaps;
- (id)getUrlSchemeUsingMap:(id)arg1;
- (id)getOpenButtonTitle:(id)arg1;
- (id)getInstallButtonTitle:(id)arg1;
- (id)selectDisplayNavigateMaps;
- (BOOL)showOpenMapAppMenuFrom:(id)arg1 To:(id)arg2 InVC:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)navigateUsingMap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)allMaps;
- (void)setAllMaps:(id)arg1;
- (id)displayMaps;
- (void)setDisplayMaps:(id)arg1;
- (id)navigateFrom;
- (void)setNavigateFrom:(id)arg1;
- (id)navigateTo;
- (void)setNavigateTo:(id)arg1;
- (id)showVC;
- (void)setShowVC:(id)arg1;
- (void).cxx_destruct;
@end
