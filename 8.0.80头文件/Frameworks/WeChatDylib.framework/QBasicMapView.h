@interface QBasicMapView : UIView <CAAnimationDelegate, GLKViewDelegate, QMapContextUIDelegate>
{
    BOOL _drawContextWhenAppInactive; // +0x8
    BOOL _dormant; // +0x9
    BOOL _SDKDirty; // +0xa
    TBRegionChangeDistributor * _regionChangeDistributor; // +0x10
    QMapContext * _mapContext; // +0x18
    id <QViewSystemChangeDelegate> _delegate; // +0x20
    GLKView * _glkView; // +0x28
    CADisplayLink * _displayLink; // +0x30
    double _previousTimestamp; // +0x38
    QMarkerCustomCalloutContainerView * _qMarkerCustomCalloutContainerView; // +0x40
    TBDrawParam * _frameParam; // +0x48
    NSArray * _buildingRectList; // +0x50
    QMapMonitor * _drawMonitor; // +0x58
}
+ (Class)layerClass;
- (BOOL)enableMSAA;
- (void)setEnableMSAA:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)constructAnimationFromZoomLevel:(CGRect)arg1 toZoomLevel:(CGRect)arg2 duration:(double)arg3;
- (id)constructAnimationFromCoordinate:(CLLocationCoordinate2D)arg1 toCoordinate:(CLLocationCoordinate2D)arg2 duration:(double)arg3;
- (id)constructAnimationFromCenterOffset:(CGPoint)arg1 toCenterOffset:(CGPoint)arg2 duration:(double)arg3;
- (id)constructFromRotation:(double)arg1 toRotation:(double)arg2 duration:(double)arg3;
- (id)constructFromOverlooking:(double)arg1 toOverlooking:(double)arg2 duration:(double)arg3;
- (void)appendCompletion:(id /* block */)arg1 ToAnimation:(id)arg2;
- (void)animateToZoomLevel:(CGRect)arg1 duration:(double)arg2;
- (void)animateToZoomLevel:(CGRect)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)animateFromZoomLevel:(CGRect)arg1 toZoomLevel:(CGRect)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)animateToCoordinate:(CLLocationCoordinate2D)arg1 duration:(double)arg2;
- (void)animateToCoordinate:(CLLocationCoordinate2D)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)animateFromCoordinate:(CLLocationCoordinate2D)arg1 toCoordinate:(CLLocationCoordinate2D)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)animateToCenterOffset:(CGPoint)arg1 duration:(double)arg2;
- (void)animateToCenterOffset:(CGPoint)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)animateFromCenterOffset:(CGPoint)arg1 toCenterOffset:(CGPoint)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)animateToRotation:(double)arg1 duration:(double)arg2;
- (void)animateToRotation:(double)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)animateFromRotation:(double)arg1 toRotation:(double)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)animateToOverlooking:(double)arg1 duration:(double)arg2;
- (void)animateToOverlooking:(double)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)animateFromOverlooking:(double)arg1 toOverlooking:(double)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)clearAllAnimations;
- (void)setCenterMapPoint:(struct)arg1;
- (struct)centerMapPoint;
- (void)setCenterCoordinate:(CLLocationCoordinate2D)arg1;
- (CLLocationCoordinate2D)centerCoordinate;
- (void)setZoomLevel:(double)arg1;
- (void)setZoomLevelWithAnchor:(CGRect)arg1;
- (double)zoomLevel;
- (int)scaleLevel;
- (double)minZoomLevel;
- (double)maxZoomLevel;
- (void)setMinZoomLevel:(double)arg1 maxZoomLevel:(double)arg2;
- (double)getAvailableMaxZoomLevel;
- (double)getAvailableInternalMaxZoomLevel;
- (void)setRotation:(double)arg1;
- (double)rotation;
- (void)setOverlooking:(double)arg1;
- (double)overlooking;
- (double)minOverlooking;
- (double)maxOverlooking;
- (void)enableAutoMaxOverlooking:(BOOL)arg1;
- (void)setCenterOffset:(CGPoint)arg1;
- (CGPoint)centerOffset;
- (CGPoint)defaultAnchor;
- (void)setKeepCenterEnabled:(BOOL)arg1;
- (BOOL)isKeepCenterEnabled;
- (struct)visibleMapRect;
- (void)setVisibleMapRect:(struct)arg1;
- (void)setVisibleMapRect:(struct)arg1 edgePadding:(UIEdgeInsets)arg2;
- (double)zoomLevelThatFits:(struct)arg1 edgePadding:(UIEdgeInsets)arg2 outCenterCoordinate:(CLLocationCoordinate2D *)arg3;
- (void)zoomLevelFitsMapRect:(struct)arg1 screenRect:(CGRect)arg2 outZoomLevel:(double *)arg3 outCenterMapPoint:(struct *)arg4;
- (struct)mapSizeForOffsetRange:(CGSize)arg1;
- (void)setLimitMapRect:(struct)arg1 minZoomLevel:(double)arg2;
- (double)metersPerPointAtLatitude:(double)arg1 zoomLevel:(double)arg2;
- (double)mapPointsPerPointAtZoomLevel:(double)arg1;
- (int)renderType;
- (float *)getViewMatrix;
- (float *)getProjectionMatrix;
- (CGPoint)glPointForMapPoint:(struct)arg1;
- (double)glPointRatio;
- (float)pixelRatio;
- (void)setHandDrawEnable:(BOOL)arg1;
- (CGPoint)convertMapPoint:(struct)arg1 toPointToView:(id)arg2;
- (struct)convertPoint:(CGPoint)arg1 toMapPointFromView:(id)arg2;
- (CGRect)convertMapRect:(struct)arg1 toRectToView:(id)arg2;
- (struct)convertRect:(CGRect)arg1 toMapRectFromView:(id)arg2;
- (void)setShowsCompass:(BOOL)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (BOOL)showBuildings3D;
- (void)setShowsBuildings3D:(BOOL)arg1;
- (void)setBuildingBlackList:(struct *)arg1 count:(int)arg2;
- (void)reloadBuildings;
- (void)setSatelliteEnabled:(BOOL)arg1;
- (void)setShowsPoi:(BOOL)arg1;
- (BOOL)showsPoi;
- (void)setLabelSize:(int)arg1;
- (void)setBaseMapHidden:(BOOL)arg1;
- (void)setCompassOffset:(CGPoint)arg1;
- (void)setDarkMode:(BOOL)arg1;
- (void)setMapLanguage:(long long)arg1;
- (void)setWorldTileEnable:(BOOL)arg1;
- (id)checkClickInfoAtPoint:(CGPoint)arg1;
- (id)getPoisOnScreen;
- (void)setMapCacheClearSize:(int)arg1;
- (id)getAndResetLatestErrorLog;
- (id)internalDebugStatus;
- (id)internalDataDebugLog;
- (BOOL)isLoadingFinished;
- (void)enableMaploadCallbackEventOnce;
- (void)reloadMap;
- (void)onSizeChange;
- (void)setOfflineMapEnable:(BOOL)arg1;
- (BOOL)offlineMapEnable;
- (void)layoutSubviews;
- (void)makeDirty;
- (void)destroy;
- (BOOL)isApplicationActiveStatus;
- (void)handleDisplayLinkDidFire:(id)arg1;
- (CGRect)viewPixelBounds;
- (void)glkView:(id)arg1 drawInRect:(CGRect)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)willTerminate;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)validateDrawContext;
- (void)sleepGL:(id)arg1;
- (void)wakeGL:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setMaxRenderFramesPerSecond:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)switchGLContext;
- (void)resetGLContext;
- (void)setupMapContextWithResourceManager:(id)arg1;
- (void)setupGLKView;
- (void)setupDisplayLink;
- (void)setEventObserving;
- (void)setupQMarkerCustomCalloutContainerView;
- (id)initWithFrame:(CGRect)arg1 resourceManager:(id)arg2;
- (void)dealloc;
- (id)regionChangeDistributor;
- (void)setRegionChangeDistributor:(id)arg1;
- (id)mapContext;
- (void)setMapContext:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)glkView;
- (void)setGlkView:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)previousTimestamp;
- (void)setPreviousTimestamp:(double)arg1;
- (BOOL)drawContextWhenAppInactive;
- (void)setDrawContextWhenAppInactive:(BOOL)arg1;
- (id)qMarkerCustomCalloutContainerView;
- (void)setQMarkerCustomCalloutContainerView:(id)arg1;
- (BOOL)dormant;
- (void)setDormant:(BOOL)arg1;
- (BOOL)SDKDirty;
- (void)setSDKDirty:(BOOL)arg1;
- (id)frameParam;
- (void)setFrameParam:(id)arg1;
- (id)buildingRectList;
- (void)setBuildingRectList:(id)arg1;
- (id)drawMonitor;
- (void)setDrawMonitor:(id)arg1;
- (void).cxx_destruct;
@end
