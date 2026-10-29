@interface WCFinderMemberShipDraftViewController : MMUIViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderProfileMusicViewDelegate, WCFinderMemberShipDraftViewModelDelegate, WCFinderPostViewControllerDelegate>
{
    WCFinderMemberShipDraftViewModel * _viewModel; // +0x70
}
- (id)feedFlowView;
- (void)loadView;
- (void)setViewModel:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)pushVCAnimated:(id)arg1;
- (void)openFinderEditor:(id)arg1;
- (BOOL)checkLongVideoFileValid:(id)arg1;
- (id)zoneViewController;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (void)finderMemberShipZoneDraftTabViewNoMoreData;
- (void)finderMemberShipZoneDraftTabViewFetchListSuc;
- (void)finderMemberShipZoneDraftTabViewFetchListFail;
- (void)finderMemberShipZoneDraftTabDeleteItemAtIdx:(long long)arg1;
- (void)finderMemberShipZoneDraftTabInsertItemAtIdx:(long long)arg1;
- (BOOL)reloadDataWithBatchModify;
- (void)onMusicViewDidSlideDelete:(id)arg1 feedVM:(id)arg2;
- (void)onMusicViewDidClickRetry:(id)arg1 feedVM:(id)arg2;
- (void)onMusicViewDidClickDelete:(id)arg1 feedVM:(id)arg2;
- (void)onMusicView:(id)arg1 exposeMenuAction:(id)arg2 feedVM:(id)arg3;
- (void)postViewControllerStartUpload;
- (id)viewModel;
- (void).cxx_destruct;
@end
