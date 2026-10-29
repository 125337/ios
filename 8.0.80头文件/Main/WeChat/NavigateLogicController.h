@interface NavigateLogicController : MMObject <WCActionSheetDelegate, IMapDirectionsMgrExt, MMNavigateMapAppDelegate>
{
    int _scene; // +0x8
    QMapView * _mapView; // +0x10
    NavigateItem * _navigateFrom; // +0x18
    NavigateItem * _navigateTo; // +0x20
    NSMutableArray * _navigateMaps; // +0x28
    QPolyline * _lastDirections; // +0x30
    int _topMapType; // +0x38
    BOOL _showAdMap; // +0x3c
    BOOL _hasReportAdExposeEnd; // +0x3d
    id <NavigateLogicControllerDelegate> _delegate; // +0x40
    NSDictionary * _reportParams; // +0x48
    WCActionSheet * _actionSheetView; // +0x50
    NSMutableArray * _displayMaps; // +0x58
    NSMutableArray * _devices; // +0x60
    NSMutableArray * _displayItems; // +0x68
    NSMutableArray * _customViewModels; // +0x70
    MagicAdInfo * _adInfo; // +0x78
    UIView * _baseView; // +0x80
    MMNavigateMapAppSheetView * _mapAppSheetView; // +0x88
    NSString * _sessionId; // +0x90
}
- (id)initWithMapView:(id)arg1 Scene:(int)arg2;
- (id)getSosoMap;
- (void)updateMapView:(id)arg1;
- (id)getUserLocationByMapView;
- (id)displayNavigateMapNames;
- (id)displayNavigateMaps;
- (void)sortMapsByTopMapType;
- (BOOL)isLocationInChina:(CLLocationCoordinate2D)arg1;
- (id)getOpenButtonTitle:(id)arg1;
- (id)getInstallButtonTitle:(id)arg1;
- (id)getUrlScheme:(id)arg1 From:(id)arg2 To:(id)arg3 MapType:(int)arg4;
- (void)showNavigateMenuWithTopMapType:(unsigned long long)arg1 To:(id)arg2 InView:(id)arg3;
- (void)showNavigateMenu:(id)arg1 From:(id)arg2 To:(id)arg3 WithWeApp:(id)arg4 WeAppDatas:(id)arg5 InView:(id)arg6;
- (void)getAdInfo;
- (int)getMapListStyleConfig;
- (BOOL)useOldStyle;
- (BOOL)useOldSequence;
- (int)getAdConfig;
- (BOOL)shouldShowAd;
- (void)updateAdFrequanceConfig:(BOOL)arg1 updateClick:(BOOL)arg2;
- (void)showNewNavigateMenu;
- (id)getReportParams;
- (void)showNavigateMenu:(id)arg1 From:(id)arg2 To:(id)arg3 InView:(id)arg4;
- (void)showWeAppMenu:(id)arg1 WeApps:(id)arg2;
- (void)navigateFrom:(id)arg1 To:(id)arg2 UsingMap:(id)arg3;
- (void)showDirectionsFrom:(id)arg1 To:(id)arg2;
- (void)showDirections;
- (void)hideDirections;
- (void)clickAtIndex:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleMapAppClick:(long long)arg1;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (BOOL)checkIsSelectWeAppButtonTitle:(id)arg1 OnActionSheet:(id)arg2;
- (void)openWeApp:(id)arg1;
- (id)mapNameForMap:(id)arg1;
- (void)OnGetDirections:(id)arg1 RequestItem:(id)arg2;
- (void)OnRequestDirectionsError:(int)arg1;
- (id)getNavigationItemEventSdkReportParams:(id)arg1;
- (void)reportNavigationActionSheetItemExpose;
- (void)reportNavigationActionSheetItemClick:(id)arg1 IsInstalled:(BOOL)arg2;
- (long long)getNavigationItemReportCodeForMapType:(int)arg1;
- (id)reportStringFromDisplayNavigateMaps:(id)arg1;
- (void)reportAdExposeEnd;
- (id)mapView;
- (void)setMapView:(id)arg1;
- (id)navigateFrom;
- (void)setNavigateFrom:(id)arg1;
- (id)navigateTo;
- (void)setNavigateTo:(id)arg1;
- (id)navigateMaps;
- (void)setNavigateMaps:(id)arg1;
- (id)lastDirections;
- (void)setLastDirections:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (id)actionSheetView;
- (void)setActionSheetView:(id)arg1;
- (id)displayMaps;
- (void)setDisplayMaps:(id)arg1;
- (id)devices;
- (void)setDevices:(id)arg1;
- (id)displayItems;
- (void)setDisplayItems:(id)arg1;
- (id)customViewModels;
- (void)setCustomViewModels:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (BOOL)showAdMap;
- (void)setShowAdMap:(BOOL)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (BOOL)hasReportAdExposeEnd;
- (void)setHasReportAdExposeEnd:(BOOL)arg1;
- (id)mapAppSheetView;
- (void)setMapAppSheetView:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
