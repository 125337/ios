@interface FavFileDetailLogicController : FileDetailLogicController <IFavCdnDownloadMgrExt, FavForwardLogicDelegate, WCActionSheetDelegate, IFavoritesExt, WCFacadeExt>
{
    BOOL _disableAutoDownload; // +0x8
    FavoritesItem * _favItem; // +0x10
    FavoritesItemDataField * _favData; // +0x18
}
- (id)initWithFavItem:(id)arg1 fileData:(id)arg2;
- (id)initWithTask:(id)arg1;
- (BOOL)isDownloading;
- (BOOL)isMinimizeEnable;
- (id)getMinimizeTaskData;
- (id)getHandOffItem;
- (id)getMinimizeKey;
- (BOOL)restoreDataFromMinimizeTaskData:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)startDownload;
- (unsigned long long)GetFileSize;
- (id)GetFileName;
- (id)GetFilePath;
- (unsigned int)GetPreviewType;
- (id)getFileExt;
- (void)stopDownload;
- (BOOL)canAddToFavorites;
- (void)onForwardToContact:(id)arg1;
- (BOOL)OnPreviewFile:(unsigned int)arg1;
- (void)customizeActionSheetInFirstRow:(id)arg1 secondRow:(id)arg2;
- (BOOL)performCustomizeAction:(id)arg1;
- (void)OnOpenByApp:(id)arg1;
- (void)onFavTagEditBegin:(int)arg1;
- (id)getMusicLocalFileDataUnit;
- (BOOL)autoDownload;
- (void)OnFavCdnDownload:(id)arg1 TotalLength:(unsigned long long)arg2 FinishLength:(unsigned long long)arg3;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnUpdateItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnFileDelete;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (id)getFavForawrdViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)stopDownloadAppMsgByUser;
- (BOOL)canShowFileSource;
- (void)showFileSource:(id)arg1;
- (void)onFileSourceExpose:(id)arg1;
- (id)favItem;
- (void)setFavItem:(id)arg1;
- (id)favData;
- (void)setFavData:(id)arg1;
- (BOOL)disableAutoDownload;
- (void)setDisableAutoDownload:(BOOL)arg1;
- (void).cxx_destruct;
@end
