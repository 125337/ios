@interface WCTabBarView : UIView
{
    BOOL _translucent; // +0x8
    BOOL _compatibilityCustomizing; // +0x9
    unsigned long long _selectedIndex; // +0x10
    id /* block */ _itemViewProvider; // +0x18
    id /* block */ _itemSelectionHandler; // +0x20
    id <WCTabBarViewVisibilityDelegate> _visibilityDelegate; // +0x28
    NSArray * _itemViews; // +0x30
    UIView * _backgroundContentView; // +0x38
    UIView * _separatorView; // +0x40
    NSArray * _storedTabItems; // +0x48
    NSArray * _compatibilityItems; // +0x50
    id <UITabBarDelegate> _compatibilityDelegate; // +0x58
}
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
- (long long)tabBarItemCount;
- (id)tabBarItemViewAtIndex:(long long)arg1;
- (void)selectIndex:(long long)arg1;
- (BOOL)targetIndexIsSelected:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupSubviews;
- (void)setTabItems:(id)arg1;
- (id)tabItems;
- (void)applyTabItems:(id)arg1 rebuildCompatibilityItems:(BOOL)arg2;
- (void)setItemViewProvider:(id /* block */)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)reloadItemViews;
- (id)itemViewAtIndex:(unsigned long long)arg1;
- (void)onItemViewTouchUpInside:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (id)selectedItem;
- (void)setSelectedItem:(id)arg1;
- (void)beginCustomizingItems:(id)arg1;
- (BOOL)endCustomizingAnimated:(BOOL)arg1;
- (BOOL)isCustomizing;
- (void)updateSelectedItemViews;
- (void)didMoveToWindow;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (id)snapshotViewAfterScreenUpdates:(BOOL)arg1;
- (BOOL)_isTranslucent;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)selectedIndex;
- (id /* block */)itemViewProvider;
- (id /* block */)itemSelectionHandler;
- (void)setItemSelectionHandler:(id /* block */)arg1;
- (id)visibilityDelegate;
- (void)setVisibilityDelegate:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)backgroundContentView;
- (void)setBackgroundContentView:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (BOOL)isTranslucent;
- (id)storedTabItems;
- (void)setStoredTabItems:(id)arg1;
- (id)compatibilityItems;
- (void)setCompatibilityItems:(id)arg1;
- (id)compatibilityDelegate;
- (void)setCompatibilityDelegate:(id)arg1;
- (BOOL)isCompatibilityCustomizing;
- (void)setCompatibilityCustomizing:(BOOL)arg1;
- (void).cxx_destruct;
@end
