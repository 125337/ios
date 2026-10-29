@interface QMapView : UIView <glOverlayGestureClickDelegate, QScaleViewDelegate, UIGestureRecognizerDelegate, QAnnotationContainerViewDelegate, TBRegionChangeDistributorDelegate, QUserLocationManagerDelegate, QIndoorManagerDelegate, QConfigManagerDelegate, QTileOverlayManagerDelegate>
{
    BOOL _showsScale; // +0x8
    BOOL _showsBuildings; // +0x9
    BOOL _showsCompass; // +0xa
    BOOL _zoomEnabled; // +0xb
    BOOL _scrollEnabled; // +0xc
    BOOL _overlookingEnabled; // +0xd
    BOOL _rotateEnabled; // +0xe
    BOOL _alwaysTriggerDidTapCoordinateEnabled; // +0xf
    BOOL _isDealloc; // +0x10
    BOOL _internalShowsScale; // +0x11
    BOOL _internalScaleFaded; // +0x12
    BOOL _isUserDefinedLogoCenter; // +0x13
    BOOL _internalShowsUserLocation; // +0x14
    BOOL _showsWorldMap; // +0x15
    BOOL _useBingWorldProvider; // +0x16
    BOOL _internalShowsPoi; // +0x17
    BOOL _internalShowsBaseMap; // +0x18
    BOOL _hasMapLoaded; // +0x19
    BOOL _isFirstRenderComplete; // +0x1a
    BOOL _userLocationElementEnabled; // +0x1b
    BOOL _elementDirty; // +0x1c
    BOOL _internalAnnotationAccessibilityFrameClipToBounds; // +0x1d
    int _configUpdateIdentifier; // +0x20
    id <QMapViewDelegate> _delegate; // +0x28
    unsigned long long _mapType; // +0x30
    long long _labelSize; // +0x38
    QMapContentView * _contentView; // +0x40
    QBasicMapView * _baseMapView; // +0x48
    QAnnotationContainerView * _annotationContainerView; // +0x50
    QMarkerManager * _nativeMarkerManager; // +0x58
    QOverlayContainer * _overlayContainer; // +0x60
    QMediator * _mediator; // +0x68
    TBRegionChangeDistributor * _regionChangeDistributor; // +0x70
    UIView * _logoView; // +0x78
    double _logoSizeScale; // +0x80
    unsigned long long _logoAnchor; // +0x88
    QScaleView * _scaleView; // +0x90
    double _previousZoomLevel; // +0x98
    double _previousUnitLength; // +0xa0
    double _unitLength; // +0xa8
    NSString * _previousIndoorBuildingID; // +0xb0
    QUserLocationManager * _userLocationManager; // +0xb8
    long long _internalUserTrackingMode; // +0xc0
    QUserLocation * _internalUserLocation; // +0xc8
    QUserLocationPresentation * _internalPresentation; // +0xd0
    UITapGestureRecognizer * _zoomInGestureRecognizer; // +0xd8
    UITapGestureRecognizer * _zoomOutGestureRecognizer; // +0xe0
    UIPinchGestureRecognizer * _zoomPinchGestureRecognizer; // +0xe8
    UILongPressGestureRecognizer * _oneFingerZoomGestureRecognizer; // +0xf0
    UIPanGestureRecognizer * _panGestureRecognizer; // +0xf8
    UIPanGestureRecognizer * _pullGestureRecognizer; // +0x100
    UIRotationGestureRecognizer * _rotateGestureRecognizer; // +0x108
    UITapGestureRecognizer * _singleTapGestureRecognizer; // +0x110
    QTileOverlayManager * _tileOverlayManager; // +0x118
    QHandDrawTileOverlay * _handDrawTileOverlay; // +0x120
    QWorldTileOverlay * _worldTileOverlay; // +0x128
    unsigned long long _language; // +0x130
    QWorldTileOverlayCustomProvider * _customWorldProvider; // +0x138
    QUniversalMapCounter * _mapUniversalCounter; // +0x140
    QCustomLayerManager * _customLayerManager; // +0x148
    QIntersectionOverlayManager * _intersectionOverlayManager; // +0x150
    QLayerManager * _layerManager; // +0x158
    QTrafficManager * _trafficManager; // +0x160
    QConfigPreference * _configPreference; // +0x168
    QEngineResourceManager * _resourceManager; // +0x170
    QConfigManager * _configManager; // +0x178
    QStyleManager * _styleManager; // +0x180
    QAppKeyCheck * _appKeyChecker; // +0x188
    QDataChecker * _dataChecker; // +0x190
    NSMutableSet * _snapshotTimerSet; // +0x198
    QMapDataManager * _dataManager; // +0x1a0
    QIndoorManager * _indoorManager; // +0x1a8
    QPointEventMananger * _pointEventmanager; // +0x1b0
    QL4Manager * _l4Manager; // +0x1b8
    QAOIMarkerManager * _aoiLayerManager; // +0x1c0
    QBrandPromotionServer * _brandPromotionServer; // +0x1c8
    long long _internalMaxFramesPerSecond; // +0x1d0
    QStatisticer * _statisticer; // +0x1d8
    QLocalStateCollector * _logCollector; // +0x1e0
    QBaseVisualLayerManager * _visualManager; // +0x1e8
    NSMutableArray * _totalElements; // +0x1f0
    NSMutableArray * _poiElements; // +0x1f8
    NSMutableArray * _annotationElements; // +0x200
    QUserLocationAccessibilityElement * _userLocationElement; // +0x208
    QMapViewAccessibilityElement * _baseMapViewElement; // +0x210
    NSString * _internalZoomAnnouncement; // +0x218
    long long _internalMapLanguage; // +0x220
    QMapDataSafetyInternalManager * _dataSafetyInternalManager; // +0x228
    CGPoint _logoCenter; // +0x230
    CGPoint _logoMargin; // +0x240
    CGPoint _internalScaleOffset; // +0x250
    CGPoint _originalSingleTapPoint; // +0x260
    CLLocationCoordinate2D _userLocationElementCoordinate; // +0x270
}
+ (BOOL)shouldCorrect84CoordinateTo02:(CLLocationCoordinate2D)arg1;
+ (BOOL)isLocal:(CLLocationCoordinate2D)arg1;
+ (CLLocationCoordinate2D)correct84CoordinateTo02:(CLLocationCoordinate2D)arg1;
+ (void)clearMapCache;
+ (void)load;
+ (void)loadPrefferedResourceFilesFromDirectory:(id)arg1;
- (id)findTargetWithCommand:(id)arg1 visualLayer:(id)arg2;
- (id)target:(id)arg1 didExecuteCommand:(id)arg2;
- (id)executeCommand:(id)arg1 withVisualLayer:(id)arg2;
- (void)setAmbientLight:(id)arg1 error:(id *)arg2;
- (void)setSpotOrDirectionalLight:(id)arg1 error:(id *)arg2;
- (void)setAmbientLight:(id)arg1;
- (void)addCommonLight:(id)arg1;
- (void)recordMapStatistics;
- (void)recordWorldMapCount;
- (void)recordCustomLayerCount;
- (void)recordIndoorCount;
- (void)recordDarkModeCount;
- (void)recordPointEventCount;
- (void)recordHeatMapCount;
- (void)recordHoneyCombHeatCount;
- (void)recordArcLineCount;
- (void)recordTrailCount;
- (void)recordDotScatterCount;
- (void)recordBitmapScatterCount;
- (void)recordGroundOverlayCount;
- (void)recordAoiLayerCount;
- (void)checkOfflineUsage;
- (void)recordOfflineMapCount;
- (void)setAutomaticChangeDataSource:(BOOL)arg1;
- (BOOL)automaticChangeDataSource;
- (void)setCountryCode:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2;
- (void)setDisplayLanguage:(unsigned long long)arg1;
- (void)setHandDrawTileOverlayEnabled:(BOOL)arg1;
- (BOOL)handDrawTileOverlayEnabled;
- (id)createViewForHandDrawTileOverlay;
- (void)indoorManager:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)indoorManager:(id)arg1 didChangeActiveLevel:(id)arg2;
- (void)setIndoorEnabled:(BOOL)arg1;
- (BOOL)isIndoorEnabled;
- (void)setIndoorPicker:(BOOL)arg1;
- (BOOL)indoorPicker;
- (CGPoint)indoorPickerOffset;
- (void)setIndoorPickerOffset:(CGPoint)arg1;
- (id)activeBuilding;
- (void)setActiveLevel:(id)arg1;
- (id)activeLevel;
- (void)setActiveIndoorInfo:(id)arg1;
- (void)setIndoorMaskColor:(id)arg1;
- (double)getIndoorOutlineZoom:(id)arg1;
- (void)setIndoorCell:(id)arg1;
- (void)resetIndoorCell;
- (CGRect)universalRectWithCenter:(CGPoint)arg1;
- (CGRect)getMapViewRect;
- (void)setMapViewAccessibilityLabel:(id)arg1;
- (id)mapViewAccessibilityLabel;
- (void)setMapViewZoomAccessibiltyAnouncement:(id)arg1;
- (id)mapViewZoomAccessibiltyAnouncement;
- (void)setMapViewAccessibilityAcitivePoint:(CGPoint)arg1;
- (CGPoint)mapViewAccessibilityAcitivePoint;
- (void)receiveVoiceOverStatusChanged:(id)arg1;
- (void)setupAccessibility;
- (void)setFrame:(CGRect)arg1;
- (void)triggerLayoutByRegionDidChangeWithDelayInSecond:(double)arg1;
- (void)triggerLayoutByAnnotationChangeWithDelayInSecond:(double)arg1;
- (void)makeAllInvalid;
- (void)makeAnnotationInvalid;
- (void)setUpBaseMapViewCustomRotor;
- (void)setUserLocationAccessibilityLabel:(id)arg1;
- (id)userLocationAccessibilityLabel;
- (void)setAnnotationAccessibilityFrameClipToBounds:(BOOL)arg1;
- (BOOL)annotationAccessibilityFrameClipToBounds;
- (void)judgeUserLocation;
- (void)enableUserLocationAccessibility:(BOOL)arg1;
- (void)updateUserLocationAccessibilityWithCoordinate:(CLLocationCoordinate2D)arg1;
- (id)elementForPoi:(id)arg1;
- (id)constructPoiElements;
- (id)elementForAnnotationView:(id)arg1;
- (id)constructAnnotationElements;
- (id)constructUserLocationElement;
- (void)setUpElementCustomRoto:(id)arg1;
- (id)accessibleElements;
- (BOOL)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)decreaseUserTrackingMode;
- (void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 option:(id)arg2;
- (void)setCenterOffset:(CGPoint)arg1 option:(id)arg2;
- (CGPoint)getEngineCenterOffset;
- (CGPoint)engineCenterOffsetForUIKitOffset:(CGPoint)arg1;
- (CGPoint)uikitCenterOffsetForEngineOffset:(CGPoint)arg1;
- (void)setZoomLevel:(double)arg1 option:(id)arg2;
- (void)setZoomLevel:(double)arg1 anchor:(CGPoint)arg2 option:(id)arg3;
- (void)setRotation:(double)arg1 option:(id)arg2;
- (void)setOverlooking:(double)arg1 option:(id)arg2;
- (id)takeSnapshot;
- (id)clipImage:(id)arg1 withRect:(CGRect)arg2;
- (id)pasteLogoToImage:(id)arg1 imageSize:(CGSize)arg2 afterScreenUpdates:(BOOL)arg3;
- (id)executeSnapshotWithClipRect:(CGRect)arg1 afterScreenUpdates:(BOOL)arg2;
- (BOOL)snapshotIsReady;
- (void)takeSnapshotInRect:(CGRect)arg1 completion:(id /* block */)arg2;
- (void)takeSnapshotInRect:(CGRect)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)takeSnapshotInRect:(CGRect)arg1 timeout:(double)arg2 afterScreenUpdates:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)resetMapAnimated:(BOOL)arg1;
- (void)callDelegateWillStartLocating;
- (void)callDelegateDidStopLocating;
- (void)callDelegateDidUpdateUserLocation:(id)arg1 fromHeading:(BOOL)arg2;
- (void)callDelegateDidFailToLocateUserWithError:(id)arg1;
- (void)callDelegateDidChangeUserTrackingMode:(long long)arg1 animated:(BOOL)arg2;
- (void)callDelegateDidChangeLocationAccuracy:(int)arg1;
- (void)manager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)manager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)onUpdateLocationWithExternalSource:(BOOL)arg1;
- (void)onUpdateHeading;
- (void)manager:(id)arg1 didFailWithError:(id)arg2;
- (void)manager:(id)arg1 locationManagerDidChangeAuthorization:(int)arg2;
- (void)configureUserLocationPresentation:(id)arg1;
- (BOOL)showsUserLocation;
- (void)setShowsUserLocation:(BOOL)arg1;
- (id)userLocation;
- (double)desiredAccuracy;
- (void)setDesiredAccuracy:(double)arg1;
- (double)distanceFilter;
- (void)setDistanceFilter:(double)arg1;
- (double)headingFilter;
- (long long)accuracyAuthorization;
- (int)authorizationStatus;
- (void)setHeadingFilter:(double)arg1;
- (BOOL)allowsBackgroundLocationUpdates;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)arg1;
- (BOOL)pausesLocationUpdatesAutomatically;
- (void)setPausesLocationUpdatesAutomatically:(BOOL)arg1;
- (long long)userTrackingMode;
- (void)setUserTrackingMode:(long long)arg1;
- (void)setUserTrackingMode:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)isUserLocationVisible;
- (id)userLocatorPresentation;
- (void)setUserLocationHidden:(BOOL)arg1;
- (void)setUserLocationCompassHidden:(BOOL)arg1;
- (void)setUserLocationNavigationGravitylineHidden:(BOOL)arg1;
- (void)requestTempPrecisedLocation:(id)arg1 purposeKey:(id)arg2 completion:(id /* block */)arg3;
- (void)addAOILayer:(id)arg1 callback:(id /* block */)arg2;
- (void)removeAOILayer:(id)arg1;
- (id)containerView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)containerView:(id)arg1 customCalloutForAnnotationView:(id)arg2;
- (void)containerView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)containerView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)containerView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)containerView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)containerView:(id)arg1 didTapCallout:(id)arg2;
- (void)containerView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)containerView:(id)arg1 didAnnotationViewTapped:(id)arg2;
- (void)containerView:(id)arg1 annotationView:(id)arg2 collisionViewDidHide:(id)arg3;
- (void)containerView:(id)arg1 annotationView:(id)arg2 collisionViewDidShow:(id)arg3;
- (id)annotations;
- (id)selectedAnnotations;
- (void)setSelectedAnnotations:(id)arg1;
- (id)annotationsInMapRect:(struct)arg1;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (void)bringAnnotationToFront:(id)arg1;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)showAnnotations:(id)arg1 edgePadding:(UIEdgeInsets)arg2 animated:(BOOL)arg3;
- (void)callDelegateDidTapAtCoordinate:(CLLocationCoordinate2D)arg1;
- (void)callDelegateDidTapPoi:(id)arg1;
- (void)callDelegateDidTapOverlay:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2;
- (void)callDelegateDidTapLineOverlayID:(int)arg1 coordinate:(CLLocationCoordinate2D)arg2;
- (void)callDelegateDidTapOverlayID:(int)arg1 coordinate:(CLLocationCoordinate2D)arg2;
- (void)callDelegateDidTapMyLocation:(CLLocationCoordinate2D)arg1;
- (void)notifyGestureBegin:(unsigned long long)arg1;
- (void)notifyGestureEnd:(unsigned long long)arg1;
- (double)animationDurationForVelocity:(CGPoint)arg1;
- (CGSize)offsetRangeForVelocity:(CGPoint)arg1;
- (void)zoomInGesture:(id)arg1;
- (void)zoomOutGesture:(id)arg1;
- (void)pinchGesture:(id)arg1;
- (void)oneFingerZoomGesture:(id)arg1;
- (void)panGesture:(id)arg1;
- (void)pullGesture:(id)arg1;
- (void)rotateGesture:(id)arg1;
- (void)singleTapGesture:(id)arg1;
- (void)mapElementClickCheck:(CGPoint)arg1;
- (void)checkMapEngineElement:(CGPoint)arg1 withClickPoint:(CGPoint)arg2;
- (CGPoint)getZoomAnchor:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setupGestureRecognizers;
- (id)getDebugError;
- (void)setOfflineMapEnable:(BOOL)arg1;
- (BOOL)isOfflineMapEnable;
- (void)setSceneWithTag:(id)arg1;
- (void)setMapLanguage:(long long)arg1;
- (long long)getMapLanguage;
- (void)setWorldTileOverlayEnabled:(BOOL)arg1;
- (void)refreshWorldMapScene;
- (BOOL)worldTileOverlayEnabled;
- (id)createViewForWorldTileOverlay;
- (void)addIntersetcionOverlay:(id)arg1;
- (void)removeIntersectionOverlay:(id)arg1;
- (void)setOptionalResourcePath:(id)arg1;
- (void)setTrafficMode:(int)arg1 fromZoomLevel:(double)arg2;
- (void)setExternalLocation:(id)arg1 orHeading:(id)arg2;
- (void)addVisualLayer:(id)arg1;
- (void)removeVisualLayer:(id)arg1;
- (id)createViewForCustomLayerTileOverlay:(id)arg1;
- (void)addCustomLayer:(id)arg1;
- (void)removeCustomLayer:(id)arg1;
- (BOOL)checkModelClickable;
- (void)sendScreenPosToCheckClickItem:(CGPoint)arg1;
- (void)didNotFoundGLOverlayByClickAction:(CGPoint)arg1;
- (void)fixDataSource;
- (id)mmInitWithFrame:(CGRect)arg1;
- (id)mmInitWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)innerInit;
- (id)miniProgramID;
- (id)businessKey;
- (void)setHandDrawMapEnabled:(BOOL)arg1;
- (BOOL)isHandDrawMapEnabled;
- (void)setOverseaSource:(id)arg1;
- (void)checkTileOverlayCache;
- (BOOL)compareModificationDate:(id)arg1;
- (id)animationLayer;
- (void)setMapType:(unsigned long long)arg1;
- (void)setStyleType:(int)arg1;
- (void)setMapStyle:(int)arg1;
- (void)setMapStyleInternal:(int)arg1 isCustomStyle:(BOOL)arg2;
- (void)reloadMapStyle;
- (void)validateDarkMode:(BOOL)arg1;
- (void)validateLogo;
- (CGRect)getNewLogoFrame:(CGSize)arg1;
- (void)validateScale;
- (double)safeAreaForDefaultPosition;
- (id)getCurrentViewController:(id)arg1;
- (void)validateWorldmap;
- (void)refreshLogo:(id)arg1;
- (void)refreshWorldMap:(id)arg1;
- (void)validateIndoorPicker;
- (void)layoutSubviews;
- (void)updateScaleViewUIAnimated:(BOOL)arg1;
- (void)setShowsScale:(BOOL)arg1;
- (void)setInternalShowsScale:(BOOL)arg1;
- (void)setInternalShowsScale:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsCompass:(BOOL)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (BOOL)shows3DBuildings;
- (void)setShows3DBuildings:(BOOL)arg1;
- (void)setShowsTraffic:(BOOL)arg1;
- (BOOL)showsTraffic;
- (void)setShowsPoi:(BOOL)arg1;
- (BOOL)showsPoi;
- (void)setLabelSize:(long long)arg1;
- (void)setShowsBaseMap:(BOOL)arg1;
- (BOOL)showsBaseMap;
- (void)setForeignLanguage:(unsigned long long)arg1;
- (void)setWorldMapEnable:(BOOL)arg1;
- (void)setRoadEventVisible:(BOOL)arg1;
- (void)setLogoOffset:(CGPoint)arg1;
- (void)setLogoMargin:(CGPoint)arg1 anchor:(unsigned long long)arg2;
- (void)setLogoScale:(double)arg1;
- (void)setLogoCenter:(CGPoint)arg1;
- (CGPoint)logoCenter;
- (CGSize)logoSize;
- (void)setBuildingBlackList:(struct *)arg1 count:(int)arg2;
- (void)setScaleViewOffset:(CGPoint)arg1;
- (void)setScaleOrigin:(CGPoint)arg1;
- (CGPoint)getDefaultScaleOrigin;
- (CGPoint)scaleOrigin;
- (CGSize)scaleSize;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setScaleViewFadeEnable:(BOOL)arg1;
- (long long)preferredFramesPerSecond;
- (void)setCompassOffset:(CGPoint)arg1;
- (CLLocationCoordinate2D)centerCoordinate;
- (void)setCenterCoordinate:(CLLocationCoordinate2D)arg1;
- (void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 animated:(BOOL)arg2;
- (double)minZoomLevel;
- (double)maxZoomLevel;
- (void)setMinZoomLevel:(double)arg1 maxZoomLevel:(double)arg2;
- (double)zoomLevel;
- (int)scaleLevel;
- (void)setZoomLevel:(double)arg1;
- (void)setZoomLevel:(double)arg1 animated:(BOOL)arg2;
- (void)setKeepCenterDuringZoom:(BOOL)arg1;
- (BOOL)isKeepCenterDuringZoom;
- (double)rotation;
- (void)setRotation:(double)arg1;
- (void)setRotation:(double)arg1 animated:(BOOL)arg2;
- (double)overlooking;
- (void)setOverlooking:(double)arg1;
- (void)setOverlooking:(double)arg1 animated:(BOOL)arg2;
- (void)enableAutoMaxOverlooking:(BOOL)arg1;
- (void)setCenterOffsetY:(float)arg1;
- (void)setCenterOffset:(CGPoint)arg1;
- (void)setCenterOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (CGPoint)centerOffsetV2;
- (void)setCenterOffsetV2:(CGPoint)arg1;
- (void)setCenterOffsetV2:(CGPoint)arg1 animated:(BOOL)arg2;
- (struct)visibleMapRect;
- (void)setVisibleMapRect:(struct)arg1;
- (void)setVisibleMapRect:(struct)arg1 animated:(BOOL)arg2;
- (void)setVisibleMapRect:(struct)arg1 edgePadding:(UIEdgeInsets)arg2 animated:(BOOL)arg3;
- (CLLocationCoordinate2D)offsetCoordinateWhenNotInCenter:(CLLocationCoordinate2D)arg1 atZoomLevel:(double)arg2;
- (void)setLimitMapRect:(struct)arg1 mode:(long long)arg2;
- (struct)region;
- (void)setRegion:(struct)arg1;
- (void)setRegion:(struct)arg1 animated:(BOOL)arg2;
- (void)setRegion:(struct)arg1 edgePadding:(UIEdgeInsets)arg2 animated:(BOOL)arg3;
- (struct)mapRectThatFits:(struct)arg1 edgePadding:(UIEdgeInsets)arg2;
- (struct)mapRectThatFits:(struct)arg1 containsCalloutView:(BOOL)arg2 annotations:(id)arg3 edgePadding:(UIEdgeInsets)arg4;
- (id)findAnnotationsForMapRect:(id)arg1;
- (id)getCalloutViewIfShows:(BOOL)arg1;
- (double)zoomLevelThatFits:(struct)arg1 edgePadding:(UIEdgeInsets)arg2 outCenterCoordinate:(CLLocationCoordinate2D *)arg3;
- (float *)glViewMatrix;
- (float *)glProjectionMatrix;
- (CGPoint)glVertexForCoordinate:(CLLocationCoordinate2D)arg1;
- (CGPoint)glPointForMapPoint:(struct)arg1;
- (double)glPointRatio;
- (double)metersPerPointAtLatitude:(double)arg1 zoomLevel:(double)arg2;
- (double)metersPerPointAtCurrentZoomLevel;
- (void)addOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (id)doAddOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removeOverlays:(id)arg1;
- (void)doRemoveOverlay:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (id)overlays;
- (void)showOverlays:(id)arg1 edgePadding:(UIEdgeInsets)arg2 animated:(BOOL)arg3;
- (CGPoint)convertCoordinate:(CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
- (CLLocationCoordinate2D)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (CGRect)convertRegion:(struct)arg1 toRectToView:(id)arg2;
- (struct)convertRect:(CGRect)arg1 toRegionFromView:(id)arg2;
- (void)notifyMapViewRegionChange;
- (void)distributor:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 byGesture:(BOOL)arg3;
- (void)distributor:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 byGesture:(BOOL)arg3;
- (void)distributor:(id)arg1 willMoveAnimated:(BOOL)arg2 byGesture:(BOOL)arg3;
- (void)distributor:(id)arg1 didMoveAnimated:(BOOL)arg2 byGesture:(BOOL)arg3;
- (void)distributor:(id)arg1 willZoomAnimated:(BOOL)arg2 byGesture:(BOOL)arg3;
- (void)distributor:(id)arg1 didZoomAnimated:(BOOL)arg2 byGesture:(BOOL)arg3;
- (void)didAddToWindow;
- (void)update:(double)arg1;
- (void)drawFrameDidFinished;
- (void)mapContext:(id)arg1 downloadTile:(id)arg2;
- (void)mapContext:(id)arg1 cancelDownloadTile:(id)arg2;
- (void)mapContext:(id)arg1 saveTileData:(id)arg2 withUrl:(id)arg3;
- (void)mapContextDidMapStatusChangedBeforeDraw:(id)arg1;
- (void)mapContextDidMapStatusChangedAfterDraw:(id)arg1;
- (void)mapContextMapLoadFinish:(id)arg1;
- (void)mapContext:(id)arg1 mapStatusChange:(int)arg2;
- (BOOL)mapContext:(id)arg1 drawFrame:(TBDrawParamType *)arg2;
- (void)mapDataFailLoading:(id)arg1 withError:(id)arg2;
- (void)notifyFirstRenderDidComplete;
- (void)configManagerDidFinish:(id)arg1;
- (void)configManagerDidFail:(id)arg1 WithError:(id)arg2;
- (void)configUpdateNotRequire:(id)arg1;
- (void)notifyConfigUpdateProcessed;
- (void)updateMapLoggerProcessed:(id)arg1;
- (id)tileOverlayManager:(id)arg1 viewForTileOverlay:(id)arg2;
- (void)shouldNotifyScaleLevelChanged:(double)arg1;
- (void)setupSelfWithConfig:(id)arg1;
- (void)setupRegionChangeDistributor;
- (void)setupContentView;
- (void)setupMapRenderSystem:(id)arg1;
- (void)checkMapCacheClear;
- (void)setupDataSystem;
- (void)setupMapContext;
- (void)setupIndoorSystem:(id)arg1;
- (void)setupStyleManager;
- (void)setupMediator;
- (void)setupOverlaySystem;
- (void)setupBaseVisualLayerSystem;
- (void)setupAnnotationSystem;
- (void)setupNativeMarkerSystem;
- (void)setupUserLocationSystem;
- (void)setupTileOverlayManager;
- (void)setupCustomLayerManager;
- (void)setupVectorLayerManager;
- (void)setupRoadEventSystem;
- (void)setupTrafficSystem:(id)arg1;
- (void)setUpPointEventSystem;
- (void)setupL4;
- (void)setupAOILayerManager;
- (void)setUpIntersectionOverlayManager;
- (void)setupConfigManager;
- (void)setupLocalLogger;
- (void)setupPromotionServer;
- (void)logQMapLoggerKeeper;
- (void)setupLogoView;
- (void)setupScaleView:(id)arg1;
- (void)setupDefaultProperty;
- (void)checkAppKey;
- (void)callMapViewAuthenticationDidComplete;
- (void)callMapViewAuthenticationDidFailWithError:(id)arg1;
- (void)displayFailedLabel;
- (void)checkConfigUpdate;
- (void)checkDataVersion;
- (void)setupStatisticsSystem;
- (void)setupSnapshotEnvironment;
- (void)uploadSensitiveParams;
- (void)setupWXDataSafetyCheck;
- (void)commonInitWithConfig:(id)arg1;
- (void)debugReport:(id)arg1;
- (void)recordOfflineMapStats;
- (id)init;
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isOpaque;
- (void)setOpaque:(BOOL)arg1;
- (id)defaultBackgroundColor;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)mapType;
- (BOOL)showsScale;
- (BOOL)showsBuildings;
- (long long)labelSize;
- (BOOL)showsCompass;
- (BOOL)isZoomEnabled;
- (void)setZoomEnabled:(BOOL)arg1;
- (BOOL)isScrollEnabled;
- (void)setScrollEnabled:(BOOL)arg1;
- (BOOL)isOverlookingEnabled;
- (void)setOverlookingEnabled:(BOOL)arg1;
- (BOOL)isRotateEnabled;
- (void)setRotateEnabled:(BOOL)arg1;
- (BOOL)alwaysTriggerDidTapCoordinateEnabled;
- (void)setAlwaysTriggerDidTapCoordinateEnabled:(BOOL)arg1;
- (BOOL)isDealloc;
- (void)setIsDealloc:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)baseMapView;
- (void)setBaseMapView:(id)arg1;
- (id)annotationContainerView;
- (void)setAnnotationContainerView:(id)arg1;
- (id)nativeMarkerManager;
- (void)setNativeMarkerManager:(id)arg1;
- (id)overlayContainer;
- (void)setOverlayContainer:(id)arg1;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (id)regionChangeDistributor;
- (void)setRegionChangeDistributor:(id)arg1;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (CGPoint)logoMargin;
- (void)setLogoMargin:(CGPoint)arg1;
- (double)logoSizeScale;
- (void)setLogoSizeScale:(double)arg1;
- (unsigned long long)logoAnchor;
- (void)setLogoAnchor:(unsigned long long)arg1;
- (id)scaleView;
- (void)setScaleView:(id)arg1;
- (BOOL)internalShowsScale;
- (BOOL)internalScaleFaded;
- (void)setInternalScaleFaded:(BOOL)arg1;
- (double)previousZoomLevel;
- (void)setPreviousZoomLevel:(double)arg1;
- (double)previousUnitLength;
- (void)setPreviousUnitLength:(double)arg1;
- (double)unitLength;
- (void)setUnitLength:(double)arg1;
- (id)previousIndoorBuildingID;
- (void)setPreviousIndoorBuildingID:(id)arg1;
- (CGPoint)internalScaleOffset;
- (void)setInternalScaleOffset:(CGPoint)arg1;
- (BOOL)isUserDefinedLogoCenter;
- (void)setIsUserDefinedLogoCenter:(BOOL)arg1;
- (id)userLocationManager;
- (void)setUserLocationManager:(id)arg1;
- (BOOL)internalShowsUserLocation;
- (void)setInternalShowsUserLocation:(BOOL)arg1;
- (long long)internalUserTrackingMode;
- (void)setInternalUserTrackingMode:(long long)arg1;
- (id)internalUserLocation;
- (void)setInternalUserLocation:(id)arg1;
- (id)internalPresentation;
- (void)setInternalPresentation:(id)arg1;
- (id)zoomInGestureRecognizer;
- (void)setZoomInGestureRecognizer:(id)arg1;
- (id)zoomOutGestureRecognizer;
- (void)setZoomOutGestureRecognizer:(id)arg1;
- (id)zoomPinchGestureRecognizer;
- (void)setZoomPinchGestureRecognizer:(id)arg1;
- (id)oneFingerZoomGestureRecognizer;
- (void)setOneFingerZoomGestureRecognizer:(id)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (id)pullGestureRecognizer;
- (void)setPullGestureRecognizer:(id)arg1;
- (id)rotateGestureRecognizer;
- (void)setRotateGestureRecognizer:(id)arg1;
- (id)singleTapGestureRecognizer;
- (void)setSingleTapGestureRecognizer:(id)arg1;
- (CGPoint)originalSingleTapPoint;
- (void)setOriginalSingleTapPoint:(CGPoint)arg1;
- (id)tileOverlayManager;
- (void)setTileOverlayManager:(id)arg1;
- (id)handDrawTileOverlay;
- (void)setHandDrawTileOverlay:(id)arg1;
- (BOOL)showsWorldMap;
- (void)setShowsWorldMap:(BOOL)arg1;
- (id)worldTileOverlay;
- (void)setWorldTileOverlay:(id)arg1;
- (unsigned long long)language;
- (void)setLanguage:(unsigned long long)arg1;
- (BOOL)useBingWorldProvider;
- (void)setUseBingWorldProvider:(BOOL)arg1;
- (id)customWorldProvider;
- (void)setCustomWorldProvider:(id)arg1;
- (id)mapUniversalCounter;
- (void)setMapUniversalCounter:(id)arg1;
- (id)customLayerManager;
- (void)setCustomLayerManager:(id)arg1;
- (id)intersectionOverlayManager;
- (void)setIntersectionOverlayManager:(id)arg1;
- (id)layerManager;
- (void)setLayerManager:(id)arg1;
- (BOOL)internalShowsPoi;
- (void)setInternalShowsPoi:(BOOL)arg1;
- (BOOL)internalShowsBaseMap;
- (void)setInternalShowsBaseMap:(BOOL)arg1;
- (id)trafficManager;
- (void)setTrafficManager:(id)arg1;
- (id)configPreference;
- (void)setConfigPreference:(id)arg1;
- (id)resourceManager;
- (void)setResourceManager:(id)arg1;
- (id)configManager;
- (void)setConfigManager:(id)arg1;
- (BOOL)hasMapLoaded;
- (void)setHasMapLoaded:(BOOL)arg1;
- (BOOL)isFirstRenderComplete;
- (void)setIsFirstRenderComplete:(BOOL)arg1;
- (int)configUpdateIdentifier;
- (void)setConfigUpdateIdentifier:(int)arg1;
- (id)styleManager;
- (void)setStyleManager:(id)arg1;
- (id)appKeyChecker;
- (void)setAppKeyChecker:(id)arg1;
- (id)dataChecker;
- (void)setDataChecker:(id)arg1;
- (id)snapshotTimerSet;
- (void)setSnapshotTimerSet:(id)arg1;
- (id)dataManager;
- (void)setDataManager:(id)arg1;
- (id)indoorManager;
- (void)setIndoorManager:(id)arg1;
- (id)pointEventmanager;
- (void)setPointEventmanager:(id)arg1;
- (id)l4Manager;
- (void)setL4Manager:(id)arg1;
- (id)aoiLayerManager;
- (void)setAoiLayerManager:(id)arg1;
- (id)brandPromotionServer;
- (void)setBrandPromotionServer:(id)arg1;
- (long long)internalMaxFramesPerSecond;
- (void)setInternalMaxFramesPerSecond:(long long)arg1;
- (id)statisticer;
- (void)setStatisticer:(id)arg1;
- (id)logCollector;
- (void)setLogCollector:(id)arg1;
- (id)visualManager;
- (void)setVisualManager:(id)arg1;
- (id)totalElements;
- (void)setTotalElements:(id)arg1;
- (id)poiElements;
- (void)setPoiElements:(id)arg1;
- (id)annotationElements;
- (void)setAnnotationElements:(id)arg1;
- (id)userLocationElement;
- (void)setUserLocationElement:(id)arg1;
- (BOOL)userLocationElementEnabled;
- (void)setUserLocationElementEnabled:(BOOL)arg1;
- (CLLocationCoordinate2D)userLocationElementCoordinate;
- (void)setUserLocationElementCoordinate:(CLLocationCoordinate2D)arg1;
- (id)baseMapViewElement;
- (void)setBaseMapViewElement:(id)arg1;
- (id)internalZoomAnnouncement;
- (void)setInternalZoomAnnouncement:(id)arg1;
- (BOOL)elementDirty;
- (void)setElementDirty:(BOOL)arg1;
- (BOOL)internalAnnotationAccessibilityFrameClipToBounds;
- (void)setInternalAnnotationAccessibilityFrameClipToBounds:(BOOL)arg1;
- (long long)internalMapLanguage;
- (void)setInternalMapLanguage:(long long)arg1;
- (id)dataSafetyInternalManager;
- (void)setDataSafetyInternalManager:(id)arg1;
- (void).cxx_destruct;
@end

