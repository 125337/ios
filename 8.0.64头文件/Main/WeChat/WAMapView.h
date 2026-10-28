@interface WAMapView : QMapView <QMapViewDelegate, WAClusterViewDelegate, WAMapAnnotationViewDelegate, QMapViewIndoorDelegate, QVisualLayerDelegate>
{
    QMUClusterManager * _clusterMgr; // +0x8
    BOOL _isEnableDarkmode; // +0x10
    BOOL _enableDefaultClusterStyle; // +0x11
    BOOL _zoomOnClusterClick; // +0x12
    BOOL _isShowsUserLocation; // +0x13
    BOOL _isBackground; // +0x14
    unsigned int _mapId; // +0x18
    id <WAMapViewDelegate> _mapDelegate; // +0x20
    NSMutableArray * _mapControls; // +0x28
    WABaseView * _firstBaseView; // +0x30
    double _zoomLevelBeforeRegionChange; // +0x38
    UIImageView * _snapshotImageView; // +0x40
    unsigned long long _lightMapType; // +0x48
    NSMutableArray * _customLayerArray; // +0x50
    NSMutableArray * _clusterMarkers; // +0x58
    QUserLocationPresentation * _userLocationCfg; // +0x60
    NSMutableDictionary * _visualLayerDic; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)internalInit;
- (void)dealloc;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)updateCluster:(unsigned long long)arg1 byMarker:(id)arg2;
- (void)skylineUpdateCallout:(id)arg1;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(BOOL)arg3;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didTapPoi:(id)arg2;
- (void)mapView:(id)arg1 didTapAtCoordinate:(CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didTapMyLocation:(CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didTapOverlay:(id)arg2 coordinate:(CLLocationCoordinate2D)arg3;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)mapView:(id)arg1 didChangeActiveLevel:(id)arg2;
- (void)mapViewAuthenticationDidComplete:(id)arg1;
- (void)mapViewAuthentication:(id)arg1 didFailWithError:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 collidedViewsDidShow:(id)arg3;
- (void)mapView:(id)arg1 annotationView:(id)arg2 collidedViewsDidHide:(id)arg3;
- (id)getAllMarkers;
- (id)getAllVisibleMarkers;
- (id)getMapMarker:(long long)arg1;
- (void)clearControls;
- (void)setUserLocationIcon:(id)arg1;
- (void)addMapButtonControl:(id)arg1;
- (void)addMapImageControl:(id)arg1;
- (void)onControlClick:(id)arg1;
- (void)calloutClickAction:(id)arg1;
- (void)onMapAnnotationViewTap:(id)arg1;
- (void)mapViewLogger:(id)arg1 logMessage:(id)arg2;
- (void)visualLayerDidFinshLoading:(id)arg1 withError:(id)arg2;
- (void)onVisualLayerEvent:(id)arg1 eventType:(id)arg2 eventInfoJson:(id)arg3;
- (void)onVisualLayerLog:(id)arg1 log:(id)arg2 logLevel:(int)arg3;
- (void)onTapWAClusterView:(id)arg1;
- (void)onMapLabelClick:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)updateShowsUserLocation;
- (void)setShowsUserLocation:(BOOL)arg1;
- (void)enterBackground:(BOOL)arg1;
- (void)snapshotVideoBegin;
- (void)snapshotVideoEnd;
- (void)setMapType:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)removeMarkersWithArray:(id)arg1;
- (void)removeAllMarkers;
- (void)removeMarker:(long long)arg1;
- (void)addCustomLayerID:(id)arg1;
- (void)removeCustomLayerID:(id)arg1;
- (id)clusterMgr;
- (id)viewForMarker:(id)arg1;
- (void)addClusterMarkers:(id)arg1;
- (id)getGroundOverlay:(long long)arg1;
- (void)addVisualLayer:(id)arg1;
- (id)getVisualLayerById:(id)arg1;
- (void)removeVisualLayerById:(id)arg1;
- (unsigned int)mapId;
- (void)setMapId:(unsigned int)arg1;
- (id)mapDelegate;
- (void)setMapDelegate:(id)arg1;
- (BOOL)isEnableDarkmode;
- (void)setIsEnableDarkmode:(BOOL)arg1;
- (BOOL)enableDefaultClusterStyle;
- (void)setEnableDefaultClusterStyle:(BOOL)arg1;
- (BOOL)zoomOnClusterClick;
- (void)setZoomOnClusterClick:(BOOL)arg1;
- (id)mapControls;
- (void)setMapControls:(id)arg1;
- (id)firstBaseView;
- (void)setFirstBaseView:(id)arg1;
- (double)zoomLevelBeforeRegionChange;
- (void)setZoomLevelBeforeRegionChange:(double)arg1;
- (BOOL)isShowsUserLocation;
- (void)setIsShowsUserLocation:(BOOL)arg1;
- (BOOL)isBackground;
- (void)setIsBackground:(BOOL)arg1;
- (id)snapshotImageView;
- (void)setSnapshotImageView:(id)arg1;
- (unsigned long long)lightMapType;
- (void)setLightMapType:(unsigned long long)arg1;
- (id)customLayerArray;
- (void)setCustomLayerArray:(id)arg1;
- (id)clusterMarkers;
- (void)setClusterMarkers:(id)arg1;
- (id)userLocationCfg;
- (void)setUserLocationCfg:(id)arg1;
- (id)visualLayerDic;
- (void)setVisualLayerDic:(id)arg1;
- (void).cxx_destruct;
@end
