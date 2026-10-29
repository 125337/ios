@interface QMCActivityCardPanelView : UIView <QMCCarouselScrollViewDelegate, QMCScalable>
{
    double _scaleFactor; // +0x8
    long long _pendingScrollEndIndex; // +0x10
    BOOL _isSingleMode; // +0x18
    QMCMapViewBridge * _bridge; // +0x20
    id <QMCCardPanelLayoutDelegate> _layoutDelegate; // +0x28
    id /* block */ _onMainJumpTap; // +0x30
    id /* block */ _onButtonTap; // +0x38
    id /* block */ _onAllJumpTap; // +0x40
    id /* block */ _imageLoader; // +0x48
    NSArray * _slots; // +0x50
    QMCActivityItemCardView * _singleCard; // +0x58
    QMCCarouselScrollView * _carousel; // +0x60
    NSMutableArray * _carouselCards; // +0x68
    NSString * _selectedSlotId; // +0x70
    NSString * _autoSelectedFirstSlotId; // +0x78
    QMCMultiPOIJumpButton * _allJumpButton; // +0x80
    NSDictionary * _allJumpParams; // +0x88
    QMCSlotData * _allJumpSlot; // +0x90
    NSLayoutConstraint * _carouselHeightConstraint; // +0x98
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configureWithSlots:(id)arg1;
- (void)configureWithSlots:(id)arg1 allJumpSlot:(id)arg2;
- (void)hostDidReceiveAllMCPCommands;
- (void)setBridge:(id)arg1;
- (void)_buildSingleCardWithSlot:(id)arg1;
- (void)_buildCarouselWithSlots:(id)arg1;
- (void)layoutSubviews;
- (void)_configureCard:(id)arg1 withSlot:(id)arg2 fullWidth:(BOOL)arg3;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_ensureAllJumpButtonCreated;
- (void)_hideAllJumpButton;
- (double)floatingButtonRightEdgeInView:(id)arg1;
- (double)floatingButtonTopEdgeInView:(id)arg1;
- (void)_configureAllJumpWithSlot:(id)arg1;
- (void)_handleSelectTapForSlotId:(id)arg1;
- (void)_handleButtonTap:(id)arg1 forSlot:(id)arg2;
- (void)_handleMapBlankTapped;
- (void)_handleMarkerSelectedParams:(id)arg1;
- (void)_autoSelectFirstSlotIfNeeded;
- (void)_setSelectedSlotId:(id)arg1 scrollTo:(BOOL)arg2;
- (void)carouselScrollView:(id)arg1 didSnapToIndex:(long long)arg2;
- (void)carouselScrollViewDidEndDecelerating:(id)arg1;
- (void)_sendSelectActivityForSlot:(id)arg1 fitAllVisibleContent:(BOOL)arg2;
- (void)_scrollToCardAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (id)_slotForId:(id)arg1;
- (id)_jumpParams:(id)arg1 forSlot:(id)arg2 extra:(id)arg3;
- (id)_mainJumpForSlot:(id)arg1;
- (id)_subtitlePartsFromSecondLine:(id)arg1;
- (_NSRange)_findDividerRangeInString:(id)arg1;
- (id)_tagItemsFromBizData:(id)arg1;
- (id)_themedColorFromLight:(id)arg1 dark:(id)arg2;
- (id)_colorFromCSSString:(id)arg1;
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
- (id /* block */)onMainJumpTap;
- (void)setOnMainJumpTap:(id /* block */)arg1;
- (id /* block */)onButtonTap;
- (void)setOnButtonTap:(id /* block */)arg1;
- (id /* block */)onAllJumpTap;
- (void)setOnAllJumpTap:(id /* block */)arg1;
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
- (id)allJumpButton;
- (void)setAllJumpButton:(id)arg1;
- (id)allJumpParams;
- (void)setAllJumpParams:(id)arg1;
- (id)allJumpSlot;
- (void)setAllJumpSlot:(id)arg1;
- (id)carouselHeightConstraint;
- (void)setCarouselHeightConstraint:(id)arg1;
- (void).cxx_destruct;
@end
