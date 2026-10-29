@interface EmoticonBoardCrossCollectionIPSetPageCell : EmoticonBoardCrossCollectionBasePageCell <UICollectionViewDataSource, EmoticonBoardCrossCollectionStoreGridCellDelegate, UIGestureRecognizerDelegate>
{
    BOOL _isReloadingSections; // +0x8
    id <EmoticonBoardCrossCollectionIPSetPageDelegate> _delegate; // +0x10
    NSMutableDictionary * _emoticonListDict; // +0x18
    NSMutableDictionary * _packDownloadStatusDict; // +0x20
    NSMutableDictionary * _emoticonListCountDict; // +0x28
    NSMutableArray * _pidList; // +0x30
    NSMutableArray * _needReloadPids; // +0x38
    NSArray * _packedIPArray; // +0x40
    NSIndexPath * _selectedIndexPath; // +0x48
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x50
    EmoticonBoardCrossCollectionEmoticonHeaderModel * _headerViewModel; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)configCollectionViewWithFrame:(CGRect)arg1;
- (id)collectionViewLayout;
- (void)configGestureRecognizer;
- (void)refreshEmoticonForPid:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (unsigned long long)maximumNumberOfItemsInRow;
- (id)emoticonListForWrap:(id)arg1;
- (unsigned long long)emoticonCountForWrap:(id)arg1;
- (BOOL)hasDescForPid:(id)arg1;
- (BOOL)isPackDownloadedForPid:(id)arg1;
- (id)headerViewModel;
- (id)genHeadViewModel;
- (void)reloadHeader;
- (BOOL)sectionVisibleForPid:(id)arg1;
- (void)reloadSectionForPid:(id)arg1;
- (void)tryReloadNextPid;
- (void)loopReloadSections;
- (void)doReloadNextPid;
- (void)adjustPreviewComponetColorIfNeed:(id)arg1 emoticonWrap:(id)arg2;
- (void)onLongPressToPreview:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onTapEmoticonWrap:(id)arg1 atIndex:(long long)arg2 withPid:(id)arg3;
- (void)shouldShowEmoticonPreviewForWrap:(id)arg1 atIndex:(long long)arg2 withGridOffset:(CGPoint)arg3 description:(id)arg4 sender:(id)arg5;
- (void)shouldHideEmoticonPreview;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)onDesigner:(id)arg1 changReddotStatus:(BOOL)arg2 newReddotPids:(id)arg3;
- (void)onDesignerPersonalInfoUpdated:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)emoticonListDict;
- (void)setEmoticonListDict:(id)arg1;
- (id)packDownloadStatusDict;
- (void)setPackDownloadStatusDict:(id)arg1;
- (id)emoticonListCountDict;
- (void)setEmoticonListCountDict:(id)arg1;
- (id)pidList;
- (void)setPidList:(id)arg1;
- (id)needReloadPids;
- (void)setNeedReloadPids:(id)arg1;
- (id)packedIPArray;
- (void)setPackedIPArray:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setHeaderViewModel:(id)arg1;
- (BOOL)isReloadingSections;
- (void)setIsReloadingSections:(BOOL)arg1;
- (void).cxx_destruct;
@end

