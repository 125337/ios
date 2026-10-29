@interface WCFinderLiveStarterGamePageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderLiveStarterGamePageViewModelDelegate, WCFinderFeedFlowViewDelegate>
{
    id <WCFinderLiveStarterGamePageViewManagerDelegate> _delegate; // +0x8
    WCFinderLiveStarterGamePageViewModel * _viewModel; // +0x10
    WCFinderFeedFlowView * _feedFlowView; // +0x18
    MMFinderLiveGameUserInfo * _selectGameUserInfo; // +0x20
}
- (id)initWithTabInfo:(id)arg1 feedFlowView:(id)arg2 selectGameUserInfo:(id)arg3 delegate:(id)arg4;
- (void)updateSelectLiveGameUserInfo:(id)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)onLiveGameTabLiveStreamReloadAllData;
- (void)onLiveGameTabLiveStreamAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)onLiveHomeGameTabLiveStreamNoMoreData;
- (void)onLiveHomeGameTabLiveStreamFetchFailWithErrorCode:(int)arg1;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (long long)getNumberOfItemsInSection;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (id)selectGameUserInfo;
- (void)setSelectGameUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

