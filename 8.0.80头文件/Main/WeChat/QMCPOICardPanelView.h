@interface QMCPOICardPanelView : UIView <QMCCarouselScrollViewDelegate, QMCScalable>
{
    BOOL _isSingleMode; // +0x8
    QMCMapViewBridge * _bridge; // +0x10
    id <QMCCardPanelLayoutDelegate> _layoutDelegate; // +0x18
    id /* block */ _onRouteButtonTap; // +0x20
    id /* block */ _onCustomButtonTap; // +0x28
    id /* block */ _onMultiPoiJumpTap; // +0x30
    id /* block */ _imageLoader; // +0x38
    NSArray * _slots; // +0x40
    QMCPOIItemCardView * _singleCard; // +0x48
    QMCCarouselScrollView * _carousel; // +0x50
    NSMutableArray * _carouselCards; // +0x58
    NSString * _selectedSlotId; // +0x60
    NSString * _autoSelectedFirstSlotId; // +0x68
    QMCMultiPOIJumpButton * _multiPoiJumpButton; // +0x70
    NSDictionary * _multiPoiJumpParams; // +0x78
    QMCSlotData * _multiPoiJumpSlot; // +0x80
    NSLayoutConstraint * _carouselHeightConstraint; // +0x88
    NSMutableDictionary * _tagIconCache; // +0x90
    double _scaleFactor; // +0x98
    long long _pendingScrollEndIndex; // +0xa0
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configureWithSlots:(id)arg1;
- (void)configureWithSlots:(id)arg1 multiPoiJumpSlot:(id)arg2;
- (void)setBridge:(id)arg1;
- (void)_buildSingleCardWithSlot:(id)arg1;
- (void)_buildCarouselWithSlots:(id)arg1;
- (void)layoutSubviews;
- (void)_configureCard:(id)arg1 withSlot:(id)arg2 fullWidth:(BOOL)arg3;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_ensureMultiPoiJumpButtonCreated;
- (void)_hideMultiPoiJumpButton;
- (double)floatingButtonRightEdgeInView:(id)arg1;
- (double)floatingButtonTopEdgeInView:(id)arg1;
- (void)_configureMultiPoiJumpWithSlot:(id)arg1;
- (void)_handleButtonTap:(id)arg1 forSlot:(id)arg2;
- (id)_tagItemsFromTagInfoArray:(id)arg1;
- (id)_tagItemsFromLegacyTagsArray:(id)arg1;
- (id)_colorFromCSSString:(id)arg1;
- (id)_dynamicColorWithLight:(id)arg1 dark:(id)arg2;
- (_NSRange)_findDividerRangeInString:(id)arg1;
- (id)_resolveInternetImageURL:(id)arg1;
- (void)_autoSelectFirstSlotIfNeeded;
- (void)_setSelectedSlotId:(id)arg1 scrollTo:(BOOL)arg2;
- (void)_handleSelectTapForSlotId:(id)arg1;
- (void)_handleMapBlankTapped;
- (void)_handleMarkerSelectedParams:(id)arg1;
- (void)_sendSelectPOIForSlot:(id)arg1;
- (void)_sendDeselectPOIForSlotId:(id)arg1;
- (void)carouselScrollView:(id)arg1 didSnapToIndex:(long long)arg2;
- (void)carouselScrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollToCardAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (id)_slotForId:(id)arg1;
- (void)_tearDownAll;
- (void)_tearDownSingleCard;
- (void)_tearDownCarousel;
- (void)qmc_applyScale:(double)arg1;
- (void)didAddSubview:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)currentJumpParams;
- (id)bridge;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (id /* block */)onRouteButtonTap;
- (void)setOnRouteButtonTap:(id /* block */)arg1;
- (id /* block */)onCustomButtonTap;
- (void)setOnCustomButtonTap:(id /* block */)arg1;
- (id /* block */)onMultiPoiJumpTap;
- (void)setOnMultiPoiJumpTap:(id /* block */)arg1;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id)slots;
- (void)setSlots:(id)arg1;
- (id)singleCard;
- (void)setSingleCard:(id)arg1;
- (id)carousel;
- (void)setCarousel:(id)arg1;
- (id)carouselCards;
- (void)setCarouselCards:(id)arg1;
- (id)selectedSlotId;
- (void)setSelectedSlotId:(id)arg1;
- (id)autoSelectedFirstSlotId;
- (void)setAutoSelectedFirstSlotId:(id)arg1;
- (BOOL)isSingleMode;
- (void)setIsSingleMode:(BOOL)arg1;
- (id)multiPoiJumpButton;
- (void)setMultiPoiJumpButton:(id)arg1;
- (id)multiPoiJumpParams;
- (void)setMultiPoiJumpParams:(id)arg1;
- (id)multiPoiJumpSlot;
- (void)setMultiPoiJumpSlot:(id)arg1;
- (id)carouselHeightConstraint;
- (void)setCarouselHeightConstraint:(id)arg1;
- (id)tagIconCache;
- (void)setTagIconCache:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (long long)pendingScrollEndIndex;
- (void)setPendingScrollEndIndex:(long long)arg1;
- (void).cxx_destruct;
@end
