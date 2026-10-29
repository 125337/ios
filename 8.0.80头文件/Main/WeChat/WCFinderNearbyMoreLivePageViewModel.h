@interface WCFinderNearbyMoreLivePageViewModel : NSObject <WCFinderLiveExt, MMLimitedModeExt>
{
    BOOL _isPrefetchDiscard; // +0x8
    BOOL _isExpandFollowFeed; // +0x9
    BOOL _followLoadingHidden; // +0xa
    BOOL _skipFeedsReport; // +0xb
    BOOL _hasInitializeStyleInfo; // +0xc
    int _fromScene; // +0x10
    int _targetScene; // +0x14
    id <WCFinderNearbyMoreLivePageViewModelDelegate> _delegate; // +0x18
    unsigned long long _state; // +0x20
    unsigned long long _refreshTime; // +0x28
    WCFinderLiveTabInfo * _tabInfo; // +0x30
    WCFinderLiveTabInfo * _jumpToTabInfo; // +0x38
    WCFinderFeedFlowView * _feedFlowView; // +0x40
    unsigned long long _selectTabId; // +0x48
    FinderLiveSquareStyleInfo * _globalStyleInfo; // +0x50
    MMFinderLiveFeedExtraInfoFetchLogic * _extraFetchLogic; // +0x58
    NSString * _byPassInfo; // +0x60
    NSString * _jumpBuffer; // +0x68
    unsigned long long _scene; // +0x70
    NSMutableDictionary * _dataModels; // +0x78
    unsigned long long _autoPlayFlag; // +0x80
}
- (id)initWithLiveTabInfo:(id)arg1 fromScene:(int)arg2 targetScene:(int)arg3 byPassInfo:(id)arg4 jumpBuffer:(id)arg5 scene:(unsigned long long)arg6;
- (void)initExtraLogic;
- (void)initTabDataModelWithTabInfo:(id)arg1;
- (void)initSubTabDataModelWithTabInfo:(id)arg1;
- (void)filteAllEndLive;
- (BOOL)hasNoData;
- (unsigned long long)numberOfSection;
- (unsigned long long)numberOfItemInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfItemInSectionDataArray:(unsigned long long)arg1;
- (unsigned long long)numberOfItemInSectionFollowArray:(unsigned long long)arg1;
- (long long)followSectionNumber;
- (id)getFollowBtnPrefixWithVM:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
- (id)getFollowBtnSuffixWithVM:(id)arg1;
- (id)followFoldCardArray:(id)arg1;
- (id)layoutContentVMInSection:(unsigned long long)arg1;
- (id)bottomLayoutContentVMInSection:(unsigned long long)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (BOOL)isFeedFollowFold:(id)arg1;
- (void)fetchMoreData;
- (void)refreshDataFromTop;
- (void)fetchMoreDataWithPullType:(unsigned long long)arg1;
- (BOOL)autoPlayFirstRow;
- (void)fillHighlightTags:(id)arg1 fromBundle:(id)arg2;
- (id)highlightTag:(unsigned long long)arg1 fromBundle:(id)arg2;
- (void)fetchMoreFollowFeed:(id /* block */)arg1 failedBlock:(id /* block */)arg2;
- (id)tranformDataItemArray:(id)arg1;
- (id)convertDataArrayToSectioInfos:(id)arg1;
- (BOOL)hasChangeDataWithOldArray:(id)arg1 dataArray:(id)arg2;
- (void)updateState;
- (BOOL)isPrefetchTypeWith:(unsigned long long)arg1;
- (id)getUnreadDataItems;
- (BOOL)continueFlag;
- (BOOL)isFetchingData;
- (BOOL)isStartFetchingFollowData;
- (id)selectTabInfo;
- (BOOL)isFetchingFollowData;
- (void)setIsFetchingFollowData:(BOOL)arg1;
- (BOOL)isFetchingFollowDataFinish;
- (BOOL)hasEndLiveNeedRefresh;
- (void)setHasEndLiveNeedRefresh:(BOOL)arg1;
- (void)setTabInfo:(id)arg1;
- (id)requestTabInfoWithDataModel:(id)arg1;
- (long long)getDisplayIndexWithTid:(id)arg1;
- (unsigned long long)autoPlayEduViewShowCount;
- (void)setAutoPlayEduViewShowCount:(unsigned long long)arg1;
- (BOOL)isFromSceneCanProcessRedDot;
- (void)startDelayFetchRecommendRelatedList:(id)arg1;
- (void)cancelDelayFetchRecommendRelatedList;
- (void)checkReadyAnimateRelatedListRecommendData;
- (BOOL)isFetchRelatedListCgiFinish;
- (void)_fetchRecommendRelatedListWithDataItem;
- (void)selectSubTab:(id)arg1 isToggle:(BOOL)arg2 willSwitchBlock:(id /* block */)arg3;
- (void)contentDislikeFeedback:(id)arg1;
- (void)removeDataItem:(id)arg1;
- (id)indexPathInCurrentSubTabWithTid:(id)arg1;
- (void)removeSectionData:(unsigned long long)arg1;
- (void)removeIndexPathData:(id)arg1;
- (void)resetExposeSession;
- (void)onLimitedModeChanged;
- (id)refreshHighlightTagExtraInfoItems;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)tabInfo;
- (id)jumpToTabInfo;
- (void)setJumpToTabInfo:(id)arg1;
- (BOOL)isPrefetchDiscard;
- (void)setIsPrefetchDiscard:(BOOL)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (BOOL)isExpandFollowFeed;
- (void)setIsExpandFollowFeed:(BOOL)arg1;
- (BOOL)followLoadingHidden;
- (void)setFollowLoadingHidden:(BOOL)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (unsigned long long)selectTabId;
- (void)setSelectTabId:(unsigned long long)arg1;
- (BOOL)skipFeedsReport;
- (void)setSkipFeedsReport:(BOOL)arg1;
- (id)globalStyleInfo;
- (void)setGlobalStyleInfo:(id)arg1;
- (id)extraFetchLogic;
- (void)setExtraFetchLogic:(id)arg1;
- (int)targetScene;
- (void)setTargetScene:(int)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)jumpBuffer;
- (void)setJumpBuffer:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)dataModels;
- (void)setDataModels:(id)arg1;
- (BOOL)hasInitializeStyleInfo;
- (void)setHasInitializeStyleInfo:(BOOL)arg1;
- (unsigned long long)autoPlayFlag;
- (void)setAutoPlayFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
