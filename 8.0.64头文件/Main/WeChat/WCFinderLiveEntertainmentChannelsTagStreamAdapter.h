@interface WCFinderLiveEntertainmentChannelsTagStreamAdapter : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderLiveEntertainmentChannelsTagStreamVMDelegate, MMLiveTaskMgrExt, WCFinderMoreLiveTagListHeaderViewDelegate, WCFinderLiveHomePageEntertainmentAudioRoomCellDelegate>
{
    id <WCFinderLiveEntertainmentChannelsTagStreamAdapterDelegate> _delegate; // +0x8
    WCFinderFeedFlowView * _feedFlowView; // +0x10
    NSString * _tag; // +0x18
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> * _currentViewController; // +0x20
    WCFinderLiveEntertainmentChannelsTagStreamVM * _vm; // +0x28
    WCFinderLiveFeedGenericAutoPlayModel * _autoPlayCtx; // +0x30
}
- (id)initWithTag:(id)arg1 view:(id)arg2 InViewController:(id)arg3 delegate:(id)arg4 vm:(id)arg5;
- (void)disappear;
- (void)appear;
- (void)finishFirstPageRequest:(id)arg1;
- (void)deleteTid:(id)arg1;
- (void)scrollToTop;
- (id)visibleElementModels;
- (BOOL)checkAutoPlay;
- (void)stopAutoPlay;
- (void)startPlayWithIndexPath:(id)arg1;
- (void)stopPlayWithIndexPath:(id)arg1;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (void)goToSettingLocationAuthorization:(id)arg1;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowViewDidEndScrolling:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderFeedFlowViewDidScrollToTop:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (double)finderFeedFlowViewFlowSectionBottomFooterInset:(id)arg1;
- (void)onLiveEntertainmentChannelsTagStreamReloadAllData:(id)arg1;
- (void)onLiveEntertainmentChannelsTagStreamAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)onLiveEntertainmentChannelsTagStreamNoMoreData;
- (void)onLiveEntertainmentChannelsTagStreamFetchFailWithErrorCode:(int)arg1;
- (void)onClickCoverContact:(id)arg1 feedVM:(id)arg2;
- (void)onEntertainmentAudioRoomCellTeamUpListClickUnoccupiedSeat:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)autoPlayCtx;
- (void)setAutoPlayCtx:(id)arg1;
- (void).cxx_destruct;
@end
