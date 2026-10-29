@interface MMTabBar : UITabBar
{
    id <MMTabBarDelegate> _customDelegate; // +0x8
    UIView * _backgroundView; // +0x10
    NSMutableArray * _tabBarItemViews; // +0x18
    double _extraKeyboardHeight; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)didMoveToWindow;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (void)onKeyboradWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)updateFrameWithKeyboard:(id)arg1;
- (void)selectIndex:(long long)arg1;
- (long long)tabBarItemCount;
- (BOOL)targetIndexIsSelected:(long long)arg1;
- (id)tabBarItemViewAtIndex:(long long)arg1;
- (void)setTabBarBackgroundColor:(id)arg1 useBlur:(BOOL)arg2;
- (long long)semanticContentAttribute;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)calcHeight;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)addCustomBackground;
- (void)layoutSubviews;
- (id)findBlurEffectView:(id)arg1;
- (id)findShadowView:(id)arg1;
- (void)createTabBarItemViews;
- (void)relayoutTabBarItems;
- (void)configureClearBackground;
- (id)snapshotViewAfterScreenUpdates:(BOOL)arg1;
- (id)customDelegate;
- (void)setCustomDelegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)tabBarItemViews;
- (void)setTabBarItemViews:(id)arg1;
- (double)extraKeyboardHeight;
- (void)setExtraKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end
