@interface WANavigateLogicController : MMObject <WCActionSheetDelegate>
{
    BOOL _isHasExpandView; // +0x8
    BOOL _isTencentMapInstalled; // +0x9
    NSString * _appid; // +0x10
    NSDictionary * _toPoiIdDic; // +0x18
    unsigned long long _preferAppType; // +0x20
    id <WANavigateLogicControllerDelegate> _delegate; // +0x28
    NSArray * _allMaps; // +0x30
    NSArray * _displayMaps; // +0x38
    WAMapAppNavigateItem * _navigateFrom; // +0x40
    WAMapAppNavigateItem * _navigateTo; // +0x48
    UIViewController * _showVC; // +0x50
    NSMutableArray * _buttonCustomViewModels; // +0x58
    WCHeaderActionSheet * _actionSheet; // +0x60
}
- (id)init;
- (void)initAllMaps;
- (BOOL)isTencentMapInstalled;
- (id)getUrlSchemeUsingMap:(id)arg1;
- (id)getOpenButtonTitle:(id)arg1;
- (id)getInstallButtonTitle:(id)arg1;
- (id)selectDisplayNavigateMaps;
- (BOOL)showOpenMapAppMenuFrom:(id)arg1 To:(id)arg2 InVC:(id)arg3;
- (void)addCancelViewToCustomViews;
- (void)addExpandViewToCustomViews;
- (void)addPreferAppViewToCustomViews:(id)arg1;
- (void)addAllDisplayMapsToCustomViews;
- (id)getDisplayMapsJointName;
- (id)getPreferMapItem;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)navigateUsingMap:(id)arg1;
- (void)report12809:(long long)arg1 clickItem:(id)arg2 exposeMapList:(id)arg3;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)toPoiIdDic;
- (void)setToPoiIdDic:(id)arg1;
- (unsigned long long)preferAppType;
- (void)setPreferAppType:(unsigned long long)arg1;
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
- (id)buttonCustomViewModels;
- (void)setButtonCustomViewModels:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (BOOL)isHasExpandView;
- (void)setIsHasExpandView:(BOOL)arg1;
- (void)setIsTencentMapInstalled:(BOOL)arg1;
- (void).cxx_destruct;
@end
