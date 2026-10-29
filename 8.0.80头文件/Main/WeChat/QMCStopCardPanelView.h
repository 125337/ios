@interface QMCStopCardPanelView : UIView <QMCCarouselScrollViewDelegate>
{
    BOOL _isCarouselMode; // +0x8
    BOOL _hasSentFirstSelect; // +0x9
    QMCMapViewBridge * _bridge; // +0x10
    id <QMCCardPanelLayoutDelegate> _layoutDelegate; // +0x18
    id /* block */ _onButtonTap; // +0x20
    id /* block */ _onCardTap; // +0x28
    id /* block */ _onAllJumpTap; // +0x30
    id /* block */ _imageLoader; // +0x38
    NSArray * _slots; // +0x40
    NSMutableArray * _itemViews; // +0x48
    QMCCarouselScrollView * _carouselScrollView; // +0x50
    NSLayoutConstraint * _carouselHeightConstraint; // +0x58
    long long _selectedIndex; // +0x60
    NSString * _lastShownPoiControl; // +0x68
    QMCMultiPOIJumpButton * _allJumpButton; // +0x70
    NSDictionary * _allJumpParams; // +0x78
    QMCSlotData * _allJumpSlot; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setBridge:(id)arg1;
- (void)configureWithSlots:(id)arg1;
- (void)configureWithSlots:(id)arg1 allJumpSlot:(id)arg2;
- (id)currentJumpParams;
- (double)visualTopInset;
- (void)hostDidReceiveAllMCPCommands;
- (void)_buildSingleCardWithSlot:(id)arg1;
- (void)_buildCarouselWithSlots:(id)arg1;
- (id)_createItemViewForSlot:(id)arg1 atIndex:(long long)arg2;
- (void)_selectIndex:(long long)arg1 scrollTo:(BOOL)arg2 sendBridge:(BOOL)arg3;
- (void)_handleMarkerSelectedParams:(id)arg1;
- (void)_sendSelectPOIForIndex:(long long)arg1;
- (void)_showSubElementsForIndex:(long long)arg1;
- (void)carouselScrollView:(id)arg1 didSnapToIndex:(long long)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (double)floatingButtonRightEdgeInView:(id)arg1;
- (double)floatingButtonTopEdgeInView:(id)arg1;
- (void)_ensureAllJumpButtonCreated;
- (void)_hideAllJumpButton;
- (void)_configureAllJumpWithSlot:(id)arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (void)_tearDown;
- (void)traitCollectionDidChange:(id)arg1;
- (id)bridge;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (id /* block */)onButtonTap;
- (void)setOnButtonTap:(id /* block */)arg1;
- (id /* block */)onCardTap;
- (void)setOnCardTap:(id /* block */)arg1;
- (id /* block */)onAllJumpTap;
- (void)setOnAllJumpTap:(id /* block */)arg1;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id)slots;
- (void)setSlots:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (BOOL)isCarouselMode;
- (void)setIsCarouselMode:(BOOL)arg1;
- (id)carouselScrollView;
- (void)setCarouselScrollView:(id)arg1;
- (id)carouselHeightConstraint;
- (void)setCarouselHeightConstraint:(id)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (BOOL)hasSentFirstSelect;
- (void)setHasSentFirstSelect:(BOOL)arg1;
- (id)lastShownPoiControl;
- (void)setLastShownPoiControl:(id)arg1;
- (id)allJumpButton;
- (void)setAllJumpButton:(id)arg1;
- (id)allJumpParams;
- (void)setAllJumpParams:(id)arg1;
- (id)allJumpSlot;
- (void)setAllJumpSlot:(id)arg1;
- (void).cxx_destruct;
@end
