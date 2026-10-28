@interface LiteAppMapViewImpl : UIView <QMapViewDelegate>
{
    BOOL _showLocation; // +0x8
    BOOL _enableZoom; // +0x9
    BOOL _enableScroll; // +0xa
    BOOL _enableRotation; // +0xb
    BOOL _enableTraffic; // +0xc
    BOOL _enablePOI; // +0xd
    BOOL _enableBuilding; // +0xe
    BOOL _showScale; // +0xf
    BOOL _showCompass; // +0x10
    FlutterMethodChannel * _channel; // +0x18
    QMapView * _mapView; // +0x20
    UIViewController * _controller; // +0x28
    double _longitude; // +0x30
    double _latitude; // +0x38
    double _zoom; // +0x40
    double _minZoom; // +0x48
    double _maxZoom; // +0x50
    NSArray * _markers; // +0x58
    NSString * _mapType; // +0x60
    NSArray * _polylines; // +0x68
    double _rotation; // +0x70
    double _overlooking; // +0x78
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;
- (void)initViewWithFrame:(CGRect)arg1 args:(id)arg2;
- (void)layoutSubviews;
- (void)configMarkers:(id)arg1;
- (void)configPolyline:(id)arg1;
- (void)closurePoints:(id)arg1 padding:(id)arg2;
- (long long)parseLiteAppMapOverlayLevel:(id)arg1 defaultLevel:(long long)arg2;
- (id)viewController;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)mapViewAuthenticationDidComplete:(id)arg1;
- (void)mapViewAuthentication:(id)arg1 didFailWithError:(id)arg2;
- (void)mapViewInitComplete:(id)arg1;
- (void)mapViewFirstRenderDidComplete:(id)arg1;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapViewRegionChange:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 willMoveAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 didMoveAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 willZoomAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 didZoomAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 scaleViewChanged:(double)arg2;
- (void)mapView:(id)arg1 gestureDidTrigger:(unsigned long long)arg2;
- (void)mapView:(id)arg1 gestureDidEnd:(unsigned long long)arg2;
- (void)mapViewDrawFrame:(id)arg1;
- (void)mapView:(id)arg1 didTapAtCoordinate:(CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didTapPoi:(id)arg2;
- (void)mapView:(id)arg1 didTapOverlay:(id)arg2 coordinate:(CLLocationCoordinate2D)arg3;
- (void)mapView:(id)arg1 didTapMarkerOverlayCallout:(id)arg2;
- (void)mapView:(id)arg1 markerOverlay:(id)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)mapView:(id)arg1 didTapMyLocation:(CLLocationCoordinate2D)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 customCalloutForAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didAnnotationViewTapped:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 collidedViewsDidShow:(id)arg3;
- (void)mapView:(id)arg1 annotationView:(id)arg2 collidedViewsDidHide:(id)arg3;
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 annotationViewCalloutTapped:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didAddOverlayViews:(id)arg2;
- (void)mapViewWillStartLocatingUser:(id)arg1;
- (void)mapViewDidStopLocatingUser:(id)arg1;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(BOOL)arg3;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)mapView;
- (void)setMapView:(id)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (BOOL)showLocation;
- (void)setShowLocation:(BOOL)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)zoom;
- (void)setZoom:(double)arg1;
- (double)minZoom;
- (void)setMinZoom:(double)arg1;
- (double)maxZoom;
- (void)setMaxZoom:(double)arg1;
- (id)markers;
- (void)setMarkers:(id)arg1;
- (id)mapType;
- (void)setMapType:(id)arg1;
- (id)polylines;
- (void)setPolylines:(id)arg1;
- (double)rotation;
- (void)setRotation:(double)arg1;
- (double)overlooking;
- (void)setOverlooking:(double)arg1;
- (BOOL)enableZoom;
- (void)setEnableZoom:(BOOL)arg1;
- (BOOL)enableScroll;
- (void)setEnableScroll:(BOOL)arg1;
- (BOOL)enableRotation;
- (void)setEnableRotation:(BOOL)arg1;
- (BOOL)enableTraffic;
- (void)setEnableTraffic:(BOOL)arg1;
- (BOOL)enablePOI;
- (void)setEnablePOI:(BOOL)arg1;
- (BOOL)enableBuilding;
- (void)setEnableBuilding:(BOOL)arg1;
- (BOOL)showScale;
- (void)setShowScale:(BOOL)arg1;
- (BOOL)showCompass;
- (void)setShowCompass:(BOOL)arg1;
- (void).cxx_destruct;
@end
