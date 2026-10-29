@interface QOfflineMap : NSObject
{
    NSCache * _offlineConfigCache; // +0x8
    NSString * _dirNew; // +0x10
    NSString * _domain; // +0x18
    QConfigManager * _configManager; // +0x20
    QConfigPreference * _configPreference; // +0x28
    NSString * _offlineConfigPath; // +0x30
    NSMutableArray * _itemArray; // +0x38
    QOfflineMapDownloader * _downloader; // +0x40
}
+ (id)sharedOfflineMap;
+ (BOOL)offlineMapEnable;
- (id)init;
- (void)setUpConfigManager;
- (void)downloadItem:(id)arg1 callback:(id /* block */)arg2;
- (id)items;
- (void)cancelDownload:(id)arg1;
- (id)downloadingItems;
- (void)deleteItem:(id)arg1;
- (void)reloadItems:(id /* block */)arg1;
- (void)createOfflineCitiesArray;
- (long long)compareVersionNumber:(id)arg1 withLocalVersionDict:(id)arg2;
- (id)getConfigVersionDict;
- (id)getCityListArray:(id)arg1 withDictionary:(id)arg2;
- (id)getOfflineDisplayName:(id)arg1 withInfoDict:(id)arg2;
- (id)getOfflineItemDownloadURL:(id)arg1;
- (id)getOfflineMapCitiesDictionary;
- (id)getOfflineMapConfigPath:(id)arg1;
- (id)getCDNConfigCityList;
- (id)getOfflineItemLocalVersionPlist;
- (void)createOfflineMapCacheDirectory;
- (void)updateLocalVersionPlist:(id)arg1 withDictionary:(id)arg2;
- (id)assembleVersionDictionary:(id)arg1;
- (id)createKCOfflineItem:(id)arg1 withInfo:(id)arg2;
- (id)createQOfflineItem:(id)arg1 withInfo:(id)arg2;
- (void)setOfflineMapStatus:(BOOL)arg1;
- (id)offlineConfigCache;
- (void)setOfflineConfigCache:(id)arg1;
- (id)dirNew;
- (void)setDirNew:(id)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)configManager;
- (void)setConfigManager:(id)arg1;
- (id)configPreference;
- (void)setConfigPreference:(id)arg1;
- (id)offlineConfigPath;
- (void)setOfflineConfigPath:(id)arg1;
- (id)itemArray;
- (void)setItemArray:(id)arg1;
- (id)downloader;
- (void)setDownloader:(id)arg1;
- (void).cxx_destruct;
@end

