@interface LVHomeViewController : MMUIViewController
{
    BOOL _tabActive; // +0x70
    BOOL _pageVisible; // +0x71
    BOOL _entered; // +0x72
    BOOL _pendingEntry; // +0x73
    BOOL _finished; // +0x74
    WSFinderLongVideoContainerView * _containerView; // +0x78
    WCFinderContextIdToken * _contentContext; // +0x80
    UILongPressGestureRecognizer * _tabLongPressGestureRecognizer; // +0x88
}
- (void)viewDidLoad;
- (id)makeContainerViewWithConfig:(id)arg1;
- (id)contentViewController;
- (void)prepareContent;
- (void)pageWillAppear;
- (void)pageDidAppear;
- (void)pageDidDisappear;
- (void)setTabActive:(BOOL)arg1;
- (void)finish;
- (void)performWithContentContext:(id /* block */)arg1;
- (void)installDebugGestureOnTabView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)contentContext;
- (void)setContentContext:(id)arg1;
- (BOOL)tabActive;
- (BOOL)pageVisible;
- (void)setPageVisible:(BOOL)arg1;
- (BOOL)entered;
- (void)setEntered:(BOOL)arg1;
- (BOOL)pendingEntry;
- (void)setPendingEntry:(BOOL)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (id)tabLongPressGestureRecognizer;
- (void)setTabLongPressGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
