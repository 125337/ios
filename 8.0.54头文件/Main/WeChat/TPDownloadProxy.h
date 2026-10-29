@interface TPDownloadProxy : NSObject
{
    int _serviceType; // +0x8
    NSMutableDictionary * _storageMap; // +0x10
}
+ (void)makeSureLocalServiceActiveWithCompletion:(id /* block */)arg1;
- (id)initWithServiceType:(int)arg1;
- (int)initDownloadProxy:(id)arg1;
- (int)deinit;
- (void)setLogDelegate:(id)arg1;
- (void)setProxyDelegate:(id)arg1;
- (int)startPlay:(id)arg1 downloadParam:(id)arg2 delegate:(id)arg3;
- (int)startClipPlay:(id)arg1 clipNo:(int)arg2 delegate:(id)arg3;
- (BOOL)setClipInfo:(int)arg1 clipNo:(int)arg2 clipFileId:(id)arg3 downloadParam:(id)arg4;
- (id)getPlayUrl:(int)arg1 urlType:(int)arg2;
- (id)getClipPlayUrl:(int)arg1 clipNo:(int)arg2;
- (id)getPlayErrorCodeStr:(int)arg1;
- (int)checkResourceStatus:(id)arg1 resourceID:(id)arg2 fileFormat:(int)arg3;
- (long long)getResourceSize:(id)arg1 resourceID:(id)arg2;
- (void)stopPlay:(int)arg1;
- (int)pauseDownload:(int)arg1;
- (int)resumeDownload:(int)arg1;
- (int)startPreload:(id)arg1 downloadParam:(id)arg2 delegate:(id)arg3;
- (int)startClipPreload:(id)arg1 clipNo:(int)arg2 delegate:(id)arg3;
- (void)stopPreload:(int)arg1;
- (void)setUserData:(id)arg1 value:(id)arg2;
- (void)pushEvent:(long long)arg1;
- (int)startOfflineDownload:(id)arg1 downloadParam:(id)arg2 delegate:(id)arg3;
- (int)startClipOfflineDownload:(id)arg1 clipCount:(int)arg2 delegate:(id)arg3;
- (void)startTask:(int)arg1;
- (int)stopOfflineDownload:(int)arg1;
- (int)removeStorageCache:(id)arg1;
- (int)clearCache:(id)arg1 resourceID:(id)arg2 mode:(unsigned long long)arg3;
- (void)updateStoragePath:(id)arg1;
- (void)setMaxStorageSizeMB:(long long)arg1;
- (void)setPlayState:(int)arg1 state:(int)arg2;
- (void)setPlayer:(int)arg1 ResourceloaderProxyCallback:(void *)arg2;
- (void)updateTaskInfo:(int)arg1 key:(id)arg2 value:(id)arg3;
- (int)serviceType;
- (void)setServiceType:(int)arg1;
- (id)storageMap;
- (void)setStorageMap:(id)arg1;
- (void).cxx_destruct;
@end

