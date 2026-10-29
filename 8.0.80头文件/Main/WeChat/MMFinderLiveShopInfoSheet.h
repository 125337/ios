@interface MMFinderLiveShopInfoSheet : MMPageSheetBaseView <MMFinderLiveShopInfoAnchorCardDelegate, MMFinderLiveGuideFollowExt, MMUIViewControllerExt>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    MMFinderLiveShopInfoAnchorCardView * _anchorCardView; // +0x10
    MMUIView * _shopInfoContainerView; // +0x18
    MMFinderLiveShopInfoEcShopView * _shopInfoEcShopView; // +0x20
    MMFinderLiveShopInfoEcShopViewModel * _shopInfoEcShopVM; // +0x28
}
- (id)initWithTaskId:(id)arg1 viewModel:(id)arg2;
- (void)setupPageSheetConfig;
- (void)setupSubviews;
- (void)setupShopInfoEcShopModule;
- (void)bindEcShopViewContainerCallbacks;
- (void)layoutSubviews;
- (void)layoutContent;
- (id)buildAnchorInfoItem;
- (BOOL)isAnchorFollowedForTask:(id)arg1;
- (id)liveTask;
- (id)audienceLogReporter;
- (void)onClickShopInfoAnchorCardFollow:(id)arg1;
- (void)onClickShopInfoAnchorCardUnfollow:(id)arg1;
- (void)onClickShopInfoAnchorCardContent:(id)arg1;
- (void)performFollowWithInfo:(id)arg1;
- (void)performUnfollowWithInfo:(id)arg1;
- (void)onFollowInLiveSuccess:(id)arg1;
- (void)onFollowInLiveFail:(id)arg1;
- (void)refreshFollowStateFromTask;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)pageSheetDidShow;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)anchorCardView;
- (void)setAnchorCardView:(id)arg1;
- (id)shopInfoContainerView;
- (void)setShopInfoContainerView:(id)arg1;
- (id)shopInfoEcShopView;
- (void)setShopInfoEcShopView:(id)arg1;
- (id)shopInfoEcShopVM;
- (void)setShopInfoEcShopVM:(id)arg1;
- (void).cxx_destruct;
@end
