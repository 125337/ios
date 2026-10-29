@interface QMCAIMapView : QMCBaseMapView <QMapViewDelegate, QMapViewIndoorDelegate>
{
    id /* block */ _appearanceDebounceWorkItem; // +0x8
    BOOL _isOverviewTab; // +0x10
    BOOL _isSingleDayTravel; // +0x11
    BOOL _isRoutePlanningMode; // +0x12
    BOOL _forceMarkerVisible; // +0x13
    BOOL _isScaleBarVisible; // +0x14
    BOOL _smallDotMarkersVisible; // +0x15
    BOOL _isMultiPointScene; // +0x16
    BOOL _mapViewReady; // +0x17
    BOOL _isFlushingPendingMCPCalls; // +0x18
    BOOL _isCameraPlaybackActive; // +0x19
    BOOL _isFlyoverAnimating; // +0x1a
    BOOL _cameraPlaybackFitOnComplete; // +0x1b
    QMCMapViewBridge * _bridge; // +0x20
    id /* block */ _userLocationProvider; // +0x28
    id /* block */ _onAgileAnnotationTapped; // +0x30
    id /* block */ _onDayBubbleTapped; // +0x38
    id /* block */ _onMapBlankTapped; // +0x40
    id /* block */ _onAgileMarkersAdded; // +0x48
    id /* block */ _onIndoorBuildingChanged; // +0x50
    id /* block */ _onIndoorPickerNeedsLayout; // +0x58
    id /* block */ _onScaleViewNeedsLayout; // +0x60
    NSMutableDictionary * _commandsCache; // +0x68
    long long _currentDayIndex; // +0x70
    NSMutableDictionary * _routeCommandsCache; // +0x78
    NSString * _currentRouteName; // +0x80
    NSString * _pendingRouteName; // +0x88
    NSMutableDictionary * _markerDataCache; // +0x90
    NSString * _selectedMarkerId; // +0x98
    NSMutableDictionary * _cachedPolygonDataMap; // +0xa0
    NSArray * _currentDisplayedPolygons; // +0xa8
    NSMutableArray * _roadMaskPolygons; // +0xb0
    NSArray * _roadMaskSourceData; // +0xb8
    double _lastPanelTopY; // +0xc0
    double _logoLeftInset; // +0xc8
    double _floatingButtonTopY; // +0xd0
    double _trafficLegendTopY; // +0xd8
    NSTimer * _scaleBarPersistenceTimer; // +0xe0
    UIView * _cachedLogoView; // +0xe8
    NSMutableDictionary * _smallDotMarkerCache; // +0xf0
    NSMutableArray * _pendingCalls; // +0xf8
    NSMutableArray * _pendingCameraCommands; // +0x100
    NSTimer * _cameraPlaybackTimer; // +0x108
    long long _cameraPlaybackStepIndex; // +0x110
    long long _cameraPlaybackPhase; // +0x118
    NSMutableArray * _cameraPlaybackMarkerCommands; // +0x120
    NSMutableArray * _cameraPlaybackAnimatedPolylineJsons; // +0x128
    id /* block */ _cameraPlaybackOnComplete; // +0x130
    NSMutableArray * _travelPlaybackDayQueue; // +0x138
    long long _travelPlaybackCurrentQueueIndex; // +0x140
    NSTimer * _reportInteractDebounceTimer; // +0x148
    NSString * _reportPendingInteractType; // +0x150
    CGSize _cachedNormalLogoSize; // +0x158
    CGPoint _savedLogoNormalCenter; // +0x168
}
+ (long long)parseDayIndexFromControl:(id)arg1;
+ (id)extractMarkerIdFrom:(id)arg1;
+ (id)buildArgumentFromName:(id)arg1 dataArray:(id)arg2;
+ (id)adjustRouteNodePoiMarkerZIndex:(id)arg1;
+ (long long)extractSequenceNumber:(id)arg1;
+ (id)adjustDayMarkerZIndex:(id)arg1;
+ (long long)extractDayNumber:(id)arg1;
+ (BOOL)isDayMarkerArgument:(id)arg1;
+ (BOOL)detectRoutePlanningMode:(id)arg1 commandIdToDataMap:(id)arg2 commands:(id)arg3;
+ (BOOL)detectTravelPlanningMode:(id)arg1;
+ (id)sanitizeLargeNumbers:(id)arg1;
+ (id)splitPolylinesCommand:(id)arg1;
+ (id)injectEmergeDurationInto:(id)arg1 markerCount:(long long)arg2 polylineCount:(long long)arg3;
+ (double)calculatePerSegmentDurationWithMarkerCount:(long long)arg1 polylineCount:(long long)arg2;
+ (double)calculateTotalAnimationDurationWithMarkerCount:(long long)arg1;
+ (id)parseMarkersFromCommand:(id)arg1;
+ (id)extractFirstCoordinateFromCommand:(id)arg1;
+ (BOOL)isRecommendationMarker:(id)arg1;
+ (BOOL)isTextMarkerCapabilityAvailable;
- (void)handleSwitchTab:(id)arg1;
- (id)filterDayMarkerCommands:(id)arg1;
- (id)extractArgumentFromJsonString:(id)arg1;
- (id)filterOverviewMarkers:(id)arg1;
- (void)handleStartTravelCameraPlayback:(id)arg1;
- (void)startTravelDayPlayback:(long long)arg1 onMapView:(id)arg2;
- (void)advanceToNextTravelDayOnMapView:(id)arg1;
- (void)handleStopTravelCameraPlayback;
- (id)stopSubMarkerCache;
- (id)stopSubPolylineCache;
- (id)displayedSubMarkerIds;
- (id)displayedSubPolylineIds;
- (id)stopSubPendingPoiControl;
- (void)setStopSubPendingPoiControl:(id)arg1;
- (void)cacheStopSubElementsFromMarkerData:(id)arg1;
- (void)showStopSubElementsForPoiControl:(id)arg1;
- (void)hideAllStopSubElements;
- (void)_renderStopSubMarkers:(id)arg1;
- (void)_renderStopSubPolylines:(id)arg1;
- (void)_removeSubMarkerFromMap:(id)arg1;
- (void)_removeSubPolylineFromMap:(id)arg1;
- (void)updateStopSubMarkersVisibilityForZoom;
- (void)applyOverlaySwitchAtomicallyWithCommands:(id)arg1 onMapView:(id)arg2;
- (void)applyOverlaySwitchWithFadeCommands:(id)arg1 onMapView:(id)arg2 completion:(id /* block */)arg3;
- (void)applyOverlaySwitchWithFadeCommands:(id)arg1 onMapView:(id)arg2 fitAfterRender:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)executeRouteCommandsOnMapView:(id)arg1;
- (void)handleSwitchRoute:(id)arg1;
- (void)handleStartCameraPlayback:(id)arg1;
- (void)handleStopCameraPlayback;
- (void)selectMarker:(id)arg1;
- (void)handleTapMarker:(id)arg1;
- (void)handleTapMapBlank:(CLLocationCoordinate2D)arg1;
- (void)handleSelectPOI:(id)arg1;
- (void)handleDeselectPOI;
- (void)switchMarkerToSelected:(id)arg1;
- (void)restoreMarkerToNormal:(id)arg1;
- (id)findAgileAnnotationBy:(id)arg1;
- (void)reloadActivityMarkersExceptMarkerId:(id)arg1;
- (void)adjustSelectedMarkerEdgeAvoidanceForMarkerId:(id)arg1 animated:(BOOL)arg2;
- (id)markerIdForActivityControl:(id)arg1;
- (void)cacheMarkerData:(id)arg1;
- (id)markerIdForPoiControl:(id)arg1;
- (BOOL)isMarkerCanBeSelected:(id)arg1;
- (BOOL)isRouteCommandsReady;
- (BOOL)isTravelCommandsReady;
- (void)resetRouteCacheIfNeeded:(id)arg1 resetSet:(id)arg2;
- (void)appendCommand:(id)arg1 toRouteName:(id)arg2;
- (void)executeMCPCommands:(id)arg1 commandIdToDayIndexMap:(id)arg2 commandIdToDataMap:(id)arg3 commandIdToRouteNameMap:(id)arg4;
- (void)executeMCPCommands:(id)arg1;
- (void)flushPendingCalls;
- (void)replayCameraCommands;
- (void)clearMapOverlays;
- (BOOL)hasVisibleMapElements;
- (id)prepareCameraPlaybackDataFromCommands:(id)arg1;
- (BOOL)startCameraPlaybackWithCommands:(id)arg1 onMapView:(id)arg2 fitOnComplete:(BOOL)arg3 onComplete:(id /* block */)arg4;
- (void)executeCameraPlaybackStepOnMapView:(id)arg1;
- (void)stopCameraPlaybackTimer;
- (id)collectCoordinatesFromPlaybackDataWithMarkers:(id)arg1 polylines:(id)arg2;
- (void)fitMapToVisibleContentAnimated:(BOOL)arg1 excludeContentMarkers:(BOOL)arg2;
- (void)fitMapToVisibleContentAnimated:(BOOL)arg1 animationType:(long long)arg2 duration:(double)arg3 excludeContentMarkers:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)animateWithOverviewFromCenter:(CLLocationCoordinate2D)arg1 fromZoom:(double)arg2 toCenter:(CLLocationCoordinate2D)arg3 toZoom:(double)arg4 totalDuration:(double)arg5 completion:(id /* block */)arg6;
- (void)flyoverFromCenter:(CLLocationCoordinate2D)arg1 fromZoom:(double)arg2 toCenter:(CLLocationCoordinate2D)arg3 toZoom:(double)arg4 completion:(id /* block */)arg5;
- (void)animateMapCameraToCoordinate:(CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 animationType:(long long)arg3 duration:(double)arg4 completion:(id /* block */)arg5;
- (id)collectAllVisibleCoordinatesExcludeDiscreteMarkers:(BOOL)arg1;
- (void)fitMapToSelectedMarker:(CLLocationCoordinate2D)arg1 markerId:(id)arg2 animated:(BOOL)arg3;
- (BOOL)isCoordinateInSafeVisibleArea:(CLLocationCoordinate2D)arg1;
- (void)fitMapToVisibleContentAnimated:(BOOL)arg1;
- (void)debouncedFitVisibleContentAnimated:(BOOL)arg1;
- (void)_debouncedFitVisibleContentAction;
- (void)handleUpdateSafeAreaEvent:(id)arg1;
- (void)updateSafeArea:(CGRect)arg1;
- (void)updateSafeArea:(CGRect)arg1 mapHeight:(double)arg2 panelTopY:(double)arg3;
- (void)_updateLogoPositionWithPanelTopY:(double)arg1;
- (id)_findAndCacheLogoView;
- (id)_findLogoViewRecursive:(id)arg1 targetCenter:(CGPoint)arg2;
- (void)_syncLogoVisibility;
- (void)_resyncScaleViewPosition;
- (id)_findIndoorPickerInView:(id)arg1;
- (void)_updateIndoorPickerPositionWithLogoTopY:(double)arg1;
- (void)_resyncIndoorPickerPosition;
- (BOOL)_shouldApplySingleMarkerOptimization;
- (BOOL)shouldApplySingleMarkerOptimization;
- (void)_applySingleMarkerZoomOptimizationWithPolygon:(BOOL)arg1 focusRect:(id)arg2 padding:(UIEdgeInsets)arg3 animated:(BOOL)arg4;
- (void)installHandlersOnBridge:(id)arg1;
- (void)uninstallHandlersFromBridge:(id)arg1;
- (void)sendToUI:(id)arg1 params:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)refreshAnnotationsForAppearanceChange;
- (void)refreshPolylineOverlaysForAppearanceChange;
- (void)refreshPolygonOverlayForAppearanceChange;
- (void)refreshRoadMaskForAppearanceChange;
- (void)_initializeInternalState;
- (void)_wireMapCallbacks;
- (id)_hostUserLocation;
- (void)chat:(id)arg1;
- (void)executeMapCommand:(id)arg1;
- (void)executeMapCommand:(id)arg1 forceMarkerVisible:(BOOL)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)viewForAgileAnnotation:(id)arg1 mapView:(id)arg2;
- (id)viewForActivityAnnotation:(id)arg1 mapView:(id)arg2 jsonDict:(id)arg3;
- (id)viewForSelectedActivityAnnotation:(id)arg1 mapView:(id)arg2 annotationView:(id)arg3;
- (id)_activityBubblePosterURLFromBubble:(id)arg1;
- (id)_activityHotBadgeURLFromBubble:(id)arg1;
- (id)_activityAnchorDotURLFromBubble:(id)arg1;
- (id)renderSelectedActivityBubbleImageWithBubble:(id)arg1 posterImage:(id)arg2 hotBadgeImage:(id)arg3 anchorDotImage:(id)arg4;
- (id)_activityBubblePathWithRect:(CGRect)arg1 cornerRadius:(double)arg2 pointerHeight:(double)arg3;
- (id)_activityThemedColorFromStyle:(id)arg1 lightKey:(id)arg2 darkKey:(id)arg3 fallback:(id)arg4;
- (id)renderActivityMarkerImageWithIcon:(id)arg1 selected:(BOOL)arg2 markerSize:(CGSize)arg3;
- (void)drawActivityFallbackIconInRect:(CGRect)arg1 selected:(BOOL)arg2;
- (id)viewForContentMarker:(id)arg1 mapView:(id)arg2;
- (id)renderContentMarkerImage:(id)arg1;
- (id)renderContentMarkerImage:(id)arg1 textColor:(id)arg2 strokeColor:(id)arg3;
- (id)renderRichInfoImage:(id)arg1 iconImages:(id)arg2;
- (id)_pickThemedValue:(id)arg1 lightKey:(id)arg2 darkKey:(id)arg3 isDark:(BOOL)arg4;
- (id)_parseColorString:(id)arg1;
- (id)parseAgileJsonData:(id)arg1;
- (id)extractImageURL:(id)arg1;
- (void)_refreshStopMarkerTitleForAppearanceChange:(id)arg1 view:(id)arg2 isDark:(BOOL)arg3;
- (id)_stopMarkerTitleFor:(id)arg1;
- (BOOL)_isStopMainMarker:(id)arg1;
- (id)_composeThemedIconPathFromSelectedDict:(id)arg1 fallback:(id)arg2;
- (BOOL)isDarkMode;
- (CGPoint)parseAnchor:(id)arg1;
- (id)renderNumberedMarkerImage:(long long)arg1 bgColor:(id)arg2;
- (id)compositeText:(id)arg1 onImage:(id)arg2 fontSize:(double)arg3 topOffset:(double)arg4 textColor:(id)arg5;
- (id)compositeImage:(id)arg1 withMiniIcon:(id)arg2;
- (id)miniIconURLFromJsonDict:(id)arg1;
- (id)renderDayMarkerImage:(id)arg1 fillColor:(id)arg2 textColor:(id)arg3 strokeColor:(id)arg4 borderWidth:(double)arg5 borderRadius:(double)arg6 fontSize:(double)arg7;
- (id)renderPlaceholderImage:(CGSize)arg1;
- (id)renderDefaultMarkerImage;
- (id)colorFromHex:(id)arg1;
- (BOOL)upgradeToTextMarkerIfEligible:(id)arg1 annotation:(id)arg2;
- (id)parseTextMarkerPositions:(id)arg1;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didTapAtCoordinate:(CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)mapView:(id)arg1 didChangeActiveLevel:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 gestureDidTrigger:(unsigned long long)arg2;
- (void)mapView:(id)arg1 scaleViewChanged:(double)arg2;
- (void)mapView:(id)arg1 willZoomAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 didZoomAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)layoutSubviews;
- (id)createGreenSegmentColor:(id)arg1 lineColor:(id)arg2 borderColor:(id)arg3;
- (id)routeArrowSymbolImage;
- (void)safeRemoveAnnotation:(id)arg1;
- (id)dotTextureImageWithColor:(id)arg1 size:(double)arg2;
- (void)safeRemoveAnnotations:(id)arg1;
- (void)_reportEnqueueInteractType:(id)arg1;
- (long long)_reportInteractPriority:(id)arg1;
- (id)bridge;
- (void)setBridge:(id)arg1;
- (id /* block */)userLocationProvider;
- (void)setUserLocationProvider:(id /* block */)arg1;
- (id /* block */)onAgileAnnotationTapped;
- (void)setOnAgileAnnotationTapped:(id /* block */)arg1;
- (id /* block */)onDayBubbleTapped;
- (void)setOnDayBubbleTapped:(id /* block */)arg1;
- (id /* block */)onMapBlankTapped;
- (void)setOnMapBlankTapped:(id /* block */)arg1;
- (id /* block */)onAgileMarkersAdded;
- (void)setOnAgileMarkersAdded:(id /* block */)arg1;
- (id /* block */)onIndoorBuildingChanged;
- (void)setOnIndoorBuildingChanged:(id /* block */)arg1;
- (id /* block */)onIndoorPickerNeedsLayout;
- (void)setOnIndoorPickerNeedsLayout:(id /* block */)arg1;
- (id /* block */)onScaleViewNeedsLayout;
- (void)setOnScaleViewNeedsLayout:(id /* block */)arg1;
- (id)commandsCache;
- (void)setCommandsCache:(id)arg1;
- (long long)currentDayIndex;
- (void)setCurrentDayIndex:(long long)arg1;
- (BOOL)isOverviewTab;
- (void)setIsOverviewTab:(BOOL)arg1;
- (BOOL)isSingleDayTravel;
- (void)setIsSingleDayTravel:(BOOL)arg1;
- (id)routeCommandsCache;
- (void)setRouteCommandsCache:(id)arg1;
- (id)currentRouteName;
- (void)setCurrentRouteName:(id)arg1;
- (id)pendingRouteName;
- (void)setPendingRouteName:(id)arg1;
- (BOOL)isRoutePlanningMode;
- (void)setIsRoutePlanningMode:(BOOL)arg1;
- (BOOL)forceMarkerVisible;
- (void)setForceMarkerVisible:(BOOL)arg1;
- (id)markerDataCache;
- (void)setMarkerDataCache:(id)arg1;
- (id)selectedMarkerId;
- (void)setSelectedMarkerId:(id)arg1;
- (id)cachedPolygonDataMap;
- (void)setCachedPolygonDataMap:(id)arg1;
- (id)currentDisplayedPolygons;
- (void)setCurrentDisplayedPolygons:(id)arg1;
- (id)roadMaskPolygons;
- (void)setRoadMaskPolygons:(id)arg1;
- (id)roadMaskSourceData;
- (void)setRoadMaskSourceData:(id)arg1;
- (double)lastPanelTopY;
- (void)setLastPanelTopY:(double)arg1;
- (CGSize)cachedNormalLogoSize;
- (void)setCachedNormalLogoSize:(CGSize)arg1;
- (double)logoLeftInset;
- (void)setLogoLeftInset:(double)arg1;
- (double)floatingButtonTopY;
- (void)setFloatingButtonTopY:(double)arg1;
- (double)trafficLegendTopY;
- (void)setTrafficLegendTopY:(double)arg1;
- (id)scaleBarPersistenceTimer;
- (void)setScaleBarPersistenceTimer:(id)arg1;
- (BOOL)isScaleBarVisible;
- (void)setIsScaleBarVisible:(BOOL)arg1;
- (CGPoint)savedLogoNormalCenter;
- (void)setSavedLogoNormalCenter:(CGPoint)arg1;
- (id)cachedLogoView;
- (void)setCachedLogoView:(id)arg1;
- (id)smallDotMarkerCache;
- (void)setSmallDotMarkerCache:(id)arg1;
- (BOOL)smallDotMarkersVisible;
- (void)setSmallDotMarkersVisible:(BOOL)arg1;
- (BOOL)isMultiPointScene;
- (void)setIsMultiPointScene:(BOOL)arg1;
- (id)pendingCalls;
- (void)setPendingCalls:(id)arg1;
- (BOOL)mapViewReady;
- (void)setMapViewReady:(BOOL)arg1;
- (BOOL)isFlushingPendingMCPCalls;
- (void)setIsFlushingPendingMCPCalls:(BOOL)arg1;
- (id)pendingCameraCommands;
- (void)setPendingCameraCommands:(id)arg1;
- (BOOL)isCameraPlaybackActive;
- (void)setIsCameraPlaybackActive:(BOOL)arg1;
- (id)cameraPlaybackTimer;
- (void)setCameraPlaybackTimer:(id)arg1;
- (long long)cameraPlaybackStepIndex;
- (void)setCameraPlaybackStepIndex:(long long)arg1;
- (long long)cameraPlaybackPhase;
- (void)setCameraPlaybackPhase:(long long)arg1;
- (BOOL)isFlyoverAnimating;
- (void)setIsFlyoverAnimating:(BOOL)arg1;
- (id)cameraPlaybackMarkerCommands;
- (void)setCameraPlaybackMarkerCommands:(id)arg1;
- (id)cameraPlaybackAnimatedPolylineJsons;
- (void)setCameraPlaybackAnimatedPolylineJsons:(id)arg1;
- (id /* block */)cameraPlaybackOnComplete;
- (void)setCameraPlaybackOnComplete:(id /* block */)arg1;
- (BOOL)cameraPlaybackFitOnComplete;
- (void)setCameraPlaybackFitOnComplete:(BOOL)arg1;
- (id)travelPlaybackDayQueue;
- (void)setTravelPlaybackDayQueue:(id)arg1;
- (long long)travelPlaybackCurrentQueueIndex;
- (void)setTravelPlaybackCurrentQueueIndex:(long long)arg1;
- (id)reportInteractDebounceTimer;
- (void)setReportInteractDebounceTimer:(id)arg1;
- (id)reportPendingInteractType;
- (void)setReportPendingInteractType:(id)arg1;
- (void).cxx_destruct;
@end
