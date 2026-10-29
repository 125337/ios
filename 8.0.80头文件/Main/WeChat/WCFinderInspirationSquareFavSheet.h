@interface WCFinderInspirationSquareFavSheet : WCFinderCustomPanelSheet
+ (id)tipsKey;
+ (BOOL)canShowFavTips;
+ (void)increaseTipsCount;
- (id)init;
- (id)loadContentView;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
@end
