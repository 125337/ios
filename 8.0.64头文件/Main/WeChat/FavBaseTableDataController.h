@interface FavBaseTableDataController : MMObject <FavMultiMenuTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource, IFavoritesExt, IFavoritesRepairSvrDataExt>
{
    BOOL m_bAnimating; // +0x8
    BOOL m_bReadyToLoad; // +0x9
    FavMultiMenuTableViewCell * m_editingMenuTableCell; // +0x10
    NSMutableDictionary * m_cellViewCache; // +0x18
    NSMutableDictionary * m_mutiSelectedCellHeightCache; // +0x20
    MMUIActivityIndicatorView * m_activityView; // +0x28
    UIView * m_footerView; // +0x30
    UIView * m_endLineView; // +0x38
    NSString * m_cellIdentifier; // +0x40
    NSMutableArray * m_arrFavDataWrap; // +0x48
    NSMutableArray * m_arrFavItem; // +0x50
    OrderedDictionary * m_selectedItemsDict; // +0x58
    BOOL _hasMoreData; // +0x60
    BOOL _itemEditable; // +0x61
    BOOL _multiSelecting; // +0x62
    BOOL _sortUnuploadedItem; // +0x63
    BOOL _showDataSize; // +0x64
    BOOL _showEraseBtn; // +0x65
    unsigned long long _cellStyle; // +0x68
    double _searchBarHeight; // +0x70
    UITableView * _tableView; // +0x78
    NSString * _highLightContent; // +0x80
    NSArray * _highLightKeywords; // +0x88
    unsigned long long _maxSelectedCount; // +0x90
    id <FavBaseTableDataControllerDelegate> _delegate; // +0x98
}
- (id)init;
- (void)setHasMoreData:(BOOL)arg1;
- (void)hideEndline;
- (void)setCellFrameAnimationEnabled:(BOOL)arg1;
- (void)hideFavoritesItemWithAnimation:(id)arg1;
- (void)showFavoritesItemWithAnimation:(id)arg1;
- (void)setMultiSelecting:(BOOL)arg1;
- (id)selectedItemsDict;
- (void)setSelectedItemsDictWith:(id)arg1;
- (id)arrFavItem;
- (id)arrFavDataWrap;
- (BOOL)bReadyToLoad;
- (void)addFavItemList:(id)arg1;
- (void)addFavItemListBySize:(id)arg1;
- (void)addFavItemListByUsedTimes:(id)arg1;
- (void)addFavItemListByUpdateTimeForASC:(id)arg1;
- (int)getInsertIndexOfFavItemBySize:(id)arg1;
- (int)getInsertIndexOfFavItemByUpdateTimeForASC:(id)arg1;
- (int)getInsertIndexOfFavItemByUsedTimes:(id)arg1;
- (void)addFavDataWrapList:(id)arg1;
- (void)removeDataAtIndex:(int)arg1;
- (int)getInsertIndexOfFavItem:(id)arg1 withOldIndex:(int)arg2;
- (int)getInsertIndexOfFavDataWrap:(id)arg1;
- (int)getInsertIndexOfFavItem:(id)arg1;
- (int)getInsertIndexOfFavItemForRecentUsed:(id)arg1;
- (void)moveFavItem:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 bAnimated:(BOOL)arg4;
- (int)indexOfdata:(id)arg1;
- (BOOL)isDataInArray:(id)arg1;
- (void)clearCache;
- (void)cleanCache;
- (void)clearData;
- (void)clearSelection;
- (id)cellIdForDataIndex:(long long)arg1;
- (id)getcellIdWith:(id)arg1 data:(id)arg2;
- (id)dataAtIndex:(long long)arg1;
- (id)dataWrapAtIndex:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)getHeightForItem:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (unsigned int)getSelectedItemTypeWith:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getEndLineView;
- (void)updateFooterViewWithMultiSelect:(BOOL)arg1;
- (void)setFooterViewHidden:(BOOL)arg1;
- (id)getReusableCellForRowAtIndexPath:(id)arg1;
- (id)getCircleButtonImage:(id)arg1 coler:(id)arg2;
- (id)genImageOfView:(id)arg1;
- (id)genDeleteConfirmIcon:(unsigned long long)arg1;
- (id)genEraseConfirmIcon;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)getCellViewWithCellId:(id)arg1;
- (id)getCellViewAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)getSelectedStateWith:(long long)arg1;
- (unsigned int)selectedItemButWebPageCount;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)modifySelectedDicWith:(id)arg1 selected:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)autoScrollForSearchBar:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onLoadMore;
- (void)onMenuOptionsShowOnCell:(id)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (id)getDataAtIndexPath:(id)arg1;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)onRepairUpdateFavItem:(id)arg1;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)OnCacheWebFinish:(id)arg1;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)updateItems:(id)arg1;
- (BOOL)findFavData:(id)arg1 inDataList:(id)arg2;
- (BOOL)hasMoreData;
- (BOOL)itemEditable;
- (void)setItemEditable:(BOOL)arg1;
- (BOOL)multiSelecting;
- (unsigned long long)cellStyle;
- (void)setCellStyle:(unsigned long long)arg1;
- (double)searchBarHeight;
- (void)setSearchBarHeight:(double)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)highLightContent;
- (void)setHighLightContent:(id)arg1;
- (id)highLightKeywords;
- (void)setHighLightKeywords:(id)arg1;
- (BOOL)sortUnuploadedItem;
- (void)setSortUnuploadedItem:(BOOL)arg1;
- (BOOL)showDataSize;
- (void)setShowDataSize:(BOOL)arg1;
- (BOOL)showEraseBtn;
- (void)setShowEraseBtn:(BOOL)arg1;
- (unsigned long long)maxSelectedCount;
- (void)setMaxSelectedCount:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
