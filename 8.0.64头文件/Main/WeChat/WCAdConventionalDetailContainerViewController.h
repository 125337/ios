@interface WCAdConventionalDetailContainerViewController : MMUIViewController <MMPageSheetAdapterDelegate, WCAdConventionalHalfScreenCustomBackgroundViewDelegate>
{
    BOOL _isPageSheetViewFullyVisible; // +0x70
    BOOL _isPageSheetViewClosedByUser; // +0x71
    id <WCAdConventionalDetailContainerViewControllerDelegate> _delegate; // +0x78
    WCDataItem * _dataItem; // +0x80
    WCAdCardBtnInfo * _actionInfo; // +0x88
    unsigned long long _scene; // +0x90
    MMPageSheetAdapter * _pageSheetAdapter; // +0x98
    WCAdConventionalHalfScreenCustomBackgroundView * _customBackgroundView; // +0xa0
}
+ (double)fetchDetailPageSheetHeight;
- (id)initWithDataItem:(id)arg1 clickActionInfo:(id)arg2 scene:(unsigned long long)arg3;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)needCloseOnOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onNaviBarCloseButtonClicked;
- (BOOL)isInHalfScreenMode;
- (void)dismissMyselfForce:(BOOL)arg1;
- (void)removeMyselfDirectly;
- (void)removeMyselfGently;
- (void)showHalfScreenFromViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dismissPageSheetWithAnimated:(BOOL)arg1;
- (BOOL)isDetailContainerPageSheetClosedByUser;
- (double)fetchHalfScreenDetailContainerHeight;
- (id)fetchPageSheetAdapter;
- (id)getAdSheetAdapter;
- (id)customBackgroundView;
- (id)onCustomBackgroundViewHitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetPresentAnimateDidEnd:(id)arg1;
- (void)pageSheetDidChangeVisibleHeight:(id)arg1 toHeight:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)actionInfo;
- (void)setActionInfo:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (BOOL)isPageSheetViewFullyVisible;
- (void)setIsPageSheetViewFullyVisible:(BOOL)arg1;
- (BOOL)isPageSheetViewClosedByUser;
- (void)setIsPageSheetViewClosedByUser:(BOOL)arg1;
- (void).cxx_destruct;
@end
