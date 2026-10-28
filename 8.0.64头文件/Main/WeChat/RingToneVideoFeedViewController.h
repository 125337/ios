@interface RingToneVideoFeedViewController : MMUIViewController <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewDelegate, RingToneVideoFeedViewCellDelegate, IVOIPWindowExt, RingRecommendSwitchDelegate, IOplogExt>
{
    BOOL _isViewAppearing; // +0x70
    BOOL _shouldNotShowFriendSettings; // +0x71
    BOOL _isFirstAppear; // +0x72
    BOOL _isJumpToOtherPage; // +0x73
    BOOL _isFromOutside; // +0x74
    BOOL _isPreFetchDone; // +0x75
    BOOL _needRefreshTable; // +0x76
    BOOL _blockRecommend; // +0x77
    BOOL _ringRecommendSwitch; // +0x78
    BOOL _isScrollToTop; // +0x79
    BOOL _hasDragTrigger; // +0x7a
    unsigned int _exposeIndex; // +0x7c
    unsigned long long _setType; // +0x80
    WCFinderFeedFlowView * _feedFlowView; // +0x88
    double _prevOffsetY; // +0x90
    double _dragOffsetY; // +0x98
    RingToneVideoFeedViewModel * _model; // +0xa0
    CContact * _exclusiveContact; // +0xa8
    unsigned long long _state; // +0xb0
    long long _constructIndex; // +0xb8
    long long _vmsIndex; // +0xc0
    WCSearchBar * _searchBar; // +0xc8
    RingToneRecommendReporter_23604 * _reporter; // +0xd0
    long long _reportIndex; // +0xd8
    NSString * _friendName; // +0xe0
    RingToneVideoFeedLayout * _layout; // +0xe8
    RingToneVideoSearchViewController * _searchVC; // +0xf0
    RingToneDetail * _ring; // +0xf8
}
+ (id)constructRingDetailPickerViewController:(id)arg1 friendName:(id)arg2;
+ (id)constructRingTonePickerViewController:(id)arg1 friendName:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initFromOutside:(id)arg1;
- (void)initSearchBar;
- (void)preInitJob;
- (void)configView;
- (void)onLimitedClicked;
- (void)onClickMore:(id)arg1;
- (void)onBack;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)setTypeAndCContact:(unsigned long long)arg1 contact:(id)arg2 notShowFriendSettings:(BOOL)arg3;
- (void)addFrontBlurView;
- (void)initWCFinderScrollView;
- (void)refreshForFlowView;
- (unsigned long long)getTotalNumOfShowVM;
- (void)initData;
- (void)resetData;
- (void)initReporter;
- (void)loadNextPageData;
- (void)fetchNextPage:(BOOL)arg1 pullType:(unsigned long long)arg2;
- (void)tryReloadData:(BOOL)arg1 recordTime:(unsigned long long)arg2 status:(unsigned long long)arg3 needSetVM:(BOOL)arg4 count:(unsigned long long)arg5;
- (void)refreshTableForPrefetchData;
- (void)checkAutoPlayWhenDataReload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)onShowRecommendWarnPageSheet;
- (void)preloadVideoItemsWithCurrentFeedNextIndex:(unsigned long long)arg1;
- (void)reportPlayingRingAtIndex:(unsigned long long)arg1;
- (id)getContentVMByIndex:(unsigned long long)arg1;
- (BOOL)isFetchingStateError;
- (BOOL)accessibilityScroll:(long long)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (BOOL)isInSubScene;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (BOOL)finderFeedFlowViewForbidenOpenFeedAutoAnimation:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)jumpToPlayerPage:(id)arg1 index:(id)arg2 searchID:(long long)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)changeVideoFeedPlay;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidScrollToTop:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (unsigned long long)getRingSheetViewFlag;
- (id)getSettingsName;
- (void)reportRingEvent:(unsigned long long)arg1 ring:(id)arg2 cell:(id)arg3;
- (void)finderPickerListTableViewCellTriggerAntiAddictCheckLogic;
- (BOOL)getIfNoNeedToPlay;
- (void)onJumpToTingInfoPage:(id)arg1;
- (void)onVoipWindowDidAppear;
- (void)antiCheckVerifySuc:(BOOL)arg1 scene:(unsigned long long)arg2;
- (void)antiCheckExit:(BOOL)arg1 scene:(unsigned long long)arg2;
- (void)ringRecommendSwitch:(BOOL)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (unsigned long long)setType;
- (void)setSetType:(unsigned long long)arg1;
- (BOOL)isViewAppearing;
- (void)setIsViewAppearing:(BOOL)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (double)prevOffsetY;
- (void)setPrevOffsetY:(double)arg1;
- (double)dragOffsetY;
- (void)setDragOffsetY:(double)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)exclusiveContact;
- (void)setExclusiveContact:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (long long)constructIndex;
- (void)setConstructIndex:(long long)arg1;
- (long long)vmsIndex;
- (void)setVmsIndex:(long long)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (BOOL)shouldNotShowFriendSettings;
- (void)setShouldNotShowFriendSettings:(BOOL)arg1;
- (BOOL)isFirstAppear;
- (void)setIsFirstAppear:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)friendName;
- (void)setFriendName:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (id)searchVC;
- (void)setSearchVC:(id)arg1;
- (BOOL)isJumpToOtherPage;
- (void)setIsJumpToOtherPage:(BOOL)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (BOOL)isPreFetchDone;
- (void)setIsPreFetchDone:(BOOL)arg1;
- (BOOL)needRefreshTable;
- (void)setNeedRefreshTable:(BOOL)arg1;
- (BOOL)blockRecommend;
- (void)setBlockRecommend:(BOOL)arg1;
- (BOOL)ringRecommendSwitch;
- (void)setRingRecommendSwitch:(BOOL)arg1;
- (BOOL)isScrollToTop;
- (void)setIsScrollToTop:(BOOL)arg1;
- (BOOL)hasDragTrigger;
- (void)setHasDragTrigger:(BOOL)arg1;
- (void).cxx_destruct;
@end
