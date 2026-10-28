@interface WCFinderLiveEntertainmentChannelsViewController : MMUIViewController <WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderFlowTopTipsViewDelegate, WCFinderLiveEntertainmentChannelsViewModelDelegate, WCFinderLiveEntertainmentChannelsTagStreamAdapterDelegate, MMLiveMorphDismissTarget, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _isBottomButtonFold; // +0x70
    id /* block */ _onPageReturnBlock; // +0x78
    WCFinderLiveEntertainmentChannelsViewModel * _vm; // +0x80
    WCFinderTabPageView * _tabPageView; // +0x88
    NSMutableDictionary * _pageAdapterDict; // +0x90
    WCFinderEmptyTipsView * _emptyTipsView; // +0x98
    MMFinderLiveFeedExtraInfoFetchLogic * _extraFetchLogic; // +0xa0
    UIView * _bottomButtonContainer; // +0xa8
    MMUIButton * _randomLiveButton; // +0xb0
    MMUIButton * _createLiveButton; // +0xb8
    unsigned long long _playTogetherLiveType; // +0xc0
    WCFinderCreateCoordinator * _createCoordinator; // +0xc8
    WCFinderLivePageStayReporter * _stayReporter; // +0xd0
}
- (id)initWithThemeId:(id)arg1 appearance:(id)arg2 playTogetherLiveType:(unsigned long long)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (id)bottomButtonContainer;
- (id)randomLiveButton;
- (id)createLiveButton;
- (void)layoutBottomButton;
- (void)animateBottomButton:(BOOL)arg1;
- (void)goToRandomLive;
- (void)goToCreateLive;
- (void)showLiveHalfVC;
- (void)startLive;
- (id)tabPageView;
- (id)emptyTipsView;
- (id)pageAdapterDict;
- (void)selectTag:(id)arg1;
- (void)scrollToTop;
- (void)onBackButtonClicked:(id)arg1;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willAppear;
- (void)willDisappear;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)initExtraFetch;
- (id)visibleElementModels;
- (id)entertainmentCardsShouldRefresh;
- (void)reportStartLiveExpose;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (id)tabViewContainerInFinderTabPageView:(id)arg1;
- (double)heightForTabViewContainerInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (double)finderTabPageView:(id)arg1 heightForTabViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (id)emptyTipsConfigInFinderTabPagView:(id)arg1;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageViewWillSwitchPage:(id)arg1;
- (double)heightForHeaderViewChangeAlphaInFinderTabPageView:(id)arg1;
- (id)collectionView;
- (id)indexPathsForVisibleItems;
- (id)curPageAdapter;
- (id)curFeedFlowView;
- (id)currentSelectTag;
- (void)onEntertainmentChannelsViewModelLoadDataFailed:(long long)arg1;
- (void)onEntertainmentChannelsViewModelLoadDataSuccess;
- (void)onLiveEntertainmentChannelsTagStream:(id)arg1 clickContact:(id)arg2 feedVM:(id)arg3;
- (void)onLiveEntertainmentChannelsTagStream:(id)arg1 selectElementVM:(id)arg2 playableCell:(id)arg3 indexPath:(id)arg4;
- (void)onLiveEntertainmentChannelsTagStreamDidEndScrolling:(id)arg1;
- (void)onLiveEntertainmentChannelsTagStreamDidScroll:(id)arg1;
- (void)checkBottomButtonAnimation;
- (void)openLiveRoomWithElementModels:(id)arg1 selectIndex:(unsigned long long)arg2;
- (void)onLiveEntertainmentChannelsTagStreamAudioRoomClickUnoccupiedSeat:(id)arg1;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (id)liveMorphDismissTargetCustomTransitionSnapshotViewForCustomKey:(id)arg1;
- (id)visibleCellForDismissCustomKey:(id)arg1;
- (id /* block */)onPageReturnBlock;
- (void)setOnPageReturnBlock:(id /* block */)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (void)setTabPageView:(id)arg1;
- (void)setPageAdapterDict:(id)arg1;
- (void)setEmptyTipsView:(id)arg1;
- (id)extraFetchLogic;
- (void)setExtraFetchLogic:(id)arg1;
- (void)setBottomButtonContainer:(id)arg1;
- (void)setRandomLiveButton:(id)arg1;
- (void)setCreateLiveButton:(id)arg1;
- (BOOL)isBottomButtonFold;
- (void)setIsBottomButtonFold:(BOOL)arg1;
- (unsigned long long)playTogetherLiveType;
- (void)setPlayTogetherLiveType:(unsigned long long)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)stayReporter;
- (void)setStayReporter:(id)arg1;
- (void).cxx_destruct;
@end
