@interface MMFlutterEngineService : MMRootService <MMServiceProtocol>
{
    BOOL _recreateEngineGroup; // +0x8
    MMFlutterEngineGroup * _sharedEngineGroup; // +0x10
    MMFlutterAutoReleaseEngineGroupHelper * _autoReleaseHelper; // +0x18
}
+ (BOOL)reportEngineInfo;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)initFlutterLogger;
- (id)getSharedEngineGroup;
- (int)liveEngineCount;
- (int)foregroundType;
- (void)updateFlutterUIContext;
- (void)onAccountLogout;
- (void)createSharedEngineGroup;
- (void)checkRecreate;
- (void)tryReleaseEngineGroup;
- (void)clearMemoryCache;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (BOOL)enableNewPreRender;
- (id)sharedEngineGroup;
- (void)setSharedEngineGroup:(id)arg1;
- (id)autoReleaseHelper;
- (void)setAutoReleaseHelper:(id)arg1;
- (BOOL)recreateEngineGroup;
- (void)setRecreateEngineGroup:(BOOL)arg1;
- (void).cxx_destruct;
@end

