@interface QMCPremadeRouteCardPanelView : UIView <QMCScalable, QMCCarouselScrollViewDelegate>
{
    BOOL _hasSentFirstSwitch; // +0x8
    BOOL _isCarousel; // +0x9
    QMCMapViewBridge * _bridge; // +0x10
    id <QMCCardPanelLayoutDelegate> _layoutDelegate; // +0x18
    id /* block */ _onMainJumpTap; // +0x20
    id /* block */ _onButtonTap; // +0x28
    id /* block */ _onAllJumpTap; // +0x30
    id /* block */ _imageLoader; // +0x38
    NSArray * _slots; // +0x40
    QMCCarouselScrollView * _carousel; // +0x48
    NSMutableArray * _itemViews; // +0x50
    long long _selectedIndex; // +0x58
    double _scaleFactor; // +0x60
    double _lastIntrinsicWidth; // +0x68
    NSLayoutConstraint * _scrollHeightConstraint; // +0x70
    NSDictionary * _allJumpParams; // +0x78
    QMCMultiPOIJumpButton * _allJumpButton; // +0x80
    NSDictionary * _allJumpButtonInfo; // +0x88
    QMCSlotData * _allJumpSlot; // +0x90
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setup;
- (void)setBridge:(id)arg1;
- (void)configureWithSlots:(id)arg1;
- (void)configureWithSlots:(id)arg1 allJumpSlot:(id)arg2;
- (void)hostDidReceiveAllMCPCommands;
- (void)_buildSingleCardWithSlot:(id)arg1;
- (void)_buildCarouselWithSlots:(id)arg1;
- (void)layoutSubviews;
- (id)_createItemViewForSlot:(id)arg1 atIndex:(long long)arg2;
- (void)_selectIndex:(long long)arg1 scrollTo:(BOOL)arg2 sendBridge:(BOOL)arg3;
- (void)_tearDown;
- (void)carouselScrollView:(id)arg1 didSnapToIndex:(long long)arg2;
- (void)_scrollToCardAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)_sendSwitchRouteForIndex:(long long)arg1;
- (void)qmc_applyScale:(double)arg1;
- (CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_parseAllJumpSlot;
- (void)_ensureAllJumpButtonCreated;
- (void)_configureAllJumpButton;
- (void)_hideAllJumpButton;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (double)floatingButtonRightEdgeInView:(id)arg1;
- (double)floatingButtonTopEdgeInView:(id)arg1;
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
- (id)carousel;
- (void)setCarousel:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (BOOL)hasSentFirstSwitch;
- (void)setHasSentFirstSwitch:(BOOL)arg1;
- (BOOL)isCarousel;
- (void)setIsCarousel:(BOOL)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (double)lastIntrinsicWidth;
- (void)setLastIntrinsicWidth:(double)arg1;
- (id)scrollHeightConstraint;
- (void)setScrollHeightConstraint:(id)arg1;
- (id)allJumpParams;
- (void)setAllJumpParams:(id)arg1;
- (id)allJumpButton;
- (void)setAllJumpButton:(id)arg1;
- (id)allJumpButtonInfo;
- (void)setAllJumpButtonInfo:(id)arg1;
- (id)allJumpSlot;
- (void)setAllJumpSlot:(id)arg1;
- (void).cxx_destruct;
@end
