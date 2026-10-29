@interface FavoritesReportLogic : NSObject
{
    BOOL _bOnSearch; // +0x8
    BOOL _needReport; // +0x9
    BOOL _isForceToPortrait; // +0xa
    BOOL _isSmallImage; // +0xb
    BOOL _isNoteEditable; // +0xc
    unsigned int _mainPageType; // +0x10
    unsigned int _entranceScene; // +0x14
    unsigned int _resultShowTime; // +0x18
    unsigned int _searchTime; // +0x1c
    unsigned int _viewImageCount; // +0x20
    NSArray * _selectedlocalPosition; // +0x28
    NSString * _query; // +0x30
    long long _filterType; // +0x38
    NSString * _searchId; // +0x40
    unsigned long long _localResultNum; // +0x48
    long long _curOrientation; // +0x50
    NSString * _curNoteSessionId; // +0x58
    NSString * _noteId; // +0x60
}
- (void)setBOnSearch:(BOOL)arg1;
- (void)startSearch;
- (void)endSearch;
- (void)report15488:(unsigned long long)arg1;
- (void)report14103:(unsigned long long)arg1 favTopCount:(unsigned long long)arg2 favFoldStatus:(unsigned long long)arg3;
- (void)report14109:(unsigned long long)arg1;
- (void)report14110:(unsigned long long)arg1 deleteItemNum:(unsigned long long)arg2 deleteTotalSize:(long long)arg3;
- (void)report14790:(unsigned long long)arg1 onTop:(BOOL)arg2;
- (void)reportBatchEditTagOpt:(int)arg1 isSuccess:(int)arg2 oldTag:(id)arg3 newTag:(id)arg4;
- (void)convertFavEntranceScene:(unsigned int)arg1 toEntranceScene:(unsigned int *)arg2 toEntranceSearchScene:(unsigned int *)arg3;
- (void)report15098:(id)arg1;
- (void)report15378:(id)arg1;
- (void)report15508:(id)arg1;
- (void)report10651WithFavItem:(id)arg1 DataWrap:(id)arg2 toContact:(id)arg3 toFriend:(BOOL)arg4;
- (void)report10651WithFavItem:(id)arg1 DataWrap:(id)arg2 toContact:(id)arg3 toFriend:(BOOL)arg4 isFromSession:(BOOL)arg5;
- (void)report10651WithFavItem:(id)arg1 DataWrap:(id)arg2 toContact:(id)arg3 toFriend:(BOOL)arg4 isFromSession:(BOOL)arg5 IsSearchResult:(BOOL)arg6 SearchListIndex:(unsigned int)arg7 FavListIndex:(unsigned int)arg8;
- (void)report17105:(id)arg1 DeletType:(int)arg2 PageType:(int)arg3 ContainRecord:(BOOL)arg4 ShowContext:(BOOL)arg5;
- (void)report17105:(id)arg1 DeletType:(int)arg2 PageType:(int)arg3 ContainRecord:(BOOL)arg4 ShowContext:(BOOL)arg5 IsSearchResult:(BOOL)arg6 SearchListIndex:(unsigned int)arg7 FavListIndex:(unsigned int)arg8;
- (void)report17105:(id)arg1 DeletType:(int)arg2 PageType:(int)arg3 ContainRecord:(BOOL)arg4 ShowContext:(BOOL)arg5 IsSearchResult:(BOOL)arg6 SearchListIndex:(unsigned int)arg7 FavListIndex:(unsigned int)arg8 dataChildField:(id)arg9;
- (void)report19856:(id)arg1;
- (void)report24562:(int)arg1 action:(int)arg2 clickNum:(int)arg3;
- (void)onOpenNoteWithMessage:(id)arg1 WCDataItem:(id)arg2 FavItem:(id)arg3;
- (void)increaseImageShowCount;
- (void)onCloseNote;
- (void)reportToolViewOperation:(unsigned long long)arg1;
- (void)reportAddFavOperation:(unsigned int)arg1 favItemList:(id)arg2 selectedCount:(unsigned int)arg3;
- (void)reportToolViewOperation:(unsigned long long)arg1 MediaType:(unsigned long long)arg2;
- (void)reportToolViewOperation:(unsigned long long)arg1 MediaType:(unsigned long long)arg2 favDetail:(id)arg3 count:(unsigned int)arg4;
- (void)reportSaveNoteImageWidth:(unsigned long long)arg1 Height:(unsigned long long)arg2 Length:(unsigned long long)arg3 errorCode:(unsigned long long)arg4 Editable:(unsigned long long)arg5;
- (void)report14789:(unsigned long long)arg1 editable:(BOOL)arg2 translated:(BOOL)arg3 hasErrorDataType:(BOOL)arg4;
- (long long)getGeneralMsgTypeInFavoritesItem:(id)arg1 dataField:(id)arg2;
- (void)reportFavSuccTips:(BOOL)arg1 favItem:(id)arg2;
- (void)reportFilterUnfoldAction:(BOOL)arg1 sessionId:(id)arg2;
- (void)reportQuickFilterAction:(BOOL)arg1 tabType:(long long)arg2 tabName:(id)arg3 sessionId:(id)arg4;
- (void)reportTotalFilterAction:(BOOL)arg1 tabType:(long long)arg2 tabName:(id)arg3 sessionId:(id)arg4;
- (void)reportSearchInputAction:(BOOL)arg1 sessionId:(id)arg2;
- (void)reportSearchReturn:(id)arg1 resultCount:(long long)arg2 queryId:(id)arg3 queryWord:(id)arg4 resMethod:(long long)arg5;
- (void)reportSearchResultClick:(id)arg1 favItem:(id)arg2 queryId:(id)arg3 queryWord:(id)arg4 resMethod:(long long)arg5 originIndex:(long long)arg6 filteredIndex:(long long)arg7;
- (void)reportWeNoteMenuOperation:(unsigned long long)arg1;
- (void)report27798WithTotalSize:(long long)arg1 favData:(id)arg2 msgIDOrFeedID:(id)arg3 actionType:(unsigned int)arg4 actionResult:(unsigned int)arg5 scene:(unsigned int)arg6;
- (void)reportNoteContentSearchWithActionType:(unsigned int)arg1;
- (void)setCurOrientation:(long long)arg1;
- (void)reportNoteLandscape;
- (void)report28587WithIsFromTitleBtn:(BOOL)arg1 result:(unsigned int)arg2;
- (void)reportTingGuideAction:(unsigned int)arg1;
- (void)reportWeNote32080:(unsigned int)arg1 editable:(BOOL)arg2 favId:(unsigned int)arg3 paragraphCount:(unsigned long long)arg4;
- (void)reportFavoriteConflictWithClientItem:(id)arg1 serverItem:(id)arg2 reportType:(unsigned int)arg3;
- (void)reportPinTopFoldAction:(BOOL)arg1 favTopCount:(unsigned long long)arg2;
- (void)reportViewClick:(int)arg1 item:(id)arg2;
- (void)report34070FlutterNoteErrorNoteId:(id)arg1 ErrCode:(int)arg2 ErrMsg:(id)arg3 SessionId:(id)arg4 IsEditable:(BOOL)arg5;
- (void)report34070NoteErrorWithNoteId:(id)arg1 ErrCode:(int)arg2 ErrMsg:(id)arg3 SessionId:(id)arg4 IsEditable:(BOOL)arg5 SubErrCode:(int)arg6 HtmlPathInfo:(id)arg7;
- (void)report24656CheckValidFavWithFavId:(unsigned int)arg1 ret:(int)arg2 message:(id)arg3;
- (void)report24656FixUploadMd5Success:(BOOL)arg1 favId:(unsigned int)arg2 localItemId:(unsigned int)arg3 localDataId:(id)arg4 isThumb:(BOOL)arg5 oldMd5:(id)arg6 newMd5:(id)arg7 oldHeadMd5:(id)arg8 newHeadMd5:(id)arg9 reason:(id)arg10;
- (void)report24656CheckCdnSizeMismatchWithLocalId:(unsigned int)arg1 favId:(unsigned int)arg2 favType:(int)arg3 dataId:(id)arg4 oldDataSize:(unsigned long long)arg5 newDataSize:(unsigned long long)arg6 oldMd5:(id)arg7 newMd5:(id)arg8 oldHeadMd5:(id)arg9 newHeadMd5:(id)arg10 cdnDataUrl:(id)arg11 cdnDataKey:(id)arg12;
- (BOOL)canReportBatchSaveEventWithParams:(id)arg1;
- (void)reportBatchSaveEventWithViewId:(id)arg1 eventId:(id)arg2 params:(id)arg3 additionalKey:(id)arg4 additionalValue:(id)arg5;
- (void)reportBatchSaveProgressTipsExposureWithParams:(id)arg1;
- (void)reportBatchSaveProgressTipsCancelWithParams:(id)arg1;
- (void)reportBatchSavePausedTipsExposureWithReason:(unsigned long long)arg1 params:(id)arg2;
- (void)reportBatchSavePausedTipsConfirmWithReason:(unsigned long long)arg1 params:(id)arg2;
- (void)reportBatchSaveAgainHalfScreenExposureWithParams:(id)arg1;
- (void)reportBatchSaveAgainHalfScreenClick:(unsigned long long)arg1 params:(id)arg2;
- (void)reportBatchSaveFloatingWindowCreatedWithParams:(id)arg1;
- (void)reportBatchSaveFloatingWindowClick:(unsigned long long)arg1 params:(id)arg2;
- (unsigned int)mainPageType;
- (void)setMainPageType:(unsigned int)arg1;
- (BOOL)bOnSearch;
- (unsigned int)entranceScene;
- (void)setEntranceScene:(unsigned int)arg1;
- (id)selectedlocalPosition;
- (void)setSelectedlocalPosition:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (long long)filterType;
- (void)setFilterType:(long long)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (unsigned long long)localResultNum;
- (void)setLocalResultNum:(unsigned long long)arg1;
- (BOOL)needReport;
- (void)setNeedReport:(BOOL)arg1;
- (long long)curOrientation;
- (BOOL)isForceToPortrait;
- (void)setIsForceToPortrait:(BOOL)arg1;
- (BOOL)isSmallImage;
- (void)setIsSmallImage:(BOOL)arg1;
- (unsigned int)resultShowTime;
- (void)setResultShowTime:(unsigned int)arg1;
- (unsigned int)searchTime;
- (void)setSearchTime:(unsigned int)arg1;
- (id)curNoteSessionId;
- (void)setCurNoteSessionId:(id)arg1;
- (id)noteId;
- (void)setNoteId:(id)arg1;
- (unsigned int)viewImageCount;
- (void)setViewImageCount:(unsigned int)arg1;
- (BOOL)isNoteEditable;
- (void)setIsNoteEditable:(BOOL)arg1;
- (void).cxx_destruct;
@end
