@interface WCFinderProfileOverviewPageModel : WCFinderStreamProfilePageModel <WCFinderDataItemExt, WCFinderProfileOverviewSectionCountCangeExt, WCFinderOverviewFeedChangedExt, WCFinderStickTopChangeExt>
{
    long long * layoutIdx; // +0x8
    BOOL _isPullingMode; // +0x10
    BOOL _checkAllCGIFinish; // +0x11
    BOOL _waittingFirstPageData; // +0x12
    BOOL _hasLoadCache; // +0x13
    AnyPromise * _pageDataLoadedValue; // +0x18
    id <WCFinderProfileOverviewPageModelDelegate> _delegate; // +0x20
    NSArray * _pendingFetchSections; // +0x28
    NSMutableArray * _supportSectionCtrls; // +0x30
    id /* block */ _pageDataLoadedValueSetter; // +0x38
    NSMutableDictionary * _defaultOrders; // +0x40
    NSMutableDictionary * _secCtrlClsMap; // +0x48
    NSMutableDictionary * _secCtrlMap; // +0x50
    NSArray * _sections; // +0x58
    NSMutableDictionary * _layoutMap; // +0x60
    unsigned long long _cacheItemSaveKey; // +0x68
    NSMutableDictionary * _pbSectionIdMap; // +0x70
    NSMutableDictionary * _secitonDefMap; // +0x78
    NSMutableDictionary * _cacheSections; // +0x80
    NSMutableDictionary * _sectionMap; // +0x88
    NSMutableSet * _pendingFetch; // +0x90
    WCFinderStreamLoadingState * _homeCGILoadingState; // +0x98
    WCFinderCGIProfile * _firstCGIProfile; // +0xa0
    long long _cgiState; // +0xa8
    WCFinderFeedArray * _displayFeedArray; // +0xb0
    WCFinderFeedArray * _latestFeedArray; // +0xb8
    id <WCFinderProfilePullableFeedViewModel> _feedArraySource; // +0xc0
}
+ (BOOL)allowLimitMode;
+ (BOOL)shouldDisplay:(id)arg1;
+ (BOOL)pageIsRequired;
+ (BOOL)recordTabDisplayFlagToExtInfo;
+ (int)tabId;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)init;
- (BOOL)pageDataLoaded;
- (id)displayName;
- (id)viewPageClassName;
- (void)loadSectionDefines;
- (void)resetLayoutDefaultSortIndex;
- (void)dealloc;
- (id)displaySectionCtrls;
- (id)sectionCtrlForSecType:(long long)arg1;
- (id)sectionWithType:(long long)arg1;
- (id)loadingState;
- (BOOL)isMoreFeedSectionLoadingFristPage;
- (void)beforeLoadCache;
- (void)doLoadCache;
- (void)doLoadCache:(id /* block */)arg1;
- (void)update:(long long)arg1 necessary:(BOOL)arg2 block:(id /* block */)arg3;
- (id)ensureSection:(long long)arg1;
- (BOOL)shouldDisplayTab;
- (void)requestPageData;
- (void)refetchPageData;
- (void)startFetchCGI:(id /* block */)arg1;
- (void)_fetchCGITryEnterIdle;
- (id)handleCGISectionList:(id)arg1;
- (void)notifyRequestDataFinish:(BOOL)arg1;
- (void)storeCache;
- (void)resortSectionsFromMap;
- (long long)sortSections:(id)arg1 right:(id)arg2;
- (void)setHeadData:(id)arg1;
- (void)_updateProfileShareFeedData;
- (void)observeFeedSection:(id)arg1;
- (void)_onLatestFeedArrayChanged;
- (void)onLatestFeedArrayDataChanged;
- (id)mapFeedNotDisplayAtFeedSection:(id)arg1;
- (id)createClickFeedVM:(id)arg1;
- (void)changeFeedArray:(id)arg1 pullingMode:(BOOL)arg2;
- (void)changeFeedArrayFeedModelSource:(id)arg1 pullingMode:(BOOL)arg2;
- (void)ensurePullableJustWatchData:(id)arg1 watchAction:(id)arg2;
- (BOOL)triggerFetchMore:(id)arg1;
- (void)onMoreFeedArrayChanged:(id)arg1;
- (void)onProfileOverviewSection:(long long)arg1 changedCount:(long long)arg2;
- (void)onFinderStickTopChanged:(id)arg1;
- (void)profileFeedPageNotifyFeedChanged:(id)arg1;
- (id)reportParamsBlock;
- (BOOL)isPullingMode;
- (void)setIsPullingMode:(BOOL)arg1;
- (id)pageDataLoadedValue;
- (void)setPageDataLoadedValue:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pendingFetchSections;
- (void)setPendingFetchSections:(id)arg1;
- (id)supportSectionCtrls;
- (void)setSupportSectionCtrls:(id)arg1;
- (id /* block */)pageDataLoadedValueSetter;
- (void)setPageDataLoadedValueSetter:(id /* block */)arg1;
- (id)defaultOrders;
- (void)setDefaultOrders:(id)arg1;
- (id)secCtrlClsMap;
- (void)setSecCtrlClsMap:(id)arg1;
- (id)secCtrlMap;
- (void)setSecCtrlMap:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)layoutMap;
- (void)setLayoutMap:(id)arg1;
- (unsigned long long)cacheItemSaveKey;
- (void)setCacheItemSaveKey:(unsigned long long)arg1;
- (BOOL)checkAllCGIFinish;
- (void)setCheckAllCGIFinish:(BOOL)arg1;
- (id)pbSectionIdMap;
- (void)setPbSectionIdMap:(id)arg1;
- (id)secitonDefMap;
- (void)setSecitonDefMap:(id)arg1;
- (id)cacheSections;
- (void)setCacheSections:(id)arg1;
- (id)sectionMap;
- (void)setSectionMap:(id)arg1;
- (id)pendingFetch;
- (void)setPendingFetch:(id)arg1;
- (id)homeCGILoadingState;
- (void)setHomeCGILoadingState:(id)arg1;
- (id)firstCGIProfile;
- (void)setFirstCGIProfile:(id)arg1;
- (BOOL)waittingFirstPageData;
- (void)setWaittingFirstPageData:(BOOL)arg1;
- (long long)cgiState;
- (void)setCgiState:(long long)arg1;
- (id)displayFeedArray;
- (void)setDisplayFeedArray:(id)arg1;
- (id)latestFeedArray;
- (void)setLatestFeedArray:(id)arg1;
- (id)feedArraySource;
- (void)setFeedArraySource:(id)arg1;
- (BOOL)hasLoadCache;
- (void)setHasLoadCache:(BOOL)arg1;
- (void).cxx_destruct;
@end

