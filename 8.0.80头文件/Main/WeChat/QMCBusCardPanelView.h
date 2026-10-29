@interface QMCBusCardPanelView : UIView <QMCScalable, QMCCarouselScrollViewDelegate>
{
    BOOL _mapGesturesDisabled; // +0x8
    BOOL _isRealtimeCard; // +0x9
    BOOL _hasRealtimeInfo; // +0xa
    BOOL _isCarouselMode; // +0xb
    BOOL _hasSentFirstSwitch; // +0xc
    BOOL _isCarouselScroll; // +0xd
    QMCMapViewBridge * _bridge; // +0x10
    id <QMCCardPanelLayoutDelegate> _layoutDelegate; // +0x18
    id /* block */ _onCardTap; // +0x20
    id /* block */ _onMainJumpTap; // +0x28
    id /* block */ _onButtonTap; // +0x30
    id /* block */ _onShareTap; // +0x38
    id /* block */ _onFullscreenTap; // +0x40
    id /* block */ _onOverviewTap; // +0x48
    id /* block */ _onRefreshTap; // +0x50
    id /* block */ _imageLoader; // +0x58
    QMCSlotData * _realtimeSlot; // +0x60
    QMCSlotData * _routeSlot; // +0x68
    long long _displayMode; // +0x70
    double _lastIntrinsicWidth; // +0x78
    UIView * _cardContainer; // +0x80
    UIView * _dividerView; // +0x88
    UILabel * _lineNumberLabel; // +0x90
    UIView * _routeTagContainer; // +0x98
    UILabel * _routeTagLabel; // +0xa0
    UILabel * _directionLabel; // +0xa8
    UILabel * _stationPrefixLabel; // +0xb0
    UILabel * _stationContentLabel; // +0xb8
    UILabel * _arrivalTimeLabel; // +0xc0
    UILabel * _arrivalUnitLabel; // +0xc8
    UILabel * _distanceLabel; // +0xd0
    UILabel * _noRealtimeLabel; // +0xd8
    UILabel * _firstLastBusLabel; // +0xe0
    UIView * _routePreviewView; // +0xe8
    UIView * _startMarker; // +0xf0
    UIView * _endMarker; // +0xf8
    UILabel * _startPoiLabel; // +0x100
    UILabel * _endPoiLabel; // +0x108
    UIButton * _refreshButton; // +0x110
    UIButton * _shareButton; // +0x118
    UIButton * _fullscreenButton; // +0x120
    NSMutableArray * _dynamicConstraints; // +0x128
    double _scaleFactor; // +0x130
    NSArray * _singleCardContainerConstraints; // +0x138
    NSArray * _allSlots; // +0x140
    NSArray * _visibleSlots; // +0x148
    QMCCarouselScrollView * _carouselScrollView; // +0x150
    NSMutableArray * _carouselItemViews; // +0x158
    long long _carouselSelectedIndex; // +0x160
    NSLayoutConstraint * _carouselHeightConstraint; // +0x168
    NSMutableSet * _invisibleRouteNames; // +0x170
    NSDictionary * _routeNameToIndex; // +0x178
    UIButton * _carouselRefreshButton; // +0x180
    UIButton * _carouselOverviewButton; // +0x188
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setupCarouselState;
- (void)_buildStaticUI;
- (void)_applyDynamicConstraintsForMode:(long long)arg1 animated:(BOOL)arg2;
- (void)_layoutForDefault:(id)arg1;
- (void)_layoutRealtimeDefault:(id)arg1;
- (void)_layoutRouteDefault:(id)arg1;
- (void)_layoutForCompact:(id)arg1;
- (void)_layoutForMapExpanded:(id)arg1;
- (void)switchToDisplayMode:(long long)arg1 animated:(BOOL)arg2;
- (void)configureWithSlots:(id)arg1;
- (void)_emitRTLDiag:(id)arg1;
- (void)_enterSingleCardModeWithSlots:(id)arg1;
- (id)currentJumpParams;
- (double)visualTopInset;
- (void)_refreshUIData;
- (void)_applyDisplayMode:(long long)arg1 animated:(BOOL)arg2;
- (void)_showAllDefaultElements;
- (void)_showCompactElements;
- (void)_showMinimalElements;
- (void)setStartEndPoiVisible:(BOOL)arg1;
- (void)_handleCardTap;
- (void)_handleRefreshTap;
- (void)_handleShareTap;
- (void)_handleFullscreenTap;
- (void)setBridge:(id)arg1;
- (void)hostDidReceiveAllMCPCommands;
- (void)_enterCarouselModeWithSlots:(id)arg1;
- (void)_rebuildVisibleSlots;
- (void)_handleSwitchForSlot:(id)arg1;
- (void)_switchToRouteName:(id)arg1 fromMap:(BOOL)arg2;
- (void)_rebuildCarouselUI;
- (void)_rebuildCarouselUISuppressBridge:(BOOL)arg1;
- (void)_buildSingleCarouselCardWithSlot:(id)arg1;
- (void)_buildCarouselWithSlots:(id)arg1;
- (id)_createCarouselItemForSlot:(id)arg1 atIndex:(long long)arg2;
- (void)_carouselSelectIndex:(long long)arg1 scrollTo:(BOOL)arg2 sendBridge:(BOOL)arg3;
- (void)_tearDownCarousel;
- (void)carouselScrollView:(id)arg1 didSnapToIndex:(long long)arg2;
- (void)_scrollToCardAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)_sendSwitchRouteForIndex:(long long)arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (void)qmc_applyScale:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_ensureCarouselFloatingButtons;
- (id)_makeFloatingButton:(id)arg1 action:(SEL)arg2;
- (void)_layoutCarouselFloatingButtons;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_handleCarouselRefreshTap;
- (void)_handleCarouselOverviewTap;
- (id)_makeLabel:(double)arg1 size:(double)arg2 color:(id)arg3;
- (id)_makeActionButton:(id)arg1 action:(SEL)arg2;
- (id)_makeDotMarker:(id)arg1;
- (id)bridge;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (BOOL)mapGesturesDisabled;
- (void)setMapGesturesDisabled:(BOOL)arg1;
- (id /* block */)onCardTap;
- (void)setOnCardTap:(id /* block */)arg1;
- (id /* block */)onMainJumpTap;
- (void)setOnMainJumpTap:(id /* block */)arg1;
- (id /* block */)onButtonTap;
- (void)setOnButtonTap:(id /* block */)arg1;
- (id /* block */)onShareTap;
- (void)setOnShareTap:(id /* block */)arg1;
- (id /* block */)onFullscreenTap;
- (void)setOnFullscreenTap:(id /* block */)arg1;
- (id /* block */)onOverviewTap;
- (void)setOnOverviewTap:(id /* block */)arg1;
- (id /* block */)onRefreshTap;
- (void)setOnRefreshTap:(id /* block */)arg1;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id)realtimeSlot;
- (void)setRealtimeSlot:(id)arg1;
- (id)routeSlot;
- (void)setRouteSlot:(id)arg1;
- (long long)displayMode;
- (void)setDisplayMode:(long long)arg1;
- (double)lastIntrinsicWidth;
- (void)setLastIntrinsicWidth:(double)arg1;
- (id)cardContainer;
- (void)setCardContainer:(id)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (id)lineNumberLabel;
- (void)setLineNumberLabel:(id)arg1;
- (id)routeTagContainer;
- (void)setRouteTagContainer:(id)arg1;
- (id)routeTagLabel;
- (void)setRouteTagLabel:(id)arg1;
- (id)directionLabel;
- (void)setDirectionLabel:(id)arg1;
- (id)stationPrefixLabel;
- (void)setStationPrefixLabel:(id)arg1;
- (id)stationContentLabel;
- (void)setStationContentLabel:(id)arg1;
- (id)arrivalTimeLabel;
- (void)setArrivalTimeLabel:(id)arg1;
- (id)arrivalUnitLabel;
- (void)setArrivalUnitLabel:(id)arg1;
- (id)distanceLabel;
- (void)setDistanceLabel:(id)arg1;
- (id)noRealtimeLabel;
- (void)setNoRealtimeLabel:(id)arg1;
- (id)firstLastBusLabel;
- (void)setFirstLastBusLabel:(id)arg1;
- (id)routePreviewView;
- (void)setRoutePreviewView:(id)arg1;
- (id)startMarker;
- (void)setStartMarker:(id)arg1;
- (id)endMarker;
- (void)setEndMarker:(id)arg1;
- (id)startPoiLabel;
- (void)setStartPoiLabel:(id)arg1;
- (id)endPoiLabel;
- (void)setEndPoiLabel:(id)arg1;
- (id)refreshButton;
- (void)setRefreshButton:(id)arg1;
- (id)shareButton;
- (void)setShareButton:(id)arg1;
- (id)fullscreenButton;
- (void)setFullscreenButton:(id)arg1;
- (BOOL)isRealtimeCard;
- (void)setIsRealtimeCard:(BOOL)arg1;
- (BOOL)hasRealtimeInfo;
- (void)setHasRealtimeInfo:(BOOL)arg1;
- (id)dynamicConstraints;
- (void)setDynamicConstraints:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (BOOL)isCarouselMode;
- (void)setIsCarouselMode:(BOOL)arg1;
- (id)singleCardContainerConstraints;
- (void)setSingleCardContainerConstraints:(id)arg1;
- (id)allSlots;
- (void)setAllSlots:(id)arg1;
- (id)visibleSlots;
- (void)setVisibleSlots:(id)arg1;
- (id)carouselScrollView;
- (void)setCarouselScrollView:(id)arg1;
- (id)carouselItemViews;
- (void)setCarouselItemViews:(id)arg1;
- (long long)carouselSelectedIndex;
- (void)setCarouselSelectedIndex:(long long)arg1;
- (BOOL)hasSentFirstSwitch;
- (void)setHasSentFirstSwitch:(BOOL)arg1;
- (BOOL)isCarouselScroll;
- (void)setIsCarouselScroll:(BOOL)arg1;
- (id)carouselHeightConstraint;
- (void)setCarouselHeightConstraint:(id)arg1;
- (id)invisibleRouteNames;
- (void)setInvisibleRouteNames:(id)arg1;
- (id)routeNameToIndex;
- (void)setRouteNameToIndex:(id)arg1;
- (id)carouselRefreshButton;
- (void)setCarouselRefreshButton:(id)arg1;
- (id)carouselOverviewButton;
- (void)setCarouselOverviewButton:(id)arg1;
- (void).cxx_destruct;
@end
