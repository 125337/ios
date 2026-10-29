@interface ChatBackgroundMgr : MMUserService <MMServiceProtocol, MMPackageDownloadMgrExt>
{
    ChatBackgroundSettings * m_settings; // +0x8
    NSMutableArray * m_serverItems; // +0x10
    NSMutableArray * m_downloadingItems; // +0x18
    NSMutableArray * m_cancelingItems; // +0x20
    NSMutableDictionary * m_downloadTaskBook; // +0x28
    NSString * m_nsCachePathString; // +0x30
    UIImage * m_ocacheImage; // +0x38
    CGRect m_cacheRect; // +0x40
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)setDownadFinishedCID:(long long)arg1 forUsername:(id)arg2;
- (id)getDownloadFinishedUsernameForCID:(long long)arg1;
- (BOOL)createDirIfNotExist:(id)arg1;
- (void)loadAllItems;
- (BOOL)isChatBKZipInBundle;
- (BOOL)installChatUpdatePack:(id)arg1;
- (BOOL)unPackChatBackgroundPackIfNotExist;
- (BOOL)unPackChatBackgroundPackToDir;
- (void)loadUserChatBackgroundSetting;
- (void)saveUserChatBackgroundSetting;
- (id)getBackgroundPreferenceForUsername:(id)arg1;
- (void)setBackgroundPreference:(id)arg1 forUsername:(id)arg2;
- (BOOL)setBackgroundPreferenceByCustomImage:(id)arg1 forUsername:(id)arg2;
- (BOOL)setBackgroundPreferenceByCustomImage:(id)arg1 forUsername:(id)arg2 notify:(BOOL)arg3;
- (void)resetAllPreferece;
- (id)imageInPath:(id)arg1;
- (id)getThumbImageViewForCID:(id)arg1;
- (id)getChatBackgroundViewForUser:(id)arg1;
- (void)addBgMaskToImageView:(id)arg1;
- (void)replaceOrInsertCustomImage:(id)arg1 andUsername:(id)arg2;
- (id)customImageNameFor:(id)arg1;
- (BOOL)isBkPhotoExistInNewPath:(id)arg1;
- (id)getChatBackgroundImagePathForUser:(id)arg1;
- (void)updateListenerData;
- (void)tryUpdateListFromServer;
- (id)getAllItemsList;
- (void)downloadItem:(id)arg1 forUsername:(id)arg2;
- (void)cancelItem:(id)arg1;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageCancelFinish:(id)arg1;
- (void)removeAllCustomImages;
- (void)addServerItem:(id)arg1;
- (void)removeServerItem:(id)arg1;
- (void)addDownloadingItem:(id)arg1;
- (void)removeDownloadingItem:(id)arg1;
- (void)addCancelingItem:(id)arg1;
- (void)removeCancelingItem:(id)arg1;
- (id)usernameKv;
- (id)m_downloadTaskBook;
- (void)setM_downloadTaskBook:(id)arg1;
- (id)m_settings;
- (void)setM_settings:(id)arg1;
- (id)m_serverItems;
- (void)setM_serverItems:(id)arg1;
- (id)m_downloadingItems;
- (void)setM_downloadingItems:(id)arg1;
- (id)m_cancelingItems;
- (void)setM_cancelingItems:(id)arg1;
- (void).cxx_destruct;
@end

