@interface WCFinderFeedListPagerVC : MMUIViewController <WCFinderCyclePagerViewDelegate, WCFinderCyclePagerViewDataSource, WCFinderFeedListPagerCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderHalfScreenProtocol, WCFinderFeedListTransitionHorizontalGestureBehavior>
{
    BOOL _hadLightShock; // +0x70
    int _scene; // +0x74
    id <WCFinderFeedListPagerVCDelegate> _delegate; // +0x78
    WCFinderCyclePagerView * _cyclePagerView; // +0x80
    WCFinderSwipPageControl * _pageControl; // +0x88
    WCFinderCyclePagerViewLayoutParams * _layoutParams; // +0x90
    WCFinderCyclePagerFooterView * _footerView; // +0x98
    WCFinderColumnCellViewModel * _vm; // +0xa0
    WCFinderFeedListView * _curFeedListView; // +0xa8
}
- (id)getListenHalfAnimView;
- (unsigned long long)listenHalfScreenOption;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)updateLandSpace:(CGSize)arg1;
- (BOOL)supportRotate;
- (id)initWithScene:(int)arg1 vm:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)updateFooterType;
- (id)getCurrentMediaViewCell;
- (void)onBack;
- (void)updatePageControl;
- (long long)numberOfItemsInPagerView:(id)arg1;
- (id)identifiersOfItemsInPagerView:(id)arg1;
- (id)pagerView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (id)layoutForPagerView:(id)arg1;
- (id)getCurFooterView;
- (unsigned long long)getCurPagerFooterViewType;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)curFeedHalfScreenIsShow:(BOOL)arg1;
- (void)pagerView:(id)arg1 didScrollFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)pagerView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)pagerView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)pagerView:(id)arg1 updateReusableView:(id)arg2;
- (void)pagerViewDidScroll:(id)arg1;
- (BOOL)beyondBufferArea:(id)arg1 bufferOffset:(double)arg2;
- (void)pagerViewDidEndDecelerating:(id)arg1;
- (void)onColumnDataChange:(id)arg1;
- (id)cyclePagerView;
- (id)pageControl;
- (id)footerView;
- (double)trailingOffset;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCyclePagerView:(id)arg1;
- (void)setPageControl:(id)arg1;
- (id)layoutParams;
- (void)setLayoutParams:(id)arg1;
- (void)setFooterView:(id)arg1;
- (BOOL)hadLightShock;
- (void)setHadLightShock:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)curFeedListView;
- (void)setCurFeedListView:(id)arg1;
- (void).cxx_destruct;
@end
