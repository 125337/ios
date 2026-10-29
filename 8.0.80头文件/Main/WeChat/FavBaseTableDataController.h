@interface FavBaseTableDataController : MMObject <FavMultiMenuTableViewCellDelegate, FavAISearchFooterViewDelegate, UITableViewDelegate, UITableViewDataSource, IFavoritesExt, IFavoritesRepairSvrDataExt>
{
    BOOL m_bAnimating; // +0x8
    BOOL m_bReadyToLoad; // +0x9
    BOOL m_bNowScrollBecauseWantFold; // +0xa
    FavMultiMenuTableViewCell * m_editingMenuTableCell; // +0x10
    NSMutableDictionary * m_cellViewCache; // +0x18
    NSMutableDictionary * m_mutiSelectedCellHeightCache; // +0x20
    MMUIActivityIndicatorView * m_activityView; // +0x28
    UIView * m_footerView; // +0x30
    UIView * m_endLineView; // +0x38
    NSString * m_cellIdentifier; // +0x40
    NSMutableArray * m_arrFavDataWrap; // +0x48
    NSMutableArray * m_arrFavItem; // +0x50
    NSMutableArray * m_arrFavPinTopHiddenItem; // +0x58
    OrderedDictionary * m_selectedItemsDict; // +0x60
    long long arrFavPinTopHoddenSizeOnUiFix; // +0x68
    MemoryMappedKV * m_foldingMMKV; // +0x70
    long long m_animationConcurrencyCounter; // +0x78
    NSMutableArray * m_pinTopChangeTaskQueue; // +0x80
    BOOL m_isProcessingPinTopChangeTask; // +0x88
    BOOL _hasMoreData; // +0x89
    BOOL _itemEditable; // +0x8a
    BOOL _multiSelecting; // +0x8b
    BOOL _usesDataItemSelectionKey; // +0x8c
    BOOL _preservesSelectionOnClearData; // +0x8d
    BOOL _sortUnuploadedItem; // +0x8e
    BOOL _showDataSize; // +0x8f
    BOOL _showEraseBtn; // +0x90
    BOOL _showsFirstSectionTopSpacing; // +0x91
    BOOL _decouplesSelectionFromParentItem; // +0x92
    BOOL _foldButtonAddedInList; // +0x93
    BOOL _folding; // +0x94
    unsigned long long _cellStyle; // +0x98
    unsigned long long _multiSelectCellStyle; // +0xa0
    double _searchBarHeight; // +0xa8
    UITableView * _tableView; // +0xb0
    NSString * _highLightContent; // +0xb8
    NSArray * _highLightKeywords; // +0xc0
    unsigned long long _maxSelectedCount; // +0xc8
    double _cellSpacing; // +0xd0
    id <FavBaseTableDataControllerDelegate> _delegate; // +0xd8
}
+ (id)favPartialUpdateReasonLabel:(unsigned long long)arg1;
- (BOOL)isPinTopConfigEnable;
- (unsigned long long)getTotalPinTopCount;
- (id)init;
- (void)updateFoldButtonStateWithCompletion:(id /* block */)arg1;
- (void)checkAndAutoAddOrRemovePinTopButtonAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)fav_aiSearchFooterView;
- (void)fav_setAISearchFooterView:(id)arg1;
- (id /* block */)fav_aiSearchFeedbackTapHandler;
- (void)fav_setAISearchFeedbackTapHandler:(id /* block */)arg1;
- (BOOL)fav_isAISearchFooterVisible;
- (void)fav_setAISearchFooterVisible:(BOOL)arg1;
- (void)enableAISearchFeedbackFooterWithTapHandler:(id /* block */)arg1;
- (void)revealAISearchFeedbackFooter;
- (void)disableAISearchFeedbackFooter;
- (void)setHasMoreData:(BOOL)arg1;
- (void)setAISearchFooterEmptyState:(BOOL)arg1;
- (void)hideEndline;
- (double)aiSearchFooter_visibleTableHeight;
- (double)aiSearchFooter_contentHeightExcludingFooter;
- (void)aiSearchFooter_didTapFeedback;
- (void)setCellFrameAnimationEnabled:(BOOL)arg1;
- (void)performDeleteSectionsWithIndices:(id)arg1 cellsToClean:(id)arg2 animation:(long long)arg3 completion:(id /* block */)arg4;
- (void)hideFavoritesItemsWithAnimation:(id)arg1 isUseBeautifulFade:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)showFavoritesItemWithAnimation:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (long long)getFoldButtonIndex;
- (void)insertXiaoweiBannerItem:(id)arg1;
- (void)removeXiaoweiBannerItem:(id)arg1;
- (void)setMultiSelecting:(BOOL)arg1;
- (void)setMultiSelectCellStyle:(unsigned long long)arg1;
- (void)setShowsFirstSectionTopSpacing:(BOOL)arg1;
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
- (long long)getSortTypeForItem:(id)arg1;
- (BOOL)shouldInsertFavItem:(id)arg1 beforeItem:(id)arg2 withType:(long long)arg3;
- (int)getInsertIndexOfFavItemOldWay:(id)arg1;
- (int)getInsertIndexOfFavItemForRecentUsed:(id)arg1;
- (void)hideMenuOptionsIfViewMatchData:(id)arg1;
- (void)moveFavItem:(id)arg1 toIndexProvider:(id /* block */)arg2 bAnimated:(BOOL)arg3;
- (void)moveFavItem:(id)arg1 toIndexProvider:(id /* block */)arg2 bAnimated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)moveFavItem:(id)arg1 toIndexProvider:(id /* block */)arg2 bAnimated:(BOOL)arg3 forceFullMove:(BOOL)arg4 completion:(id /* block */)arg5;
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
- (void)updateFooterViewWithWidth:(double)arg1;
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
- (void)executeFoldPinTopItem;
- (void)executeFoldPinTopItemDirectWithAnimation;
- (void)executeFoldPinTopItemStep1;
- (void)executeFoldPinTopItemStep2;
- (void)executeUnfoldPinTopItem;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)normalizedSelectionKeyForData:(id)arg1;
- (void)replaceSelectionWithDataList:(id)arg1;
- (BOOL)areDataListItemsSelected:(id)arg1;
- (BOOL)isSelectionSubsetOfDataList:(id)arg1;
- (BOOL)isDataSelected:(id)arg1;
- (BOOL)isParentItemSelectedForData:(id)arg1;
- (void)unionSelectionWithDataList:(id)arg1;
- (void)subtractSelectionWithDataList:(id)arg1;
- (BOOL)modifySelectedDicWith:(id)arg1 selected:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)autoScrollForSearchBar:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onLoadMore;
- (BOOL)isFavPinTopFeatureEnabledForMenu;
- (void)onMenuOptionsShowOnCell:(id)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (id)getDataAtIndexPath:(id)arg1;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)processNextPinTopChangeTask;
- (void)updateItemBecausePinTopChange:(id)arg1 shouldShowToast:(BOOL)arg2 isFromMock:(BOOL)arg3;
- (void)refreshFavItemPinTopAppearanceAtIndex:(long long)arg1 withItem:(id)arg2;
- (void)reloadFavItemCellAtIndex:(long long)arg1 withItem:(id)arg2;
- (void)updateItemBecausePinTopChangeOutOfQueue:(id)arg1 shouldShowToast:(BOOL)arg2 isFromMock:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)onRepairUpdateFavItem:(id)arg1;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)updateItemsFromPinTopServer:(id)arg1;
- (void)OnCacheWebFinish:(id)arg1;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (long long)indexForFavItemLocalId:(unsigned int)arg1;
- (id)inMemoryFavItemAtIndex:(long long)arg1;
- (BOOL)isTagIdList:(id)arg1 equalTo:(id)arg2;
- (BOOL)isStringTagList:(id)arg1 equalTo:(id)arg2;
- (unsigned long long)partialChangeReasonFromCachedItem:(id)arg1 toItem:(id)arg2;
- (BOOL)isFavItemDisplayContentEqualBetweenCached:(id)arg1 andItem:(id)arg2;
- (BOOL)isFavItemDataListSnapshotEqual:(id)arg1 listB:(id)arg2;
- (BOOL)isFavItemMetadataOnlyUpdateFromCached:(id)arg1 toItem:(id)arg2;
- (void)mergeFavItemMetadataFrom:(id)arg1 toCached:(id)arg2;
- (BOOL)applyPartialUpdateForItem:(id)arg1 atIndex:(long long)arg2 reason:(unsigned long long)arg3 source:(id)arg4;
- (void)OnFavItemPartialChanged:(id)arg1 reason:(unsigned long long)arg2;
- (void)updateItems:(id)arg1;
- (BOOL)findFavData:(id)arg1 inDataList:(id)arg2;
- (BOOL)isOnSearch;
- (BOOL)isNewSearchMode;
- (void)handlePinTopResult:(id)arg1 success:(BOOL)arg2 isPinTop:(BOOL)arg3 isFromMock:(BOOL)arg4;
- (void)OnPinTopFavItemSuccess:(id)arg1 isFromMock:(BOOL)arg2;
- (void)OnPinTopFavItemFail:(id)arg1 errorCode:(int)arg2;
- (void)OnCancelPinTopFavItemSuccess:(id)arg1 isFromMock:(BOOL)arg2;
- (void)OnCancelPinTopFavItemFail:(id)arg1 errorCode:(int)arg2;
- (id)mmkvKeyForFoldingState;
- (void)initFoldingMMKV;
- (BOOL)loadFoldingStateFromMMKV;
- (void)saveFoldingStateToMMKV:(BOOL)arg1;
- (void)syncFoldStatusFromLocal;
- (BOOL)hasMoreData;
- (BOOL)itemEditable;
- (void)setItemEditable:(BOOL)arg1;
- (BOOL)multiSelecting;
- (unsigned long long)cellStyle;
- (void)setCellStyle:(unsigned long long)arg1;
- (unsigned long long)multiSelectCellStyle;
- (BOOL)usesDataItemSelectionKey;
- (void)setUsesDataItemSelectionKey:(BOOL)arg1;
- (BOOL)preservesSelectionOnClearData;
- (void)setPreservesSelectionOnClearData:(BOOL)arg1;
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
- (double)cellSpacing;
- (void)setCellSpacing:(double)arg1;
- (BOOL)showsFirstSectionTopSpacing;
- (BOOL)decouplesSelectionFromParentItem;
- (void)setDecouplesSelectionFromParentItem:(BOOL)arg1;
- (BOOL)foldButtonAddedInList;
- (void)setFoldButtonAddedInList:(BOOL)arg1;
- (BOOL)folding;
- (void)setFolding:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
