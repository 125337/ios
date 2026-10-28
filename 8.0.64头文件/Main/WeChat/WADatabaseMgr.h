@interface WADatabaseMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _db; // +0x8
    WCTTable * _tableWeAppInfo; // +0x10
    WCTTable * _tableWeAppModuleInfo; // +0x18
    WCTTable * _tableEncryptWeAppInfo; // +0x20
    WCTTable * _tablePermissionInfo; // +0x28
    WCTTable * _tablePluginPermissionInfo; // +0x30
    WCTTable * _tableABTestPermissionInfo; // +0x38
    WCTTable * _tableContact; // +0x40
    WCTTable * _tableBizAttrSyncBuffer; // +0x48
    WCTTable * _tableBackUpContact; // +0x50
    WCTTable * _tableConfigInfo; // +0x58
    WCTTable * _tableWeAppListItem; // +0x60
    WCTTable * _tableWeAppStarItem; // +0x68
    WCTTable * _tableWeAppCommonUseItem; // +0x70
    WCTTable * _tableMainFrameTaskItem; // +0x78
    WCTTable * _tableWeAppUsageInfo; // +0x80
    WCTTable * _tableContactRemoteVersion; // +0x88
    WCTTable * _tableWeAppDecryptKeyInfo; // +0x90
    WCTTable * _tableIssueLaunchPermissionInfo; // +0x98
    WCTTable * _tableBlockCgiInfo; // +0xa0
    WCTTable * _tablePrefetchSquenceInfo; // +0xa8
    WCTTable * _tableUpdatableMsgInfo; // +0xb0
    WCTTable * _tablePeriodFetchInfo; // +0xb8
    WCTTable * _tablePeriodFetchToken; // +0xc0
    WCTTable * _tableWeAppPluginCodeUsageLru; // +0xc8
    WCTTable * _tableWeAppRenderCacheInfo; // +0xd0
    WCTTable * _tableWeAppPluginVersionInfo; // +0xd8
    WCTTable * _tableExptPermissionInfo; // +0xe0
    WCTTable * _tableNewXmlPushMsg; // +0xe8
}
+ (id)getInfoDataWithTable:(id)arg1 primaryKey:(id)arg2;
+ (BOOL)insertOrUpdateInfoDataWithTable:(id)arg1 infoData:(id)arg2;
+ (BOOL)deleteInfoDataWithTable:(id)arg1 where:(const void *)arg2;
- (id)getRenderCacheInfoWithUsername:(id)arg1 debugType:(unsigned int)arg2 underAppVersion:(unsigned int)arg3;
- (id)getRenderCacheInfoWithUsername:(id)arg1 debugType:(unsigned int)arg2;
- (id)getRenderCacheInfoWithPubVersionNot:(id)arg1;
- (BOOL)insertOrUpdateRenderCacheInfo:(id)arg1;
- (BOOL)updateRenderCacheInfoOnLastAccessTime:(id)arg1;
- (BOOL)deleteRenderCacheInfo:(id)arg1;
- (BOOL)deleteRenderCacheInfoForUsername:(id)arg1 debugType:(unsigned int)arg2 underAppVersion:(unsigned int)arg3;
- (BOOL)deleteAllRenderCacheInfoForUsername:(id)arg1 debugType:(unsigned int)arg2;
- (BOOL)deleteAllRenderCacheInfoIfPubVersionNot:(id)arg1;
- (BOOL)deleteAllRenderCacheInfo;
- (id)getAllRenderCacheInfoOrderByLastAccessTimeAscending;
- (BOOL)mergeAppStarItems:(id)arg1;
- (BOOL)mergeAppCommonUseItems:(id)arg1;
- (BOOL)mergeAppListItems:(id)arg1 updateTimeOfLastItemAfterMerge:(unsigned int *)arg2;
- (unsigned int)getAppListItemCount;
- (id)getAllAppListItem;
- (id)getAllAppListItemOrderByUpdateTime;
- (id)getAllAppListItemOrderByUpdateTimeIsIncludeStar:(BOOL)arg1;
- (id)getLatestAppListItemWithCount:(unsigned int)arg1;
- (id)getLatestAppListItemWithCount:(unsigned int)arg1 includeStar:(BOOL)arg2;
- (id)getLatestAppListItemOverUpdateTime:(unsigned int)arg1;
- (id)getLatestAppListItemOverUpdateTime:(unsigned int)arg1 includeStar:(BOOL)arg2;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned int)arg1 minUpdateTime:(unsigned int)arg2;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned int)arg1 minUpdateTime:(unsigned int)arg2 includeStar:(BOOL)arg3;
- (id)getAppListItemByUsername:(id)arg1 appType:(unsigned int)arg2;
- (id)getAllAppListItemByUsername:(id)arg1;
- (id)getCurrentAppListItemByLimit:(int)arg1;
- (BOOL)insertOrUpdateAppListItem:(id)arg1;
- (BOOL)updateAppListItemOnUpdateTime:(id)arg1;
- (BOOL)updateAppListItemOnStarState:(id)arg1;
- (BOOL)deleteAppListItemByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (BOOL)deleteAllAppListItem;
- (BOOL)isItemStared:(id)arg1;
- (unsigned int)getAppStarItemCount;
- (id)getAllAppStarItem;
- (id)getAllAppStarItemOrderBySortFactor;
- (id)getAppStarItemWithMinSortFactor;
- (id)getAppStarItemWithMaxSortFactor;
- (id)getAllAppStarItemOrderByUpdateTime;
- (id)getAppStarItemByUsername:(id)arg1 appType:(unsigned int)arg2;
- (id)getAllAppStarItemByUsername:(id)arg1;
- (BOOL)insertOrUpdateAppStarItem:(id)arg1;
- (BOOL)insertAppStarItemList:(id)arg1;
- (BOOL)deleteAppStarItemByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (BOOL)deleteAllAppStarItem;
- (BOOL)insertAppCommonUseItemList:(id)arg1;
- (BOOL)deleteAllCommonUseItem;
- (id)getAllCommonUseWeAppItems;
- (unsigned int)getAppCommonUseItemCount;
- (id)getContactWithKey:(id)arg1 type:(unsigned long long)arg2;
- (id)getContact:(id)arg1;
- (id)getContactWithAppId:(id)arg1;
- (id)getAllFocusContact;
- (id)getAllNoFocusContact;
- (id)getAllContact;
- (BOOL)inserOrUpdateContactList:(id)arg1;
- (BOOL)deleteContactList:(id)arg1;
- (BOOL)modifyWxAppOpt:(id)arg1 bitMask:(unsigned int)arg2 bitValue:(unsigned int)arg3;
- (BOOL)modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (BOOL)modifyLastLaunchTime:(unsigned int)arg1 withUserName:(id)arg2;
- (id)contactFromDBContact:(id)arg1;
- (id)dbContactWithContact:(id)arg1;
- (id)getBizAttrSyncBuffer:(id)arg1;
- (BOOL)setBizAttrSyncBufferList:(id)arg1;
- (BOOL)clearBizAttrSyncBufferList:(id)arg1;
- (id)getLocalBackUpContactWithUsername:(id)arg1;
- (id)getLocalBackUpContactWithAppid:(id)arg1;
- (BOOL)saveLocalBackUpContact:(id)arg1;
- (BOOL)deleteLocalBackUpContactWithUsername:(id)arg1;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1 ignoreUsername:(id)arg2 debugMode:(unsigned int)arg3;
- (BOOL)insertOrUpdateMainFrameTaskItem:(id)arg1;
- (BOOL)deleteMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned int)arg2;
- (BOOL)deleteMainFrameTaskItemBeforeUpdateTime:(unsigned int)arg1;
- (id)getLatestAppUsageInfoListOverLastOpenTime:(unsigned int)arg1 isNeedDebugType:(BOOL)arg2 limit:(unsigned int)arg3;
- (id)getUsageInfoWithUsrName:(id)arg1;
- (id)getUsageInfoWithUsrName:(id)arg1 appType:(unsigned int)arg2;
- (BOOL)insertOrUpdateAppUsageInfo:(id)arg1;
- (BOOL)deleteAppUsageInfoByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (BOOL)deleteAppCommonUseInfoByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (BOOL)deleteAppUsageInfoBeforeTime:(unsigned int)arg1;
- (id)getPeriodFetchInfo:(id)arg1;
- (unsigned int)getPeriodFetchInfoLastUpdateTime:(id)arg1;
- (id)getAllPeriodFetchBriefInfo;
- (BOOL)insertOrUpdatePeriodFetchInfo:(id)arg1 FetchData:(id)arg2;
- (BOOL)deletePeriodFetchInfo:(id)arg1;
- (BOOL)deleteAllPeriodFetchInfoBefore:(unsigned int)arg1;
- (BOOL)insertOrUpdatePeriodFetchToken:(id)arg1 Token:(id)arg2;
- (id)getPeriodFetchToken:(id)arg1;
- (BOOL)deletePeriodFetchToken:(id)arg1;
- (BOOL)deleteAllPeriodFetchTokenBefore:(unsigned int)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getAllInfoData;
- (id)getLeastRecentlyUsedInfoDataWithCount:(unsigned int)arg1;
- (id)getAppInfoByAppID:(id)arg1 serverPackageType:(unsigned int)arg2 moduleNameIfHave:(id)arg3;
- (id)getAppInfoByAppID:(id)arg1;
- (id)getAppInfoByAppID:(id)arg1 packageSum:(id)arg2;
- (id)getAppInfoByTemplateID:(unsigned int)arg1 packageSum:(id)arg2;
- (id)getOriginAppInfoByAppID:(id)arg1;
- (BOOL)insertOrUpdateAppInfo:(id)arg1;
- (BOOL)deleteAppInfoByAppID:(id)arg1;
- (BOOL)deleteAppInfoInAppIDList:(id)arg1;
- (BOOL)deleteAppInfoByAppIDAndPackageType:(id)arg1 packageType:(unsigned long long)arg2;
- (id)appIdPrimaryKeyWithAppId:(id)arg1 suffix:(id)arg2;
- (BOOL)insertOrUpdatePluginCodeAppInfo:(id)arg1;
- (id)getPluginCodeAppInfo:(id)arg1;
- (id)getPluginCodeAppInfo:(id)arg1 packageSum:(id)arg2;
- (BOOL)deletePluginCodeInfoByAppIDAndVersion:(id)arg1 version:(unsigned long long)arg2;
- (BOOL)deletePluginCodeInfoInAppidList:(id)arg1;
- (BOOL)deletePluginCodeInfoByAppID:(id)arg1;
- (BOOL)insertOrUpdatePluginCodeUsage:(id)arg1;
- (BOOL)deletePluginCodeLruInfoByAppIDAndVersion:(id)arg1 version:(unsigned long long)arg2;
- (id)getLeastRecentlyUsedPluginCodeInfo;
- (id)getPluginCodeUsageInfoByAppIDAndVersion:(id)arg1 version:(unsigned int)arg2;
- (id)getAllEncryptInfoData;
- (id)appIdPrimaryKeyWithAppId:(id)arg1 encryptTypeString:(id)arg2 version:(unsigned int)arg3;
- (id)getEncryptAppInfoByAppID:(id)arg1 encryptType:(unsigned long long)arg2 version:(unsigned int)arg3;
- (BOOL)insertOrUpdateEncryptAppInfo:(id)arg1;
- (BOOL)deleteEncryptAppInfoByAppID:(id)arg1 encryptType:(unsigned long long)arg2 version:(unsigned int)arg3;
- (id)appIdPrimaryKeyWithAppId:(id)arg1 moduleName:(id)arg2;
- (id)getAllModuleInfoData;
- (id)getAppModuleInfoByAppID:(id)arg1 moduleName:(id)arg2;
- (id)getAppModuleInfoByAppID:(id)arg1 packageSum:(id)arg2;
- (id)getAppModuleInfoByTemplateID:(unsigned int)arg1 packageSum:(id)arg2;
- (id)getAllAppModuleInfoByAppID:(id)arg1;
- (BOOL)insertOrUpdateAppModuleInfo:(id)arg1;
- (BOOL)deleteAppModuleInfoByAppID:(id)arg1;
- (BOOL)deleteAppModuleInfoInAppidList:(id)arg1;
- (BOOL)deleteAppModuleInfoByAppID:(id)arg1 moduleName:(id)arg2;
- (BOOL)deleteAppModuleInfoByInfoDataArr:(id)arg1;
- (id)getPluginPermissionInfoByPluginID:(id)arg1;
- (BOOL)setPluginPermissionInfo:(id)arg1;
- (BOOL)deletePluginPermissionInfoByAppID:(id)arg1;
- (id)getABTestPermissionInfoByappID:(id)arg1;
- (id)getABTestPermissionInfoByappID:(id)arg1 appType:(int)arg2 versionType:(int)arg3;
- (BOOL)setABTestPermissionInfo:(id)arg1;
- (BOOL)deleteABTestPermissionInfoByAppID:(id)arg1;
- (id)getPermissionInfoWithAppID:(id)arg1;
- (id)getPermissionInfoWithUsername:(id)arg1;
- (BOOL)setPermissionInfo:(id)arg1;
- (BOOL)deletePermissionInfoWithAppID:(id)arg1;
- (id)getIssueLaunchPermissionInfoWithAppID:(id)arg1;
- (id)getIssueLaunchPermissionInfoWithUsername:(id)arg1;
- (BOOL)setIssueLaunchPermissionInfo:(id)arg1;
- (BOOL)deleteIssueLaunchPermissionInfoWithAppID:(id)arg1;
- (id)getConfigInfoByAppID:(id)arg1 andType:(unsigned int)arg2;
- (BOOL)insertOrUpdateConfigInfo:(id)arg1;
- (BOOL)deleteConfigInfoByAppID:(id)arg1;
- (id)getContactRemoteVersionByUsername:(id)arg1;
- (BOOL)insertOrUpdateContactRemoteVersion:(id)arg1;
- (BOOL)deleteContactRemoteVersionByUsername:(id)arg1;
- (id)getDecryptInfoByAppID:(id)arg1 appVersion:(unsigned long long)arg2;
- (BOOL)insertOrUpdateDecryptKeyInfo:(id)arg1;
- (BOOL)deleteDecryptKeyInfoByAppID:(id)arg1 appVersion:(unsigned long long)arg2;
- (id)getBlockCgiInfoWithAppID:(id)arg1;
- (id)getBlockCgiInfoWithUsername:(id)arg1;
- (BOOL)insertOrUpdateBlockCgiInfo:(id)arg1;
- (BOOL)deleteBlockCgiInfoWithAppID:(id)arg1;
- (id)cmdIdPrimaryKeyWithAppId:(id)arg1 cmdType:(unsigned int)arg2 cmdKey:(id)arg3;
- (id)getPrefetchSequenceInfoWithAppID:(id)arg1 cmdType:(unsigned int)arg2 cmdKey:(id)arg3;
- (BOOL)insertOrUpdatePrefetchSequenceInfo:(id)arg1;
- (BOOL)deletePrefetchSequenceInfoWithAppID:(id)arg1 cmdType:(unsigned int)arg2 cmdKey:(id)arg3;
- (BOOL)deletePrefetchSequenceInfoWithAppID:(id)arg1;
- (id)getUpdatableMsgInfoWithShareKey:(id)arg1;
- (BOOL)setUpdatableMsgInfo:(id)arg1;
- (BOOL)deleteUpdatableMsgInfoWithShareKey:(id)arg1;
- (id)getAllPluginVersionInfo;
- (id)getPluginVersionInfoWithAppId:(id)arg1 version:(unsigned long long)arg2;
- (id)getPluginVersionInfosWithAppId:(id)arg1;
- (BOOL)insertOrUpdatePluginVersionInfo:(id)arg1;
- (BOOL)deletePluginVersionInfoByAppId:(id)arg1 version:(unsigned long long)arg2;
- (id)getExptPermissionInfoWithAppID:(id)arg1;
- (BOOL)insertOrUpdateExptPermissionInfo:(id)arg1;
- (BOOL)deleteExptPermissionInfoWithAppID:(id)arg1;
- (id)getNewXmlPushMsgsWithAppID:(id)arg1;
- (id)getNewXmlPushMsgWithAppID:(id)arg1 busiType:(unsigned int)arg2;
- (BOOL)insertOrUpdateNewXmlPushMsg:(id)arg1;
- (BOOL)deleteNewXmlPushMsgWithAppID:(id)arg1;
- (BOOL)deleteNewXmlPushMsgWithAppID:(id)arg1 busiType:(unsigned int)arg2;
- (void)openDB;
- (void)setupTable;
- (void)closeDB;
- (id)dbPath;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)willRecoverDatabase;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableWeAppInfo;
- (void)setTableWeAppInfo:(id)arg1;
- (id)tableWeAppModuleInfo;
- (void)setTableWeAppModuleInfo:(id)arg1;
- (id)tableEncryptWeAppInfo;
- (void)setTableEncryptWeAppInfo:(id)arg1;
- (id)tablePermissionInfo;
- (void)setTablePermissionInfo:(id)arg1;
- (id)tablePluginPermissionInfo;
- (void)setTablePluginPermissionInfo:(id)arg1;
- (id)tableABTestPermissionInfo;
- (void)setTableABTestPermissionInfo:(id)arg1;
- (id)tableContact;
- (void)setTableContact:(id)arg1;
- (id)tableBizAttrSyncBuffer;
- (void)setTableBizAttrSyncBuffer:(id)arg1;
- (id)tableBackUpContact;
- (void)setTableBackUpContact:(id)arg1;
- (id)tableConfigInfo;
- (void)setTableConfigInfo:(id)arg1;
- (id)tableWeAppListItem;
- (void)setTableWeAppListItem:(id)arg1;
- (id)tableWeAppStarItem;
- (void)setTableWeAppStarItem:(id)arg1;
- (id)tableWeAppCommonUseItem;
- (void)setTableWeAppCommonUseItem:(id)arg1;
- (id)tableMainFrameTaskItem;
- (void)setTableMainFrameTaskItem:(id)arg1;
- (id)tableWeAppUsageInfo;
- (void)setTableWeAppUsageInfo:(id)arg1;
- (id)tableContactRemoteVersion;
- (void)setTableContactRemoteVersion:(id)arg1;
- (id)tableWeAppDecryptKeyInfo;
- (void)setTableWeAppDecryptKeyInfo:(id)arg1;
- (id)tableIssueLaunchPermissionInfo;
- (void)setTableIssueLaunchPermissionInfo:(id)arg1;
- (id)tableBlockCgiInfo;
- (void)setTableBlockCgiInfo:(id)arg1;
- (id)tablePrefetchSquenceInfo;
- (void)setTablePrefetchSquenceInfo:(id)arg1;
- (id)tableUpdatableMsgInfo;
- (void)setTableUpdatableMsgInfo:(id)arg1;
- (id)tablePeriodFetchInfo;
- (void)setTablePeriodFetchInfo:(id)arg1;
- (id)tablePeriodFetchToken;
- (void)setTablePeriodFetchToken:(id)arg1;
- (id)tableWeAppPluginCodeUsageLru;
- (void)setTableWeAppPluginCodeUsageLru:(id)arg1;
- (id)tableWeAppRenderCacheInfo;
- (void)setTableWeAppRenderCacheInfo:(id)arg1;
- (id)tableWeAppPluginVersionInfo;
- (void)setTableWeAppPluginVersionInfo:(id)arg1;
- (id)tableExptPermissionInfo;
- (void)setTableExptPermissionInfo:(id)arg1;
- (id)tableNewXmlPushMsg;
- (void)setTableNewXmlPushMsg:(id)arg1;
- (void).cxx_destruct;
@end
