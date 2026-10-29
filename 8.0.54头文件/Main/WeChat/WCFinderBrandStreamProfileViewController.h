@interface WCFinderBrandStreamProfileViewController : MMUIViewController <WCFinderBrandStreamProfileViewModelDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderProfileJustWatchTipsViewDelegate, ServiceAuthExt, MMLiveMorphDismissTarget, BrandProfileTabVCProtocol>
{
    BOOL _displayThreeColumnSwitch; // +0x68
    id <WCFinderBrandStreamProfileVCDelegate> _delegate; // +0x70
    WCFinderBrandStreamProfileViewModel * _viewModel; // +0x78
    WCFinderFeedFlowView * _feedFlowView; // +0x80
    WCFinderProfileJustWatchTipsView * _justWatchTipsView; // +0x88
    unsigned long long _exposeTime; // +0x90
    NSIndexPath * _serviceAuthBlockedIndexPath; // +0x98
    WCFinderExtStatsReporter * _extStatReporter; // +0xa0
    optional<CGRect> _justWatchCellFrame; // +0xa8
}
- (id)initWithBizUsername:(id)arg1 brandFinderJumpInfo:(id)arg2;
- (void)selectedFinderBrandStreamAction;
- (void)exitFinderBrandStreamAction;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_updateContextId;
- (void)hiddenJustWatchTipsViewWithAnimated;
- (double)bottomOfJustWatchTipsView;
- (id)justWatchingTitle;
- (BOOL)displayThreeColumn;
- (id)feedFlowView;
- (id)collectionView;
- (id)extStatReporter;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (void)cleanJustWatch;
- (void)scrollToJustWatchIndex;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (void)finderBrandStreamProfileReloadAllData;
- (void)finderBrandStreamProfileAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderBrandStreamProfileNoMoreData;
- (void)finderBrandStreamProfileRequestFailWithErrorCode:(int)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (void)finderBrandStreamProfileViewModel:(id)arg1 onShowJustWatchTidChangeWithOldTid:(id)arg2;
- (void)finderBrandStreamProfileViewModel:(id)arg1 justWatchBannerStatusFrom:(long long)arg2 to:(long long)arg3;
- (void)checkJustWatchCellIsDisplayed;
- (void)keepJustWatchBannerBottomPosition;
- (void)setJustWatchBannerDisplay:(BOOL)arg1 animated:(BOOL)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)onProfileJustWatchTipsViewClicked:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)setContentOffset:(CGPoint)arg1;
- (id)tabTitle;
- (unsigned long long)tabType;
- (void)updateSectionWidthInSectionDataList;
- (id)viewController;
- (void)setExternalGestureRecognizer:(id)arg1;
- (void)brandScrollViewDidScroll:(id)arg1;
- (void)reportProfileWithEventCode:(long long)arg1;
- (void)fillProfileRenderInfo:(id)arg1;
- (void)reportJustWatchIconWithEventCode:(long long)arg1;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setFeedFlowView:(id)arg1;
- (id)justWatchTipsView;
- (void)setJustWatchTipsView:(id)arg1;
- (optional<CGRect>)justWatchCellFrame;
- (void)setJustWatchCellFrame:(optional<CGRect>)arg1;
- (unsigned long long)exposeTime;
- (void)setExposeTime:(unsigned long long)arg1;
- (BOOL)displayThreeColumnSwitch;
- (void)setDisplayThreeColumnSwitch:(BOOL)arg1;
- (id)serviceAuthBlockedIndexPath;
- (void)setServiceAuthBlockedIndexPath:(id)arg1;
- (void)setExtStatReporter:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

