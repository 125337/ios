@interface MyFavoritesListViewController : FavBaseListViewController <FavForwardLogicDelegate, FavoritesBatchSafeChecker, FavoritesBatchSafeCheckerDelegate, WCFinderFeedFlowViewSelectionDelegate>
{
    FavoritesBatchSafeCheckerExecuter * _batchSafeCheckerExecuter; // +0x120
    double _lastBatchSafeCheckTime; // +0x128
    FavChatForwardToolView * _chatForwardToolView; // +0x130
    UIEdgeInsets _chatForwardOriginalContentInset; // +0x138
    UIEdgeInsets _chatForwardOriginalScrollIndicatorInsets; // +0x158
    BOOL _isLayingOutChatForwardPickerSearchHeader; // +0x178
    BOOL _isSynchronizingChatForwardSpecialSelectionViews; // +0x179
    BOOL _isChatForwardSending; // +0x17a
    BOOL _hasClearedChatForwardSelectionOnExit; // +0x17b
    OrderedDictionary * _chatForwardSelectedItems; // +0x180
    BOOL _hasAppliedInitialFilter; // +0x188
    BOOL _chatForwardMultiSelectEnabled; // +0x189
    BOOL _shouldSkipFirstUpdateData; // +0x18a
    id <MyFavoritesListViewControllerDelegate> _delegate; // +0x190
    id /* block */ _chatForwardSelectionHandler; // +0x198
    id /* block */ _onFavItemSelected; // +0x1a0
    id /* block */ _onDismissBlock; // +0x1a8
    id /* block */ _onForwardDoneBlock; // +0x1b0
    NSString * _initialQuickFilter; // +0x1b8
    long long _initialTypeBit; // +0x1c0
    NSString * _initialTag; // +0x1c8
    NSString * _initialSearchText; // +0x1d0
}
- (id)init;
- (void)addItemList:(id)arg1 withAutoScrollToAddPositon:(BOOL)arg2;
- (BOOL)presentFilteredItems:(id)arg1 append:(BOOL)arg2 hasMoreData:(BOOL)arg3;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (void)setChatForwardMultiSelectEnabled:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (double)feedFlowViewContentTop;
- (void)initSearchHeader;
- (void)updateSearchHeader;
- (void)initFastBrowserView;
- (void)initFeedFlowView;
- (void)onSearchBarMoved:(id)arg1;
- (double)getSearchBarTop;
- (double)getSearchBarBottom;
- (double)getSearchBarHeight;
- (void)layoutChatForwardPickerSearchHeader;
- (void)showChatForwardMultiSelectInterface;
- (void)hideChatForwardMultiSelectInterface;
- (void)bringChatForwardToolViewToFront;
- (void)bringTopFilterBarToFront;
- (void)clearChatForwardSelection;
- (void)clearChatForwardSelectionForActualExit;
- (void)layoutChatForwardToolView;
- (id)chatForwardDataWrapForImageInfo:(id)arg1;
- (id)chatForwardFavoriteItemForContentVM:(id)arg1;
- (id)chatForwardSelectionKeyForItem:(id)arg1;
- (id)chatForwardDataWrapForSelectionItem:(id)arg1;
- (void)updateChatForwardPreparedItem:(id)arg1 selected:(BOOL)arg2 selectionKey:(id)arg3;
- (void)finishChatForwardSending;
- (BOOL)isChatForwardSelectionSelected:(id)arg1;
- (unsigned long long)chatForwardNonWebPageSelectionCount;
- (void)applyChatForwardSelectionFromCurrentProjection:(id)arg1;
- (BOOL)setChatForwardSelection:(id)arg1 selected:(BOOL)arg2;
- (unsigned long long)locationSubPageSelectMode;
- (id)getSelectedDic;
- (void)mergeChatForwardSelectionIntoProjectionForLocationSubPage;
- (void)onLocationSubPageSelectionDelivered:(id)arg1 allItems:(id)arg2;
- (void)restoreChatForwardSelectionProjection;
- (void)synchronizeChatForwardSpecialSelectionViews;
- (void)updateChatForwardSelectionState;
- (void)removeChatForwardSelection:(id)arg1;
- (BOOL)canOpenChatForwardSelectionDetailByDataItem:(id)arg1;
- (void)openChatForwardSelectionDetail:(id)arg1 thumbView:(id)arg2;
- (void)notifyChatForwardSelection;
- (void)forwardChatForwardSelection:(id)arg1;
- (void)initNavigationBar;
- (BOOL)isPresentedAsChatForwardPicker;
- (void)OnCancelModalView:(id)arg1;
- (void)viewDidLoad;
- (void)updateData;
- (void)viewDidAppear:(BOOL)arg1;
- (void)applyInitialFilterIfNeeded;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissedDuplicate;
- (void)onShowEmptyView;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)usesNewFavMultiSelectCheckBoxStyle;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)forwardData:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)OnFavForwardCancel;
- (BOOL)finderFeedFlowView:(id)arg1 isContentVMSelected:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 setSelected:(BOOL)arg2 forContentVM:(id)arg3;
- (id)selectedItemsInFinderFeedFlowView:(id)arg1;
- (void)onFinderFeedFlowViewChangeMultiSelect;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (BOOL)favBrowseView:(id)arg1 willChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)favBrowseView:(id)arg1 didChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onClickDetailBtnWithDataWrap:(id)arg1;
- (void)onClickDetailBtnWith:(id)arg1;
- (void)onClickDetailBtnWith:(id)arg1 thumbView:(id)arg2;
- (void)needExecuteBatchCgiSafetyCheck:(id)arg1;
- (void)batchCgiSafetyCheckSuccess;
- (void)batchCgiSafetyCheckFail;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)chatForwardMultiSelectEnabled;
- (id /* block */)chatForwardSelectionHandler;
- (void)setChatForwardSelectionHandler:(id /* block */)arg1;
- (id /* block */)onFavItemSelected;
- (void)setOnFavItemSelected:(id /* block */)arg1;
- (id /* block */)onDismissBlock;
- (void)setOnDismissBlock:(id /* block */)arg1;
- (id /* block */)onForwardDoneBlock;
- (void)setOnForwardDoneBlock:(id /* block */)arg1;
- (id)initialQuickFilter;
- (void)setInitialQuickFilter:(id)arg1;
- (long long)initialTypeBit;
- (void)setInitialTypeBit:(long long)arg1;
- (id)initialTag;
- (void)setInitialTag:(id)arg1;
- (id)initialSearchText;
- (void)setInitialSearchText:(id)arg1;
- (BOOL)shouldSkipFirstUpdateData;
- (void)setShouldSkipFirstUpdateData:(BOOL)arg1;
- (void).cxx_destruct;
@end
