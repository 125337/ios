@interface MMLiveBackGroundImageResourceManager : MMUserService <MMLiveStorageCleanupExt, MMServiceProtocol>
{
    BOOL _isLoadToDisk; // +0x8
    NSMutableDictionary * _backgroundImageCaches; // +0x10
    NSMutableSet * _loadingSet; // +0x18
    NSObject<OS_dispatch_queue> * _cacheQueue; // +0x20
    MMTimer * _memoryCacheManagementTimer; // +0x28
    NSString * _unarchivePath; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cleanResourcesCaches;
- (id)getPixelBuffWithType:(unsigned long long)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)dealloc;
- (id)getBackgroundImagePath;
- (void)performRecurrentMemoryCacheManagement;
- (void)updateCachesWith:(id)arg1 imageIdentifier:(id)arg2;
- (void)loadBackgroundToDisk;
- (void)loadBackgroundToCache:(id)arg1;
- (id)getImageIdentifier:(unsigned long long)arg1;
- (void)willBeginStorageCleanupInScenario:(unsigned long long)arg1 withContext:(id)arg2;
- (id)backgroundImageCaches;
- (void)setBackgroundImageCaches:(id)arg1;
- (id)loadingSet;
- (void)setLoadingSet:(id)arg1;
- (id)cacheQueue;
- (void)setCacheQueue:(id)arg1;
- (id)memoryCacheManagementTimer;
- (void)setMemoryCacheManagementTimer:(id)arg1;
- (BOOL)isLoadToDisk;
- (void)setIsLoadToDisk:(BOOL)arg1;
- (id)unarchivePath;
- (void)setUnarchivePath:(id)arg1;
- (void).cxx_destruct;
@end
