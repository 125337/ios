@interface UIViewController (SafeAreaWrap)
+ (void)load;
- (BOOL)shouldWrapViewWithSafeArea;
- (BOOL)shouldSyncBackgroundColorToExtendedContentView;
- (id)realView;
- (id)wc_safeAreaWrapSubviewWithTag:(long long)arg1 inRoot:(id)arg2;
- (BOOL)wc_shouldWrapSafeAreaRoot:(id)arg1;
- (id)contentViewWithSafeArea;
- (id)extendedContentView;
- (void)wc_updateSafeAreaWrap;
- (id)wc_safeAreaWrapView;
- (void)wc_safeAreaWrapViewWillLayoutSubviews;
- (void)wc_safeAreaWrapInsetsDidChange;
- (BOOL)wc_isOutgoingTransition;
@end
