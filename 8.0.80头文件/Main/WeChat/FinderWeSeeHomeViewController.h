@interface FinderWeSeeHomeViewController : WCFinderTabPageViewController <UIScrollViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListTransitionHelperBehavior, WCSessionFlowCustomPageNameProvider>
{
     configuration; // +0x8
     reporter; // +0x10
     tabReporters; // +0x18
     activeReporter; // +0x20
     pageModels; // +0x28
     tabHeader; // +0x30
     initialIndex; // +0x38
     cacheService; // +0x40
     cacheState; // +0x48
     selectedIndex; // +0x50
     tabSelectionAnimator; // +0x58
     navigationUsesLightContent; // +0x60
     isExiting; // +0x61
     hasFinishedPages; // +0x62
}
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 path:(id)arg2;
- (id)initWithConfiguration:(id)arg1 path:(id)arg2 preferLongVideo:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setSelectVCIndex:(unsigned long long)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (int)feedViewControllerScene;
- (id)customPageName;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (BOOL)shouldShowMinimizeQuickSwapeEntranceForVC:(id)arg1 userInfo:(id)arg2;
- (id)transitionHelperFetchCurrentPlayTid;
- (id)transitionHelperFetchCurrentPlayContentVM;
- (BOOL)shouldStartNoneEdgeSwipeGestureWithPoint:(CGPoint)arg1;
- (BOOL)shouldStartEdgeSwipeGestureWithPoint:(CGPoint)arg1;
- (BOOL)useTransparentNavibar;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)switchTabPageViewControllerFrom:(id)arg1 to:(id)arg2 isTriggerByUser:(BOOL)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissedDuplicate;
- (void)close;
- (void)minimize;
- (void)openPersonalCenter;
- (void)applicationWillEnterForeground;
- (void)openSearch;
- (id)initWithTabPageModelArray:(id)arg1;
- (id)initWithTabPageModelArray:(id)arg1 tabHeaderView:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end
