@interface WCStoryMultiContactPreviewViewController : MMUIViewController <UICollectionViewDataSource, WCStoryPreviewContactIndicatorViewDataSource, WCStoryPreviewContactIndicatorViewDelegate, WCStoryDismissInteractiveTransitionDelegate, WCStoryMultiContactPreviewCellDelegate, WCStoryFacadeExt, UIViewControllerTransitioningDelegate, UICollectionViewDelegate>
{
    UIView * m_contentView; // +0x68
    UICollectionView * m_collectionView; // +0x70
    UICollectionViewFlowLayout * m_collectionLayout; // +0x78
    WCStoryPreviewContactIndicatorView * m_contactIndicator; // +0x80
    MMUIButton * m_closeBtn; // +0x88
    UIImageView * m_topShadowView; // +0x90
    NSIndexPath * m_startIndexPath; // +0x98
    WCStoryPreivewPageCollectionController * m_playingPageCollectionController; // +0xa0
    UIScreenEdgePanGestureRecognizer * m_popBackInteractivePopGesture; // +0xa8
    WCStoryDismissInteractiveTransition * m_dimissInteractiveTransition; // +0xb0
    WAAppDismissAnimateTransition * m_dismissAnimateTransition; // +0xb8
    BOOL m_handingDragDownToClose; // +0xc0
    BOOL m_needShowScrollUpTips; // +0xc1
    NSMutableSet * m_dataFetchingUnitIds; // +0xc8
    NSMutableSet * m_dataHasFetchedUnitIds; // +0xd0
    BOOL _bAddTopShadowView; // +0xd8
    WCStoryPreviewReportObj * _previewReportObj; // +0xe0
    CContact * _chatRoomContact; // +0xe8
    NSMutableArray * _dataUnitArray; // +0xf0
    unsigned long long _previewScene; // +0xf8
    unsigned long long _statusChangePreviewType; // +0x100
    MMUIButton * _moreActionBtn; // +0x108
    WCStoryMultiContactPreviewCell * _currentPlayCell; // +0x110
}
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1;
- (void)configTopBtn;
- (void)configTopShadowView;
- (void)configCollectionView;
- (void)scrollToIndex:(unsigned long long)arg1;
- (void)scrollToIndexPath:(id)arg1;
- (void)configContactIndicator;
- (void)showScrollUpTipsViewWithBottomHeight:(double)arg1;
- (void)showTipsWithText:(id)arg1;
- (void)reloadCollectionView;
- (void)tilePages;
- (void)changeToPlayingPreviewCell:(id)arg1;
- (void)preloadDataWithCurrentIndex:(unsigned long long)arg1;
- (void)setDataUnitFetchingData:(id)arg1;
- (void)clearDataUnitFetchingData:(id)arg1;
- (BOOL)isFetchingDataForDataUnit:(id)arg1;
- (void)setDataUnitHasFetchedData:(id)arg1;
- (BOOL)hasFetchedDataForDataUnit:(id)arg1;
- (void)fetchNewestStoryDataUnit:(id)arg1;
- (void)fetchHistoryDataUnitDetail:(id)arg1;
- (void)onDataUnitUpdatedWithIdentifier:(id)arg1 logIdentifier:(id)arg2 retCode:(int)arg3 dataItems:(id)arg4;
- (void)softReloadSingeIndex:(id)arg1 dataUnit:(id)arg2;
- (void)reloadSingleIndex:(id)arg1;
- (void)didDragScrollView:(id)arg1;
- (void)showScrollUpTips;
- (void)addPopBackInteractivePopGesture;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)onStoryMultiContactCellChangePage:(id)arg1;
- (void)onLongPressStoryMultiContactCellToDelete:(id)arg1;
- (void)onLongPressStoryMultiContactCellToHideDataItem:(id)arg1;
- (void)onStoryMultiContactCellCommentListShow:(BOOL)arg1;
- (void)onMultiContactCellShouldHideUIElement:(BOOL)arg1;
- (void)reportChangeFeaturedOrHiddenStatusWithTid:(id)arg1 videoType:(unsigned long long)arg2;
- (id)storyContactIndicatorView:(id)arg1 dataUnitForIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataUnitInStoryContactIndicatorView:(id)arg1;
- (void)storyContactIndicatorView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)onStoryDeleteSuccessWithDataTid:(id)arg1;
- (void)clickMoreAction;
- (id)previewReportObj;
- (void)setPreviewReportObj:(id)arg1;
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (id)dataUnitArray;
- (void)setDataUnitArray:(id)arg1;
- (BOOL)bAddTopShadowView;
- (void)setBAddTopShadowView:(BOOL)arg1;
- (unsigned long long)previewScene;
- (void)setPreviewScene:(unsigned long long)arg1;
- (unsigned long long)statusChangePreviewType;
- (void)setStatusChangePreviewType:(unsigned long long)arg1;
- (id)moreActionBtn;
- (void)setMoreActionBtn:(id)arg1;
- (id)currentPlayCell;
- (void)setCurrentPlayCell:(id)arg1;
- (void).cxx_destruct;
@end

