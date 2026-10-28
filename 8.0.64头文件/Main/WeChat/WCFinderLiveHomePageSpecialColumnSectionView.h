@interface WCFinderLiveHomePageSpecialColumnSectionView : WCFinderLiveHomePageBaseSectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLiveHomePageSpecialColumnCellDelegate, WCFinderLiveHomePageRelatedLiveCellDelegate, WCFinderLiveHomePageNoticeCellDelegate, WCFinderLiveHomePageRecommendGuideFooterViewDelegate, WCFinderLiveHomePageFooterViewActionDelegate>
{
    WCFinderLiveFeedGenericAutoPlayModel * _autoPlayModel; // +0x8
    id <WCFinderLiveHomePageSpecialColumnSectionViewDelegate> _delegate; // +0x10
    double _beginTouchPosX; // +0x18
    WCFinderLiveHomePageRecommendGuideFooterView * _recommendGuideView; // +0x20
    WCFinderLiveHomePageFooterView * _footerView; // +0x28
}
+ (double)viewHeightInWidth:(double)arg1 styleInfo:(id)arg2;
+ (double)defaultCellWidth:(double)arg1;
- (void)layoutSubviews;
- (void)layoutSubViews_onFrameChanged;
- (void)prepareForReuse;
- (void)updateWithVM:(id)arg1;
- (void)checkAddJumper;
- (void)dealloc;
- (void)resetState;
- (void)reloadData;
- (void)autoPlayStop;
- (void)autoPlayStart;
- (void)_startPlayWithIndexPath:(id)arg1;
- (void)_stopWithIndexPath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handlePan:(id)arg1;
- (BOOL)isJumperShowing;
- (void)checkAdjustOffset;
- (void)hideJumper:(BOOL)arg1;
- (id)generateCollectionView;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2 feedVM:(id)arg3 withContainerId:(unsigned long long)arg4 indexPath:(id)arg5;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)footerView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onClickCoverContact:(id)arg1 feedVM:(id)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onRelatedLiveCellForwardAction:(id)arg1;
- (void)onBaseLiveCellForwardAction:(id)arg1;
- (void)onLiveCellClickFriendLikeReason:(id)arg1;
- (void)onRecommendGuideClickAction:(id)arg1;
- (id)autoPlayModel;
- (id)recommendGuideView;
- (void)didClickFooterRefresh:(id)arg1;
- (BOOL)isEnableFooterTrigerLoading:(id)arg1;
- (void)onContainerSectionVMRefreshAllData:(id)arg1;
- (void)onContainerSectionVMFetchNextPageData:(id)arg1;
- (void)onContainerSectionVMNoMoreData;
- (void)onContainerSectionVMFetchFailWithErroCode:(long long)arg1;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMHomePageDeleteTid:(id)arg1;
- (void)onHomePageNoticeAction:(BOOL)arg1 feedVM:(id)arg2;
- (void)onShowConcertTicketAction:(id)arg1;
- (void)setAutoPlayModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)beginTouchPosX;
- (void)setBeginTouchPosX:(double)arg1;
- (void)setRecommendGuideView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
