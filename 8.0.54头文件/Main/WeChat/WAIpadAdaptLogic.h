@interface WAIpadAdaptLogic : MMObject
+ (BOOL)checkIfNeedIpadSpecialPresentLogic:(id)arg1 PresentingVC:(id *)arg2;
+ (BOOL)currentOrLastNavigationControllerHasPrevWeAppVC:(id)arg1;
+ (BOOL)IsPresentedByMainViewControllerInIpad:(id)arg1;
+ (id)IsPresentedByAnotherWeApp:(id)arg1;
+ (BOOL)needIpadCustomTransition:(BOOL)arg1;
+ (BOOL)isWebviewControllerPageOrientationNotSameAsCurOri:(id)arg1;
+ (double)GetScaleValueForUnresizableWeAppOnIpadWithWebviewController:(id)arg1;
+ (double)GetMinScaleValueForUnresizableWeAppOnIpadWithWebviewController:(id)arg1;
+ (CGSize)GetWebviewControllerSizeAfterAdapting:(id)arg1;
+ (double)GetKeyboardHeightOnIPadUnresizableAppWithSystemHeight:(double)arg1 webVC:(id)arg2;
@end

