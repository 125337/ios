@interface FavItemActionHandler : NSObject <WCActionSheetDelegate, FavTagViewDelegate, FavForwardLogicDelegate>
{
    BOOL _isMultiSelecting; // +0x8
    BOOL _pendingDeleteIsMulti; // +0x9
    id <FavItemActionHandlerDelegate> _delegate; // +0x10
    FavItemActionHandlerConfig * _config; // +0x18
    FavMultiSelectToolView * _multiSelectToolView; // +0x20
    id /* block */ _isOnSearchBlock; // +0x28
    id /* block */ _searchTextBlock; // +0x30
    NSArray * _pendingDeleteItems; // +0x38
    NSIndexPath * _pendingDeleteIndexPath; // +0x40
    FavDataBatchSaveLogic * _batchSavePreflightLogic; // +0x48
    UIBarButtonItem * _originalLeftBarButtonItem; // +0x50
    UIBarButtonItem * _originalRightBarButtonItem; // +0x58
    UIView * _originalTitleView; // +0x60
    NSString * _originalTitle; // +0x68
    long long _multiSelectSelectAllRightBarKind; // +0x70
    UIEdgeInsets _originalContentInset; // +0x78
}
+ (id)extractFavItemFromDataObj:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)viewController;
- (id)tableView;
- (id)dataController;
- (id)searchBar;
- (id)_listViewController;
- (BOOL)canPerformAction:(unsigned long long)arg1 forDataObj:(id)arg2 isSearchBarEditing:(BOOL)arg3;
- (BOOL)canPerformSelector:(SEL)arg1 forDataObj:(id)arg2 isSearchBarEditing:(BOOL)arg3;
- (void)forwardItems:(id)arg1;
- (void)deleteItemsWithConfirm:(id)arg1 indexPath:(id)arg2 isMulti:(BOOL)arg3;
- (void)editTagForItems:(id)arg1 editSource:(unsigned int)arg2;
- (void)pinTopItem:(id)arg1;
- (void)unpinTopItem:(id)arg1;
- (void)showContextForDataObj:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)supportedActionForActionType:(unsigned long long)arg1;
- (unsigned long long)actionTypeForSelector:(SEL)arg1;
- (BOOL)isActionTypeSupported:(unsigned long long)arg1;
- (BOOL)performAction:(SEL)arg1 forDataObj:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)performActionType:(unsigned long long)arg1 forDataObj:(id)arg2 atIndexPath:(id)arg3;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (void)togglePinTopForDataObj:(id)arg1;
- (id)buildForwardReportParamsForItems:(id)arg1;
- (void)executeDeleteItems:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFavTagEditOK;
- (void)onFavTagEditCancel;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)setupMultiSelectToolView;
- (BOOL)isBatchPicSaveEnabled;
- (void)enterMultiSelectMode;
- (void)exitMultiSelectMode;
- (void)onMultiSelectToolViewHidden;
- (void)updateMultiSelectStateWithSelectedCount:(unsigned long long)arg1;
- (void)replaceMultiSelectSelectionWithDataList:(id)arg1;
- (BOOL)areMultiSelectDataListItemsSelected:(id)arg1;
- (BOOL)shouldShowSelectAllForImageVideoGrid:(id)arg1;
- (void)applyMultiSelectRightBarButtonForImageVideoGrid;
- (void)setMultiSelectSelectAllBarButton;
- (void)setMultiSelectCancelSelectAllBarButton;
- (void)updateMultiSelectSelectAllRightBarButtonIfNeeded;
- (void)onMultiSelectSelectAllImagesTapped;
- (void)performMultiSelectSelectAllWithLoadedDataOnly:(id)arg1;
- (void)onMultiSelectUnselectAllImagesTapped;
- (id)newSearchMultiSelectSelectedItemsForListViewController:(id)arg1;
- (void)multiSelectForwardSelectedItems;
- (void)multiSelectDeleteSelectedItems;
- (void)multiSelectEditTagForSelectedItems;
- (BOOL)isVideoOrSightDataType:(id)arg1;
- (id)getSelectedImageVideoItemsFromListVC:(id)arg1;
- (id)buildDownloadButtonClickReportParamsWithListVC:(id)arg1;
- (void)startBatchSaveWithSelectedItems:(id)arg1 reportParams:(id)arg2;
- (void)multiSelectSaveImages;
- (void)handleImageLongPress:(id)arg1 withInfo:(id)arg2 browseCollectionView:(id)arg3;
- (void)handleImageLongPressMenuAction:(id)arg1;
- (void)handleImageClick:(id)arg1 withInfo:(id)arg2;
- (double)getVisibleHeight;
- (double)getSafeBottomInset;
- (double)getNavigationAreaHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)multiSelectToolView;
- (void)setMultiSelectToolView:(id)arg1;
- (BOOL)isMultiSelecting;
- (void)setIsMultiSelecting:(BOOL)arg1;
- (id /* block */)isOnSearchBlock;
- (void)setIsOnSearchBlock:(id /* block */)arg1;
- (id /* block */)searchTextBlock;
- (void)setSearchTextBlock:(id /* block */)arg1;
- (id)pendingDeleteItems;
- (void)setPendingDeleteItems:(id)arg1;
- (id)pendingDeleteIndexPath;
- (void)setPendingDeleteIndexPath:(id)arg1;
- (BOOL)pendingDeleteIsMulti;
- (void)setPendingDeleteIsMulti:(BOOL)arg1;
- (id)batchSavePreflightLogic;
- (void)setBatchSavePreflightLogic:(id)arg1;
- (UIEdgeInsets)originalContentInset;
- (void)setOriginalContentInset:(UIEdgeInsets)arg1;
- (id)originalLeftBarButtonItem;
- (void)setOriginalLeftBarButtonItem:(id)arg1;
- (id)originalRightBarButtonItem;
- (void)setOriginalRightBarButtonItem:(id)arg1;
- (id)originalTitleView;
- (void)setOriginalTitleView:(id)arg1;
- (id)originalTitle;
- (void)setOriginalTitle:(id)arg1;
- (long long)multiSelectSelectAllRightBarKind;
- (void)setMultiSelectSelectAllRightBarKind:(long long)arg1;
- (void).cxx_destruct;
@end
