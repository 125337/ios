@interface EmoticonBoardCrossCollectionEmoticonPageCell : EmoticonBoardCrossCollectionBasePageCell <UICollectionViewDataSource, IStoreEmotionDesignerReddotMgrExt, MMLoadMoreCollectionViewDelegate, EmoticonBoardCrossCollectionEmoticonHeaderViewDelegate>
{
    BOOL _hasDescription; // +0x8
    NSArray * _emoticonList; // +0x10
    NSString * _currentChatName; // +0x18
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x20
    NSIndexPath * _selectedIndexPath; // +0x28
    long long _recommendStatus; // +0x30
    EmoticonBoardCrossCollectionEmoticonHeaderModel * _headerViewModel; // +0x38
    EmoticonBoardCrossCollectionEmoticonHeaderModel * _recommendHeaderModel; // +0x40
    EmoticonBoardCrossCollectionEmoticonHeaderView * _headerView; // +0x48
    EmoticonLoadMoreFooterView * _footerView; // +0x50
    UIView * _packSyncTip; // +0x58
    MMUIActivityIndicatorView * _packSyncIndicator; // +0x60
    NSArray * _recommendWraps; // +0x68
    NSString * _reportedExposeSessionId; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)configCollectionViewWithFrame:(CGRect)arg1;
- (void)configGestureRecognizer;
- (void)initPackSyncTipWithFrame:(CGRect)arg1;
- (void)refreshEmoticonForPid:(id)arg1;
- (void)refreshWithLoadDone:(BOOL)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (unsigned long long)maximumNumberOfItemsInRow;
- (BOOL)isRecommendSectionVisible;
- (BOOL)isRecommendSection:(long long)arg1;
- (BOOL)isRecommendLoading;
- (unsigned long long)displayedRecommendCount;
- (void)addLoadingIndicatorToCell:(id)arg1;
- (void)removeLoadingIndicatorFromCell:(id)arg1;
- (BOOL)shouldShowRecommendSection;
- (void)syncRecommendationFromPrefetcher;
- (void)refreshRecommendation;
- (void)setSectionInfo:(id)arg1;
- (BOOL)isCellFullyVisibleAtIndexPath:(id)arg1;
- (void)checkFullyVisibleCells;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onLongPressToPreview:(id)arg1;
- (BOOL)isCustomPid:(id)arg1;
- (BOOL)isCameraPid:(id)arg1;
- (BOOL)isCustomOrCameraPid:(id)arg1;
- (BOOL)needEnableLoadMore;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)recommendCellInCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)adjustPreviewComponetColorIfNeed:(id)arg1 emoticonWrap:(id)arg2;
- (void)reportGuessSendStickerExposeIfNeeded;
- (id)guessSendStickerReportSessionId;
- (unsigned long long)customEmoticonPositionForMd5:(id)arg1;
- (void)reportGuessSendStickerClickForWrap:(id)arg1 recommendIndex:(unsigned long long)arg2;
- (void)emoticonHeaderViewDidTapManageButton:(id)arg1;
- (BOOL)showNewResortEntrance;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)bindRecommendHeaderView:(id)arg1;
- (void)configRecommendHeaderModel;
- (void)bindHeaderView:(id)arg1;
- (void)configHeaderModel;
- (void)configHeaderModelUpdateLogic;
- (void)reloadHeader;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)onDesigner:(id)arg1 changReddotStatus:(BOOL)arg2 newReddotPids:(id)arg3;
- (void)onDesignerPersonalInfoUpdated:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onLoadMore;
- (void)onLoadDone;
- (BOOL)hasDescription;
- (void)setHasDescription:(BOOL)arg1;
- (id)emoticonList;
- (void)setEmoticonList:(id)arg1;
- (id)currentChatName;
- (void)setCurrentChatName:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (long long)recommendStatus;
- (void)setRecommendStatus:(long long)arg1;
- (id)headerViewModel;
- (void)setHeaderViewModel:(id)arg1;
- (id)recommendHeaderModel;
- (void)setRecommendHeaderModel:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)packSyncTip;
- (void)setPackSyncTip:(id)arg1;
- (id)packSyncIndicator;
- (void)setPackSyncIndicator:(id)arg1;
- (id)recommendWraps;
- (void)setRecommendWraps:(id)arg1;
- (id)reportedExposeSessionId;
- (void)setReportedExposeSessionId:(id)arg1;
- (void).cxx_destruct;
@end
