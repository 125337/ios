@interface WCFinderLiveHomePageAggregationTabLiveStreamVM : NSObject <WCFinderLiveExt>
{
    BOOL _skipFeedsReport; // +0x8
    BOOL _showLocationAuthorized; // +0x9
    id <WCFinderLiveHomePageAggregationTabLiveStreamVMDelegate> _delegate; // +0x10
    unsigned long long _state; // +0x18
    unsigned long long _refreshTime; // +0x20
    WCFinderLiveTabInfo * _tabInfo; // +0x28
    WCFinderLiveTabInfo * _jumpToTabInfo; // +0x30
    WCFinderFeedFlowView * _feedFlowView; // +0x38
    unsigned long long _selectTabId; // +0x40
    WCFinderLiveHomePageTabLiveStreamSectionViewModel * _sectionVM; // +0x48
    NSMutableDictionary * _dataModels; // +0x50
}
- (id)initWithSectionVM:(id)arg1 tabInfo:(id)arg2;
- (void)initDataModelIfNeeded;
- (void)makeBottomSkeletonData;
- (id)removeSkeletonDatas;
- (id)globalStyleInfo;
- (void)cancelAllCgi;
- (BOOL)hasNoData;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfSkeletonItems;
- (void)setTabInfo:(id)arg1;
- (id)currentDataModel;
- (id)selectTabInfo;
- (void)initTabDataModelWithTabInfo:(id)arg1;
- (void)initSubTabDataModelWithTabInfo:(id)arg1;
- (void)fetchMoreData;
- (void)refreshDataFromTop;
- (void)fetchMoreDataWithPullType:(unsigned long long)arg1;
- (id)createFeedVMWithModel:(id)arg1 isSkeleton:(BOOL)arg2;
- (BOOL)continueFlag;
- (BOOL)hasFetchData;
- (BOOL)isFetchingData;
- (id)requestTabInfoWithDataModel:(id)arg1;
- (void)updateState;
- (id)feedVMAtIndexPath:(id)arg1;
- (id)currentContainerLastBuffer;
- (id)currentContainerReadIds;
- (void)selectSubTab:(id)arg1 isToggle:(BOOL)arg2 willSwitchBlock:(id /* block */)arg3;
- (unsigned long long)indexOfTid:(id)arg1;
- (void)removeDataWithTid:(id)arg1;
- (void)resetExposeSession;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)tabInfo;
- (id)jumpToTabInfo;
- (void)setJumpToTabInfo:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (unsigned long long)selectTabId;
- (void)setSelectTabId:(unsigned long long)arg1;
- (BOOL)skipFeedsReport;
- (void)setSkipFeedsReport:(BOOL)arg1;
- (id)sectionVM;
- (void)setSectionVM:(id)arg1;
- (BOOL)showLocationAuthorized;
- (void)setShowLocationAuthorized:(BOOL)arg1;
- (id)dataModels;
- (void)setDataModels:(id)arg1;
- (void).cxx_destruct;
@end
