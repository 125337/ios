@interface RingTonePickerViewController : MMUIViewController <MMRefreshTableFooterDelegate, MMTListAdapterDataSource, UIScrollViewDelegate, RingTonePickerSectionControllerDelegate, RingToneSearchProxyDelegate, IVOIPWindowExt, ServiceAuthExt, RingRecommendSwitchDelegate, IOplogExt>
{
    BOOL _shouldNotShowFriendSettings; // +0x70
    BOOL _isFetchingData; // +0x71
    BOOL _isFromOutside; // +0x72
    BOOL _isShowingSelected; // +0x73
    BOOL _isJumpToOtherPage; // +0x74
    BOOL _isJumpToSearchPage; // +0x75
    BOOL _ringRecommendSwitch; // +0x76
    unsigned int _exposeIndex; // +0x78
    unsigned long long _setType; // +0x80
    MMTableView * _tableView; // +0x88
    WCSearcher * _searcher; // +0x90
    RingToneSearchProxy * _searchProxy; // +0x98
    RingTonePickerViewModel * _viewModel; // +0xa0
    WCTimeLineFooterView * _footerView; // +0xa8
    CContact * _exclusiveContact; // +0xb0
    RingToneRecommendReporter_23604 * _reporter; // +0xb8
    MMTListAdapter * _listAdapter; // +0xc0
    long long _reportIndex; // +0xc8
    RingToneDetail * _ring; // +0xd0
    NSString * _friendName; // +0xd8
    MMUIActivityIndicatorView * _indicator; // +0xe0
    RingToneMixPlayer * _player; // +0xe8
}
+ (id)constructRingDetailPickerViewController:(id)arg1 friendName:(id)arg2;
+ (id)constructRingTonePickerViewController:(id)arg1 friendName:(id)arg2;
- (void)viewDidLoad;
- (void)stopAllPlay;
- (id)initFromOutside:(id)arg1;
- (id)init;
- (void)initView;
- (void)onClickMore:(id)arg1;
- (void)preInitJob;
- (void)setTypeAndCContact:(unsigned long long)arg1 contact:(id)arg2;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)configView;
- (void)onBack;
- (void)initData;
- (void)initReporter;
- (void)initFooterView;
- (void)initTableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setPopGestureForVC:(id)arg1;
- (void)removeCellSelectedStatus;
- (void)jumpToAuthorPage:(id)arg1;
- (void)refreshForTableView;
- (void)initSearchBar;
- (void)fetchNextPage:(BOOL)arg1 pullType:(unsigned long long)arg2;
- (void)highlightFirstCell;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onShowRecommendWarnPageSheet;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)didSelectRowAtIndex:(long long)arg1;
- (void)willDisplayCellAtIndex:(long long)arg1;
- (void)onExclusiveRingPlay:(id)arg1 isToPlay:(BOOL)arg2;
- (id)getFriendName;
- (void)stopAllRingPlay;
- (void)jumpToPlayerPage:(id)arg1 index:(long long)arg2;
- (void)jumpToPlayerPage:(id)arg1 index:(long long)arg2 searchID:(long long)arg3;
- (void)setSearchState:(BOOL)arg1;
- (void)onVoipWindowDidAppear;
- (void)ringRecommendSwitch:(BOOL)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (unsigned long long)setType;
- (void)setSetType:(unsigned long long)arg1;
- (BOOL)shouldNotShowFriendSettings;
- (void)setShouldNotShowFriendSettings:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (id)searchProxy;
- (void)setSearchProxy:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)exclusiveContact;
- (void)setExclusiveContact:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)listAdapter;
- (void)setListAdapter:(id)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (id)friendName;
- (void)setFriendName:(id)arg1;
- (id)indicator;
- (void)setIndicator:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (BOOL)isJumpToOtherPage;
- (void)setIsJumpToOtherPage:(BOOL)arg1;
- (BOOL)isJumpToSearchPage;
- (void)setIsJumpToSearchPage:(BOOL)arg1;
- (BOOL)ringRecommendSwitch;
- (void)setRingRecommendSwitch:(BOOL)arg1;
- (void).cxx_destruct;
@end
