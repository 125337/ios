@interface WCFinderWordingIconManager : NSObject
{
    BOOL _enableStoreToLocal; // +0x8
    id /* block */ _downloadActionBlock; // +0x10
    NSString * _currentVersion; // +0x18
    NSLock * _storeLock; // +0x20
    FinderObjectExtInfoList * _pendingSaveConfig; // +0x28
    unsigned long long _compressLimitSize; // +0x30
    long long _lastSaveTime; // +0x38
    NSDictionary * _defaultWordingConfigMap; // +0x40
    NSMutableDictionary * _feedContentWordingConfigMap; // +0x48
    id /* block */ _serverConfigSetter; // +0x50
    id /* block */ _globalConfigSetter; // +0x58
    WCFinderGlobalWordingIconConfig * _globalConfig; // +0x60
    WCFinderGlobalWordingIconConfig * _serverGlobalConfig; // +0x68
    NSMapTable * _imageCacheMap; // +0x70
    WCFinderDynamicIconFetcher * _iconFetcher; // +0x78
    NSMutableDictionary * _dynamicImageMap; // +0x80
    NSMutableDictionary * _dynamicKeyedImageMap; // +0x88
    NSMutableDictionary * _globalItems; // +0x90
    NSMutableDictionary * _dynamicPageMap; // +0x98
    NSMutableDictionary * _iconUrlDefaultDic; // +0xa0
}
+ (void)configIconURLKey:(id)arg1 lightURL:(id)arg2 darkURL:(id)arg3 containerDic:(id)arg4;
+ (void)configIconUrlDefaultDic:(id)arg1;
- (id)init;
- (id)initWithEnableLocal:(BOOL)arg1 compressLimitSize:(unsigned long long)arg2;
- (void)prepareConfigs;
- (id)wordingConfigForFeedContentType:(int)arg1;
- (id)defaultWordingConfigForFeedContentType:(int)arg1;
- (void)updateWithSyncPbExtInfo:(id)arg1;
- (void)updateWithSyncPbExtInfo:(id)arg1 fromStorage:(BOOL)arg2;
- (void)saveConfig:(id)arg1;
- (void)loadConfigFromStorage:(id /* block */)arg1;
- (id)iconUrlDefaultDic;
- (id)wordingForSelector:(SEL)arg1;
- (id)wordingValueForFeedContentType:(int)arg1 wordingIdentify:(SEL)arg2;
- (id)richTextForId:(int)arg1 contentType:(int)arg2;
- (id)textWithKey:(id)arg1;
- (id)richTextWithKey:(id)arg1;
- (id)pagPathWithKey:(id)arg1;
- (id)pageDynamicPageItemWithKey:(id)arg1;
- (id)fetchDynamicIconWithArgs:(id)arg1;
- (id)fetchGlobalDynamicIconWithArgs:(id)arg1;
- (id)fetchDynamicIconWithKey:(id)arg1 color:(id)arg2 size:(CGSize)arg3;
- (id)fetchNamedIdDynamicIconWithArgs:(id)arg1;
- (id)fetchDynamicIconWithIconName:(id)arg1 args:(id)arg2 defaultIconSVGName:(id)arg3;
- (id)fetchIconConfigWithIdentifier:(SEL)arg1;
- (id)fetchURLIconConfigWithIdentifier:(SEL)arg1;
- (id)getValueForConfig:(id)arg1 withIdentify:(SEL)arg2 classType:(Class)arg3;
- (id)getValueForObject:(id)arg1 withIdentify:(SEL)arg2 classType:(Class)arg3;
- (id)dynamicIdIconUrl:(long long)arg1;
- (id /* block */)downloadActionBlock;
- (void)setDownloadActionBlock:(id /* block */)arg1;
- (BOOL)enableStoreToLocal;
- (void)setEnableStoreToLocal:(BOOL)arg1;
- (id)currentVersion;
- (void)setCurrentVersion:(id)arg1;
- (id)storeLock;
- (void)setStoreLock:(id)arg1;
- (id)pendingSaveConfig;
- (void)setPendingSaveConfig:(id)arg1;
- (unsigned long long)compressLimitSize;
- (void)setCompressLimitSize:(unsigned long long)arg1;
- (long long)lastSaveTime;
- (void)setLastSaveTime:(long long)arg1;
- (id)defaultWordingConfigMap;
- (void)setDefaultWordingConfigMap:(id)arg1;
- (id)feedContentWordingConfigMap;
- (void)setFeedContentWordingConfigMap:(id)arg1;
- (id /* block */)serverConfigSetter;
- (void)setServerConfigSetter:(id /* block */)arg1;
- (id /* block */)globalConfigSetter;
- (void)setGlobalConfigSetter:(id /* block */)arg1;
- (id)globalConfig;
- (void)setGlobalConfig:(id)arg1;
- (id)serverGlobalConfig;
- (void)setServerGlobalConfig:(id)arg1;
- (id)imageCacheMap;
- (void)setImageCacheMap:(id)arg1;
- (id)iconFetcher;
- (void)setIconFetcher:(id)arg1;
- (id)dynamicImageMap;
- (void)setDynamicImageMap:(id)arg1;
- (id)dynamicKeyedImageMap;
- (void)setDynamicKeyedImageMap:(id)arg1;
- (id)globalItems;
- (void)setGlobalItems:(id)arg1;
- (id)dynamicPageMap;
- (void)setDynamicPageMap:(id)arg1;
- (void)setIconUrlDefaultDic:(id)arg1;
- (void).cxx_destruct;
@end
