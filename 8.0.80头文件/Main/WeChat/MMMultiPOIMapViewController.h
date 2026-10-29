@interface MMMultiPOIMapViewController : MMUIViewController <QMapViewDelegate, QMUClusterProtocol, MMMultiPOIDetailDelegate, MMMultiPOIDataSourceDelegate>
{
    BOOL _didStartLoadingItems; // +0x70
    BOOL _didFitOnce; // +0x71
    BOOL _mapInitDone; // +0x72
    BOOL _didRenderFirstPage; // +0x73
    NSString * _bizUsername; // +0x78
    long long _poiNum; // +0x80
    NSArray * _items; // +0x88
    NSString * _titleText; // +0x90
    MMMultiPOIDataSource * _dataSource; // +0x98
    MMMapView * _mapView; // +0xa0
    UIButton * _backBtn; // +0xa8
    UIView * _topMaskView; // +0xb0
    CAGradientLayer * _topGradientLayer; // +0xb8
    MMMultiPOIFlutterViewController * _detailVC; // +0xc0
    QMUClusterManager * _clusterManager; // +0xc8
    NSMutableArray * _clusterItems; // +0xd0
    NSMapTable * _viewByItemId; // +0xd8
    double _lastRegionZoomLevel; // +0xe0
}
- (id)initWithBizUsername:(id)arg1 poiNum:(long long)arg2;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (double)currentDetailPanelTopY;
- (void)setupMapView;
- (void)setupOverlayUI;
- (void)setupDetailVC;
- (void)updateClusterDistance;
- (void)loadAnnotations;
- (void)reloadItems:(id)arg1 refit:(BOOL)arg2;
- (void)setupDataSourceAndKickoff;
- (void)scheduleVisibleDetailScan;
- (void)scanVisibleAndRequestDetail;
- (void)multiPOIDataSource:(id)arg1 didLoadItems:(id)arg2 isEnd:(BOOL)arg3;
- (void)multiPOIDataSource:(id)arg1 didFailLoadItemsWithError:(id)arg2;
- (void)multiPOIDataSource:(id)arg1 didLoadDetailForItems:(id)arg2;
- (void)rebuildAnnotationsAndRefit:(BOOL)arg1;
- (id)sourceItemsFromClusterAnnotation:(id)arg1;
- (id)uniqueMarkerItemsKeepingFirst:(id)arg1;
- (id)groupKeyForItem:(id)arg1;
- (id)groupItemsByLocation:(id)arg1;
- (id)largestGroupFromGroups:(id)arg1 outKey:(id *)arg2;
- (CLLocationCoordinate2D)centroidOfItems:(id)arg1;
- (id)clusterAnnotationsFromItems:(id)arg1;
- (void)tryFitLargestGroupIfReady;
- (void)refitAnimated:(BOOL)arg1;
- (UIEdgeInsets)edgePaddingForFit;
- (void)onTapBack;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didAnnotationViewTapped:(id)arg2;
- (void)_openItem:(id)arg1;
- (void)_spreadCluster:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (BOOL)clusterAnnotation:(id)arg1 withAnnotation:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewInitComplete:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMapStyle;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (long long)poiNum;
- (void)setPoiNum:(long long)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (BOOL)didStartLoadingItems;
- (void)setDidStartLoadingItems:(BOOL)arg1;
- (id)mapView;
- (void)setMapView:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)topMaskView;
- (void)setTopMaskView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)detailVC;
- (void)setDetailVC:(id)arg1;
- (id)clusterManager;
- (void)setClusterManager:(id)arg1;
- (id)clusterItems;
- (void)setClusterItems:(id)arg1;
- (id)viewByItemId;
- (void)setViewByItemId:(id)arg1;
- (BOOL)didFitOnce;
- (void)setDidFitOnce:(BOOL)arg1;
- (BOOL)mapInitDone;
- (void)setMapInitDone:(BOOL)arg1;
- (double)lastRegionZoomLevel;
- (void)setLastRegionZoomLevel:(double)arg1;
- (BOOL)didRenderFirstPage;
- (void)setDidRenderFirstPage:(BOOL)arg1;
- (void).cxx_destruct;
@end
