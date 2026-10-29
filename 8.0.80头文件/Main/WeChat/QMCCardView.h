@interface QMCCardView : UIView <QMCCardPanelLayoutDelegate>
{
    BOOL _isCameraPlaying; // +0x8
    BOOL _showCameraPlayButton; // +0x9
    BOOL _embeddedInScrollView; // +0xa
    BOOL _mapGesturesDisabled; // +0xb
    QMCCard * _card; // +0x10
    id <QMCCardViewDelegate> _viewDelegate; // +0x18
    QMCAIMapView * _mapView; // +0x20
    QMCMapViewBridge * _bridge; // +0x28
    QMCCardOverlayView * _overlayView; // +0x30
    QMCPOICardPanelView * _poiPanel; // +0x38
    QMCRouteCardPanelView * _routePanel; // +0x40
    QMCTravelCardPanelView * _travelPanel; // +0x48
    QMCPremadeRouteCardPanelView * _premadeRoutePanel; // +0x50
    QMCBusCardPanelView * _busPanel; // +0x58
    QMCSubwayWebView * _subwayView; // +0x60
    QMCSubwayCardPanelView * _subwayCardPanel; // +0x68
    QMCActivityCardPanelView * _activityPanel; // +0x70
    QMCStopCardPanelView * _stopPanel; // +0x78
    QMCWeatherCardPanelView * _weatherPanel; // +0x80
    NSLayoutConstraint * _weatherCardAspectRatioConstraint; // +0x88
    NSLayoutConstraint * _weatherPanelAspectRatioConstraint; // +0x90
    QMCCameraPlayButton * _cameraPlayButton; // +0x98
    long long _currentCardType; // +0xa0
    double _lastReportedLogoLeftInset; // +0xa8
    UIActivityIndicatorView * _loadingIndicator; // +0xb0
    QMCCardErrorView * _errorView; // +0xb8
    double _scaleFactor; // +0xc0
    QMCMapPanAxisLock * _mapPanAxisLock; // +0xc8
    QMCTrafficLegendView * _trafficLegendView; // +0xd0
    CGRect _lastReportedSafeAreaRect; // +0xd8
    CGRect _lastAppliedMapFrame; // +0xf8
    UIEdgeInsets _mapInteractionInsets; // +0x118
}
- (id)initWithCard:(id)arg1;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_updateWithCardData:(id)arg1 mcpCommandSets:(id)arg2 dayIndexMap:(id)arg3 dataMap:(id)arg4 routeNameMap:(id)arg5;
- (void)_cardDidChangeState:(long long)arg1;
- (void)_reportSafeAreaIfNeeded;
- (void)_prepareForRecycle;
- (id)_currentJumpTarget;
- (void)_applyScaleFactor:(double)arg1;
- (double)_currentPanelHeight;
- (BOOL)_usesWeatherCardAspectRatio;
- (void)_setWeatherCardAspectRatioEnabled:(BOOL)arg1;
- (void)_removeWeatherPanel;
- (void)_applyEmbeddedInScrollView:(BOOL)arg1;
- (void)_applyMapInteractionInsets:(UIEdgeInsets)arg1;
- (void)_applyMapGesturesDisabled:(BOOL)arg1;
- (void)_applyMapGesturesConfigToView:(id)arg1;
- (void)_applyEmbeddedConfigToView:(id)arg1;
- (void)_installAxisLockOnMapView:(id)arg1 enabled:(BOOL)arg2;
- (void)_retryInstallAxisLockOnMapView:(id)arg1 afterSeconds:(double)arg2 retriesLeft:(int)arg3;
- (long long)_attachAxisLock:(id)arg1 toViewTree:(id)arg2 enable:(BOOL)arg3;
- (void)didAddSubview:(id)arg1;
- (void)_ensureMapViewAttached;
- (void)_ensureBridgeCreated;
- (void)_bubbleEvent:(id)arg1 params:(id)arg2;
- (void)_bubbleUIClick:(id)arg1 params:(id)arg2;
- (void)cardPanelViewDidLayout:(id)arg1;
- (void)_buildOrUpdateOverlayForCardData:(id)arg1;
- (void)_buildOrUpdatePOIPanelWithCardData:(id)arg1;
- (void)_buildOrUpdateRoutePanelWithCardData:(id)arg1;
- (void)_buildOrUpdateTravelPanelWithCardData:(id)arg1;
- (void)_buildOrUpdatePremadeRoutePanelWithCardData:(id)arg1;
- (void)_buildOrUpdateBusPanelWithCardData:(id)arg1;
- (void)_buildOrUpdateSubwayPanelWithCardData:(id)arg1;
- (void)_removeSubwayView;
- (void)_buildOrUpdateActivityPanelWithCardData:(id)arg1;
- (void)_buildOrUpdateStopPanelWithCardData:(id)arg1;
- (void)_buildOrUpdateWeatherPanelWithCardData:(id)arg1;
- (void)_tearDownAllPanels;
- (void)_updateTrafficLegendVisibility:(BOOL)arg1;
- (void)_ensureTrafficLegendAttached;
- (void)_ensureCameraPlayButtonCreated;
- (void)_removeCameraPlayButton;
- (void)_updateCameraPlayButtonVisibility;
- (void)_startCameraPlayback;
- (void)_handleAllMCPCommandsReceived;
- (void)_handleCameraPlaybackDidStop;
- (id)_containerBgColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_tearDownOverlay;
- (void)_showLoadingIndicator;
- (void)_hideLoadingIndicator;
- (void)_showErrorView;
- (void)_hideErrorView;
- (id)card;
- (void)setCard:(id)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id)mapView;
- (void)setMapView:(id)arg1;
- (id)bridge;
- (void)setBridge:(id)arg1;
- (id)overlayView;
- (void)setOverlayView:(id)arg1;
- (id)poiPanel;
- (void)setPoiPanel:(id)arg1;
- (id)routePanel;
- (void)setRoutePanel:(id)arg1;
- (id)travelPanel;
- (void)setTravelPanel:(id)arg1;
- (id)premadeRoutePanel;
- (void)setPremadeRoutePanel:(id)arg1;
- (id)busPanel;
- (void)setBusPanel:(id)arg1;
- (id)subwayView;
- (void)setSubwayView:(id)arg1;
- (id)subwayCardPanel;
- (void)setSubwayCardPanel:(id)arg1;
- (id)activityPanel;
- (void)setActivityPanel:(id)arg1;
- (id)stopPanel;
- (void)setStopPanel:(id)arg1;
- (id)weatherPanel;
- (void)setWeatherPanel:(id)arg1;
- (id)weatherCardAspectRatioConstraint;
- (void)setWeatherCardAspectRatioConstraint:(id)arg1;
- (id)weatherPanelAspectRatioConstraint;
- (void)setWeatherPanelAspectRatioConstraint:(id)arg1;
- (id)cameraPlayButton;
- (void)setCameraPlayButton:(id)arg1;
- (BOOL)isCameraPlaying;
- (void)setIsCameraPlaying:(BOOL)arg1;
- (BOOL)showCameraPlayButton;
- (void)setShowCameraPlayButton:(BOOL)arg1;
- (long long)currentCardType;
- (void)setCurrentCardType:(long long)arg1;
- (CGRect)lastReportedSafeAreaRect;
- (void)setLastReportedSafeAreaRect:(CGRect)arg1;
- (double)lastReportedLogoLeftInset;
- (void)setLastReportedLogoLeftInset:(double)arg1;
- (CGRect)lastAppliedMapFrame;
- (void)setLastAppliedMapFrame:(CGRect)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)errorView;
- (void)setErrorView:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (BOOL)embeddedInScrollView;
- (void)setEmbeddedInScrollView:(BOOL)arg1;
- (UIEdgeInsets)mapInteractionInsets;
- (void)setMapInteractionInsets:(UIEdgeInsets)arg1;
- (id)mapPanAxisLock;
- (void)setMapPanAxisLock:(id)arg1;
- (BOOL)mapGesturesDisabled;
- (void)setMapGesturesDisabled:(BOOL)arg1;
- (id)trafficLegendView;
- (void)setTrafficLegendView:(id)arg1;
- (void).cxx_destruct;
@end
