@interface WCFinderMusicTopicPageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderMusicTopicPageViewModelDelegate, WCFinderTopicListDetailViewControllerDelegate, WCFinderPostMgrDelegate>
{
    id <WCFinderMusicTopicPageViewManagerDelegate> _delegate; // +0x8
    WCFinderMusicTopicPageViewModel * _viewModel; // +0x10
    WCFinderFeedFlowView * _feedFlowView; // +0x18
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> * _currentViewController; // +0x20
    WCFinderTopicRouteParams * _params; // +0x28
    WCFinderPostMgr * _postMgr; // +0x30
}
- (id)initWithTopicParams:(id)arg1 eventTabInfo:(id)arg2 view:(id)arg3 InViewController:(id)arg4 byPassInfo:(id)arg5 musicInfo:(id)arg6;
- (id)postMgr;
- (void)showPostEntryByMusicInfo:(id)arg1 musicIdPrefix:(id)arg2 enterChildScene:(unsigned long long)arg3;
- (void)openPostCameraByEnterChildScene:(unsigned long long)arg1;
- (void)openPostAlbum;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (unsigned long long)finderFeedFlowViewPrefetchRemainCount:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowViewNeedCornerRadius;
- (BOOL)isOriginalContactFromUsername:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 leftTopBadgeContent:(id)arg2;
- (unsigned long long)genFeedTagTypeFromContentVM:(id)arg1;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowViewUseDefaultCellConfig;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)enterCurFeedFlowView:(BOOL)arg1;
- (void)routerListDetailViewController:(id)arg1 indexPath:(id)arg2 shouldSetFeedRingtone:(BOOL)arg3;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderEventFeedOrderChanged;
- (void)finderMusicUploadSuc;
- (void)finderMusicFetchListSucPullType:(unsigned long long)arg1 innerTabType:(int)arg2 dataArray:(id)arg3;
- (void)finderEventReloadAllData;
- (void)finderEventAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderEventNoMoreData;
- (void)finderMusicTopicInvalidWithErrorCode:(int)arg1 errMsg:(id)arg2;
- (id)genMusicDataProvider;
- (id)postMgrSourceInfo:(id)arg1;
- (void)postMgrWillOpenAlbum:(id)arg1;
- (BOOL)postMgrEnableOpenAlbum:(id)arg1;
- (id)postMgrGetMusicInfo;
- (id)onPostMusicIds:(id)arg1;
- (id)onPostFollowTemplateFeedId;
- (id)onPostFollowMuiscFeedId:(id)arg1;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(BOOL)arg1 postMgr:(id)arg2;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (id)postMgrGetVideoTemplateInfo:(id)arg1;
- (id)getRefDataItemForExtStatsReport;
- (id)postMgrGetExtStatsReportStrValue;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void)setPostMgr:(id)arg1;
- (void).cxx_destruct;
@end
