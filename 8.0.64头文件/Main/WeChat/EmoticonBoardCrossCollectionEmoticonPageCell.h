@interface EmoticonBoardCrossCollectionEmoticonPageCell : EmoticonBoardCrossCollectionBasePageCell <UICollectionViewDataSource, IStoreEmotionDesignerReddotMgrExt, MMLoadMoreCollectionViewDelegate>
{
    BOOL _hasDescription; // +0x8
    NSArray * _emoticonList; // +0x10
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x18
    NSIndexPath * _selectedIndexPath; // +0x20
    EmoticonBoardCrossCollectionEmoticonHeaderModel * _headerViewModel; // +0x28
    EmoticonBoardCrossCollectionEmoticonHeaderModel * _headerRecentUseModel; // +0x30
    EmoticonBoardCrossCollectionEmoticonHeaderView * _headerView; // +0x38
    EmoticonLoadMoreFooterView * _footerView; // +0x40
    UIView * _packSyncTip; // +0x48
    MMUIActivityIndicatorView * _packSyncIndicator; // +0x50
    NSMutableArray * _recnetUseWraps; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)configCollectionViewWithFrame:(CGRect)arg1;
- (void)configGestureRecognizer;
- (void)initPackSyncTipWithFrame:(CGRect)arg1;
- (void)refreshEmoticonForPid:(id)arg1;
- (void)refreshWithLoadDone:(BOOL)arg1;
- (unsigned long long)maximumNumberOfItemsInRow;
- (void)setSectionInfo:(id)arg1;
- (void)onLongPressToPreview:(id)arg1;
- (BOOL)isCustomPid:(id)arg1;
- (BOOL)isCameraPid:(id)arg1;
- (BOOL)isCustomOrCameraPid:(id)arg1;
- (BOOL)needEnableLoadMore;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)adjustPreviewComponetColorIfNeed:(id)arg1 emoticonWrap:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)bindRecentUseHeaderView:(id)arg1;
- (void)configHeaderRecentUseModel;
- (void)bindHeaderView:(id)arg1;
- (void)configHeaderModel;
- (void)configHeaderModelUpdateLogic;
- (void)reloadHeader;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)onDesigner:(id)arg1 changReddotStatus:(BOOL)arg2 newReddotPids:(id)arg3;
- (void)onDesignerPersonalInfoUpdated:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onLoadMore;
- (void)onLoadDone;
- (BOOL)hasDescription;
- (void)setHasDescription:(BOOL)arg1;
- (id)emoticonList;
- (void)setEmoticonList:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)headerViewModel;
- (void)setHeaderViewModel:(id)arg1;
- (id)headerRecentUseModel;
- (void)setHeaderRecentUseModel:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)packSyncTip;
- (void)setPackSyncTip:(id)arg1;
- (id)packSyncIndicator;
- (void)setPackSyncIndicator:(id)arg1;
- (id)recnetUseWraps;
- (void)setRecnetUseWraps:(id)arg1;
- (void).cxx_destruct;
@end
