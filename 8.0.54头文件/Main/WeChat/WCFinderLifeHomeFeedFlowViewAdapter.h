@interface WCFinderLifeHomeFeedFlowViewAdapter : NSObject <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedDetailViewControllerDelegate, WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate, WCFinderNearbyRelatedViewControllerDelegate, WCFinderLifeHomePageViewModelDelegate>
{
    int _commentScene; // +0x8
    WCFinderFeedFlowView * _feedFlowView; // +0x10
    id <WCFinderLifeHomeFeedFlowViewDatas> _datas; // +0x18
    WCFinderExtStatsReporter * _extStatsReporter; // +0x20
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> * _viewControler; // +0x28
}
+ (void)setupCollectionView:(id)arg1;
- (id)initWithCommentScene:(int)arg1 viewController:(id)arg2;
- (void)setDatas:(id)arg1;
- (void)setFeedFlowView:(id)arg1;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)onPageViewModel:(id)arg1 requestDataFinish:(BOOL)arg2;
- (void)onPageViewModel:(id)arg1 dataChanged:(id)arg2;
- (void)onPageViewModelStateChanged:(id)arg1;
- (void)onPageViewModelScrollToTop:(id)arg1;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (void)didSelectLiveFeedWithContentVM:(id)arg1 atIndexPath:(id)arg2;
- (id)finderFeedFlowViewAutoPlayParams:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewPrefetchRemainCount:(id)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)liveCellStyleInfo;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (id)findViewController;
- (void)onNearbyRelatedTriggerUnLikeAction:(id)arg1;
- (void)onFeedDetailDislikeFeedWithContentVM:(id)arg1;
- (void)onFeedDetailAbnormalFeedWithContentVM:(id)arg1;
- (id)feedFlowView;
- (id)datas;
- (id)extStatsReporter;
- (void)setExtStatsReporter:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)viewControler;
- (void)setViewControler:(id)arg1;
- (void).cxx_destruct;
@end

