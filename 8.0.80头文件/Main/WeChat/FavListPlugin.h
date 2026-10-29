@interface FavListPlugin : NSObject <FavListHostApi, NoteListHostApi, IFavoritesExt, ContactTagNameEditViewControllerDelegate, FavForwardLogicDelegate, FavTagViewDelegate, WALocationGetterDelegate, FavSearchHelperDelegate, WCActionSheetDelegate, MMFlutterPlugin>
{
    BOOL _noteHasMore; // +0x8
    BOOL _noteFetching; // +0x9
    BOOL _locDataComplete; // +0xa
    unsigned int _noteCursorUpdateTime; // +0xc
    unsigned int _noteCursorPinTopTime; // +0x10
    unsigned int _lastDictatingLocalId; // +0x14
    long long _tabMode; // +0x18
    FavListFlutterApi * _flutterApi; // +0x20
    NoteListFlutterApi * _noteFlutterApi; // +0x28
    NSMutableArray * _notePendingItems; // +0x30
    UIViewController * _viewController; // +0x38
    MemoryMappedKV * _foldingMMKV; // +0x40
    id /* block */ _renameTagCompletion; // +0x48
    NSString * _renameTagOldTag; // +0x50
    id /* block */ _deleteConfirmCompletion; // +0x58
    NSMutableArray * _toCheckTypes; // +0x60
    NSMutableArray * _checkedTypes; // +0x68
    NSMutableDictionary * _typeCount; // +0x70
    NSDictionary * _filterNameToType; // +0x78
    NSDictionary * _filterTypeToName; // +0x80
    NSDictionary * _filterTypeToKey; // +0x88
    NSString * _checkFilterSearchKey; // +0x90
    long long _checkFilterStableCount; // +0x98
    NSArray * _lastCheckedTypeNames; // +0xa0
    NSString * _filterSearchKey; // +0xa8
    long long _currentFilterType; // +0xb0
    NSArray * _currentFilterTags; // +0xb8
    NSMutableArray * _arrImgInfo; // +0xc0
    NSMutableArray * _arrFinderItems; // +0xc8
    NSMutableArray * _locDataWraps; // +0xd0
    FavSearchHelper * _locSearchHelper; // +0xd8
    WALocationGetter * _locGetter; // +0xe0
    NSDictionary * _locCurrentAddress; // +0xe8
    CLLocation * _locCurrentLocation; // +0xf0
    NSString * _searchText; // +0xf8
    NSString * _searchTaskKey; // +0x100
    NSString * _flutterTaskKey; // +0x108
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)triggerScrollToFirstNonPinTopNote;
- (void)triggerWriteNoteButtonTapped;
- (void)triggerSyncWriteNoteButtonFrame:(CGRect)arg1;
- (void)loadFirstPageWithError:(id *)arg1;
- (void)loadNextPageCursorUpdateTime:(long long)arg1 cursorPinTopTime:(long long)arg2 error:(id *)arg3;
- (void)setSearchTextText:(id)arg1 taskKey:(id)arg2 error:(id *)arg3;
- (void)cancelSearchWithError:(id *)arg1;
- (void)deleteItemsLocalIds:(id)arg1 error:(id *)arg2;
- (void)setFoldingFolding:(BOOL)arg1 error:(id *)arg2;
- (void)updateItemsLocalIds:(id)arg1 actions:(id)arg2 error:(id *)arg3;
- (void)openDetailLocalId:(long long)arg1 error:(id *)arg2;
- (void)forwardItemsLocalIds:(id)arg1 error:(id *)arg2;
- (void)openTagEditorLocalIds:(id)arg1 editSource:(long long)arg2 error:(id *)arg3;
- (void)deleteTagTag:(id)arg1 completion:(id /* block */)arg2;
- (void)renameTagWithUIOldTag:(id)arg1 existingTags:(id)arg2 completion:(id /* block */)arg3;
- (void)reportEventEventName:(id)arg1 params:(id)arg2 error:(id *)arg3;
- (void)performNativeActionAction:(long long)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (id)getExptKey:(id)arg1 defValue:(BOOL)arg2 error:(id *)arg3;
- (id)getLocalizedStringsKeys:(id)arg1 error:(id *)arg2;
- (id)getCapacityInfoWithError:(id *)arg1;
- (void)openSpaceDetailWithError:(id *)arg1;
- (void)createNewNoteWithError:(id *)arg1;
- (void)OnGetFirstPageFavoritesItemList:(id)arg1 IsSuccess:(BOOL)arg2 HasMoreItems:(BOOL)arg3 tabMode:(long long)arg4;
- (void)OnGetNextPageFavoritesItemList:(id)arg1 IsSuccess:(BOOL)arg2 HasMoreItems:(BOOL)arg3 tabMode:(long long)arg4;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnHasAnyFavoriteData:(BOOL)arg1;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (void)OnTagListUpdate;
- (void)OnPinTopFavItemSuccess:(id)arg1 isFromMock:(BOOL)arg2;
- (void)OnCancelPinTopFavItemSuccess:(id)arg1 isFromMock:(BOOL)arg2;
- (void)OnPinTopFavItemFail:(id)arg1 errorCode:(int)arg2;
- (void)OnCancelPinTopFavItemFail:(id)arg1 errorCode:(int)arg2;
- (void)updateItemsFromPinTopServer:(id)arg1;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)OnFavCapacityInfoUpdate;
- (void)getAllNoteFavIdsWithCompletion:(id /* block */)arg1;
- (void)enterNoteListWithError:(id *)arg1;
- (void)exitNoteListWithError:(id *)arg1;
- (void)prefetchNextBatchWithError:(id *)arg1;
- (void)togglePinTopLocalId:(long long)arg1 error:(id *)arg2;
- (id)_findParentContainer;
- (void)enterMultiSelectModeWithError:(id *)arg1;
- (void)exitMultiSelectModeWithError:(id *)arg1;
- (void)updateMultiSelectTitleTitle:(id)arg1 error:(id *)arg2;
- (void)_onMultiSelectCancel;
- (void)showDeleteConfirmActionSheetTitle:(id)arg1 deleteButtonTitle:(id)arg2 completion:(id /* block */)arg3;
- (void)setWriteNoteButtonHiddenIsHidden:(BOOL)arg1 error:(id *)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_notifyFlutterExitMultiSelect;
- (void)_parseAndUpdateNoteItems:(id)arg1;
- (void)_handleNoteBatchItems:(id)arg1 hasMore:(BOOL)arg2;
- (void)_parseAndSendBatch:(id)arg1 hasMore:(BOOL)arg2;
- (id)buildWrappers:(id)arg1;
- (id)_formatDuration:(unsigned int)arg1;
- (id)_formatVoiceDurationDisplay:(id)arg1;
- (id)_formatFileSize:(unsigned long long)arg1;
- (id)_authorNameForFavItem:(id)arg1 firstData:(id)arg2;
- (id)buildModelFromFavItem:(id)arg1;
- (void)initFilterNameToType;
- (void)requestFilterTypesWithError:(id *)arg1;
- (void)doCheckFilterData;
- (void)setFilterTypeTypeName:(id)arg1 error:(id *)arg2;
- (void)setFilterTagsTags:(id)arg1 error:(id *)arg2;
- (void)doFilterSearch;
- (void)loadMoreFilterResultWithError:(id *)arg1;
- (id)buildImageInfos:(id)arg1;
- (id)buildFinderInfos:(id)arg1;
- (id)getAllTagsWithError:(id *)arg1;
- (void)searchByTagTag:(id)arg1 error:(id *)arg2;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)OnFavForwardCancel;
- (void)onFavTagEditOK;
- (void)onFavTagEditCancel;
- (void)startLocationClassify;
- (void)classifyAndPushLocationData;
- (void)pushLocationResultToFlutter;
- (id)locCountryOf:(id)arg1;
- (id)locCityOf:(id)arg1;
- (void)onFindArrAddress;
- (void)onFindAddress:(id)arg1;
- (void)onGetLocationSuccess:(id)arg1;
- (void)onGetLocationFailedWithReason:(unsigned long long)arg1;
- (void)_onDictationStateChanged:(id)arg1;
- (long long)tabMode;
- (void)setTabMode:(long long)arg1;
- (id)flutterApi;
- (void)setFlutterApi:(id)arg1;
- (id)noteFlutterApi;
- (void)setNoteFlutterApi:(id)arg1;
- (unsigned int)noteCursorUpdateTime;
- (void)setNoteCursorUpdateTime:(unsigned int)arg1;
- (unsigned int)noteCursorPinTopTime;
- (void)setNoteCursorPinTopTime:(unsigned int)arg1;
- (BOOL)noteHasMore;
- (void)setNoteHasMore:(BOOL)arg1;
- (BOOL)noteFetching;
- (void)setNoteFetching:(BOOL)arg1;
- (unsigned int)lastDictatingLocalId;
- (void)setLastDictatingLocalId:(unsigned int)arg1;
- (id)notePendingItems;
- (void)setNotePendingItems:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)foldingMMKV;
- (void)setFoldingMMKV:(id)arg1;
- (id /* block */)renameTagCompletion;
- (void)setRenameTagCompletion:(id /* block */)arg1;
- (id)renameTagOldTag;
- (void)setRenameTagOldTag:(id)arg1;
- (id /* block */)deleteConfirmCompletion;
- (void)setDeleteConfirmCompletion:(id /* block */)arg1;
- (id)toCheckTypes;
- (void)setToCheckTypes:(id)arg1;
- (id)checkedTypes;
- (void)setCheckedTypes:(id)arg1;
- (id)typeCount;
- (void)setTypeCount:(id)arg1;
- (id)filterNameToType;
- (void)setFilterNameToType:(id)arg1;
- (id)filterTypeToName;
- (void)setFilterTypeToName:(id)arg1;
- (id)filterTypeToKey;
- (void)setFilterTypeToKey:(id)arg1;
- (id)checkFilterSearchKey;
- (void)setCheckFilterSearchKey:(id)arg1;
- (long long)checkFilterStableCount;
- (void)setCheckFilterStableCount:(long long)arg1;
- (id)lastCheckedTypeNames;
- (void)setLastCheckedTypeNames:(id)arg1;
- (id)filterSearchKey;
- (void)setFilterSearchKey:(id)arg1;
- (long long)currentFilterType;
- (void)setCurrentFilterType:(long long)arg1;
- (id)currentFilterTags;
- (void)setCurrentFilterTags:(id)arg1;
- (id)arrImgInfo;
- (void)setArrImgInfo:(id)arg1;
- (id)arrFinderItems;
- (void)setArrFinderItems:(id)arg1;
- (id)locDataWraps;
- (void)setLocDataWraps:(id)arg1;
- (id)locSearchHelper;
- (void)setLocSearchHelper:(id)arg1;
- (id)locGetter;
- (void)setLocGetter:(id)arg1;
- (id)locCurrentAddress;
- (void)setLocCurrentAddress:(id)arg1;
- (id)locCurrentLocation;
- (void)setLocCurrentLocation:(id)arg1;
- (BOOL)locDataComplete;
- (void)setLocDataComplete:(BOOL)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)searchTaskKey;
- (void)setSearchTaskKey:(id)arg1;
- (id)flutterTaskKey;
- (void)setFlutterTaskKey:(id)arg1;
- (void).cxx_destruct;
@end
