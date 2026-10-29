@interface WAWebViewPlugin_EmbedMap : WAWebViewPlugin_embedView <WAMapViewDelegate, WCMainWindowExt>
{
    BOOL m_isDarkmodeEnabled; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)onWeAppEnterBackground:(id)arg1;
- (void)onWeAppEnterForeground:(id)arg1;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)insertMap:(id)arg1 completion:(id /* block */)arg2;
- (void)innerInsertMapAfterAuth:(id)arg1 showLocation:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)getMapView:(unsigned int)arg1;
- (BOOL)removeMap:(unsigned int)arg1;
- (void)sendEvent:(id)arg1 param:(id)arg2 sendWebview:(BOOL)arg3;
- (void)onMarkerClick:(id)arg1 data:(id)arg2;
- (void)onControlClick:(id)arg1 data:(id)arg2;
- (void)onRegionWillChange:(id)arg1 byAnimate:(BOOL)arg2 byGesture:(BOOL)arg3;
- (void)onRegionDidChange:(id)arg1 reason:(unsigned long long)arg2 byAnimate:(BOOL)arg3 byGesture:(BOOL)arg4;
- (void)onMapTap:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2;
- (void)onMapUserLocationTap:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2;
- (void)onMapCalloutClick:(id)arg1 data:(id)arg2;
- (void)onMapLabelClick:(id)arg1 data:(id)arg2;
- (void)onMapPoiClick:(id)arg1 poi:(id)arg2;
- (void)onMapClusterClick:(id)arg1 annotation:(id)arg2;
- (void)onMapOverlayClick:(id)arg1 overlay:(id)arg2 coordinate:(CLLocationCoordinate2D)arg3;
- (void)onMapMarkerClusterCreate:(id)arg1 annotation:(id)arg2;
- (void)onMapMarkerShowByCollision:(id)arg1 markerId:(long long)arg2;
- (void)onMapMarkerHideByCollision:(id)arg1 markerId:(long long)arg2;
- (void)onVisualLayerEvent:(id)arg1 inMap:(id)arg2 eventType:(id)arg3 eventInfoJson:(id)arg4;
- (void)onMapAuthSuccess:(id)arg1;
- (void)onMapAuthFail:(id)arg1 withError:(id)arg2;
- (id)makeClusterInfo:(id)arg1;
- (id)makeIndoorInfoByMapId:(unsigned int)arg1 building:(id)arg2 level:(id)arg3;
- (void)onMapIndoorChange:(id)arg1 building:(id)arg2 level:(id)arg3;
- (BOOL)enableOverseaServerProtocol;
@end

