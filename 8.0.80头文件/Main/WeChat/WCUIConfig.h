@interface WCUIConfig : NSObject
+ (BOOL)supportHorizontalSafeArea;
+ (BOOL)isHorizontalSafeAreaWrappingEnabled;
+ (BOOL)shouldIgnoreHorizontalSafeAreaInsets;
+ (BOOL)usesFixedStatusBarLayout;
+ (BOOL)shouldSuppressScreenModeChangeVisibleLog;
+ (BOOL)shouldHideStatusBarForPreference:(BOOL)arg1;
+ (BOOL)supportPhoneLandscapeUI;
+ (BOOL)supportForcedOrientation;
+ (BOOL)usesPhoneOrientationPolicyForView:(id)arg1;
+ (BOOL)usesPhoneOrientationPolicyForViewController:(id)arg1;
+ (BOOL)isLiquidGlassRedesignEnabled;
+ (BOOL)isSVGRedesignEnabled;
+ (BOOL)isCustomTabBarEnabled;
+ (BOOL)isCustomNavigationBarEnabled;
@end
