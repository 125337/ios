@interface NavigateLogicController : MMObject <WCActionSheetDelegate, IMapDirectionsMgrExt>
{
    int _scene; // +0x8
    QMapView * _mapView; // +0x10
    NavigateItem * _navigateFrom; // +0x18
    NavigateItem * _navigateTo; // +0x20
    NSMutableArray * _navigateMaps; // +0x28
    QPolyline * _lastDirections; // +0x30
    unsigned long long _topMapType; // +0x38
    id <NavigateLogicControllerDelegate> _delegate; // +0x40
    NSString * _sessionId; // +0x48
}
- (id)initWithMapView:(id)arg1 Scene:(int)arg2;
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
- (void)showNavigateMenu:(id)arg1 From:(id)arg2 To:(id)arg3 InView:(id)arg4;
- (void)showWeAppMenu:(id)arg1 WeApps:(id)arg2;
- (void)navigateFrom:(id)arg1 To:(id)arg2 UsingMap:(id)arg3;
- (void)showDirectionsFrom:(id)arg1 To:(id)arg2;
- (void)showDirections;
- (void)hideDirections;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
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
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
