@interface ResourceBrowseCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, WCResourceCollectionViewCellDelegate, WCResourceHeaderViewDelegate, WCFilterViewDelegate>
{
    BOOL _showFilter; // +0x8
    BOOL _inAllActionProgress; // +0x9
    id <ResourceBrowseCollectionViewDelegate> _delegate; // +0x10
    NSMutableArray * _allMsgInfos; // +0x18
    NSMutableArray * _selectedMsgInfos; // +0x20
    NSMutableDictionary * _sectionTimeTitleInfo; // +0x28
    NSMutableArray * _sectionTitleArray; // +0x30
    NSMutableDictionary * _sectionMsgInfos; // +0x38
    NSMutableDictionary * _sectionSelectedMsgInfos; // +0x40
    UICollectionView * _dataCollectionView; // +0x48
    double _itemMargin; // +0x50
    unsigned long long _eCollectonViewOrder; // +0x58
    WCFilterView * _filterView; // +0x60
    CGSize _resourceThumbSize; // +0x68
    CGSize _resourceHeaderSize; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initFilterWithFrame:(CGRect)arg1;
- (id)p_getFilterSection;
- (id)initWithFrame:(CGRect)arg1 andShowFilter:(BOOL)arg2;
- (BOOL)isCurrentBrowseViewInShowTimeMode;
- (void)sortMsgInfos;
- (void)updateMsgInfos:(id)arg1;
- (void)updateMsgInfos:(id)arg1 withSortType:(unsigned long long)arg2;
- (id)getSelectedMsgInfos;
- (void)willMoveToParentViewController;
- (void)onSelectionPanelDismissed:(id)arg1;
- (id)getCurrentViewController;
- (BOOL)isDataEmpty;
- (BOOL)isAllSelected;
- (unsigned long long)getSelectedSize;
- (void)deselectAll;
- (void)selectAll;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (BOOL)isResourceHeaderViewCellAllClick:(id)arg1;
- (void)onSelectResourceHeader:(id)arg1;
- (void)onUnselectResourceHeader:(id)arg1;
- (BOOL)isCellBeSelected:(id)arg1;
- (void)onSelectCell:(id)arg1;
- (void)onUnselectCell:(id)arg1;
- (void)onClickCell:(id)arg1;
- (void)p_handleChatLogInfo:(id)arg1 cellFrame:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showFilter;
- (void)setShowFilter:(BOOL)arg1;
- (id)allMsgInfos;
- (void)setAllMsgInfos:(id)arg1;
- (id)selectedMsgInfos;
- (void)setSelectedMsgInfos:(id)arg1;
- (id)sectionTimeTitleInfo;
- (void)setSectionTimeTitleInfo:(id)arg1;
- (id)sectionTitleArray;
- (void)setSectionTitleArray:(id)arg1;
- (id)sectionMsgInfos;
- (void)setSectionMsgInfos:(id)arg1;
- (id)sectionSelectedMsgInfos;
- (void)setSectionSelectedMsgInfos:(id)arg1;
- (id)dataCollectionView;
- (void)setDataCollectionView:(id)arg1;
- (CGSize)resourceThumbSize;
- (void)setResourceThumbSize:(CGSize)arg1;
- (CGSize)resourceHeaderSize;
- (void)setResourceHeaderSize:(CGSize)arg1;
- (double)itemMargin;
- (void)setItemMargin:(double)arg1;
- (unsigned long long)eCollectonViewOrder;
- (void)setECollectonViewOrder:(unsigned long long)arg1;
- (id)filterView;
- (void)setFilterView:(id)arg1;
- (BOOL)inAllActionProgress;
- (void)setInAllActionProgress:(BOOL)arg1;
- (void).cxx_destruct;
@end

