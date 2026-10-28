@interface MMFlutterEngineGroup : NSObject <IMMLanguageMgrExt>
{
    NSString * _engineGroupId; // +0x8
    BOOL _isInUse; // +0x10
    BOOL _needReportRootEngineInfo; // +0x11
    int _allEngineCount; // +0x14
    EngineGroupMemReporter * _memReporter; // +0x18
    MMFlutterEngine * _rootEngine; // +0x20
    long long _createTime; // +0x28
    id /* block */ _engineCountChangeCallback; // +0x30
    NSString * _plugin; // +0x38
    FlutterEngineGroup * _flutterEngineGroup; // +0x40
    FlutterHostEvent * _hostEvent; // +0x48
    NSObject<OS_dispatch_queue> * _engineDestroyQueue; // +0x50
    NSMapTable * _cachedEngines; // +0x58
    NSMutableArray * _externalEngines; // +0x60
    unsigned long long _groupUserCount; // +0x68
    NSString * _subEngineKey; // +0x70
    FlutterMemoryPlugin * _memoryPlugin; // +0x78
}
+ (id)defaultGroup;
+ (int)createdEngineGroupCount;
+ (int)createdEngineCount;
+ (int)createdExternalEngineCount;
- (id)initWithPlugin:(id)arg1 sharedIsolateMode:(BOOL)arg2;
- (id)initWithPlugin:(id)arg1 rootEngineRoute:(id)arg2 rootEngineParams:(id)arg3 sharedIsolateMode:(BOOL)arg4 rootEnginePlugins:(id)arg5;
- (id)engineGroupId;
- (void)releaseEngineGroupImpl;
- (void)dealloc;
- (void)releaseEngineGroup;
- (void)increaseGroupUserCount;
- (void)decreaseGroupUserCount;
- (void)updateFlutterUIContext;
- (void)onAccountLogout;
- (int)liveEngineCount;
- (id)liveEngineRoute;
- (void)reportRootEngineInfo;
- (id)createEngine:(id)arg1;
- (id)makeEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4;
- (id)makeEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4 sharedIsolateMode:(BOOL)arg5;
- (id)makeEngineWithOptions:(id)arg1;
- (void)onLanguageChange;
- (void)applyDarkMode:(id)arg1;
- (void)setupFlutterEngine:(id)arg1 route:(id)arg2;
- (void)setupRootEngine:(id)arg1;
- (void)registerBasicPlugins:(id)arg1;
- (void)registerLiteAppPlugins:(id)arg1;
- (void)onEngineDestroy:(id)arg1;
- (void)onExternalEngineDestroy:(id)arg1;
- (void)sendCountCallback;
- (BOOL)isInUse;
- (void)freeResourcesAggressive:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)afterFreeMem:(BOOL)arg1;
- (id)memReporter;
- (void)setMemReporter:(id)arg1;
- (id)rootEngine;
- (void)setRootEngine:(id)arg1;
- (int)allEngineCount;
- (void)setAllEngineCount:(int)arg1;
- (long long)createTime;
- (void)setCreateTime:(long long)arg1;
- (id /* block */)engineCountChangeCallback;
- (void)setEngineCountChangeCallback:(id /* block */)arg1;
- (void)setIsInUse:(BOOL)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)flutterEngineGroup;
- (void)setFlutterEngineGroup:(id)arg1;
- (BOOL)needReportRootEngineInfo;
- (void)setNeedReportRootEngineInfo:(BOOL)arg1;
- (id)hostEvent;
- (void)setHostEvent:(id)arg1;
- (id)engineDestroyQueue;
- (void)setEngineDestroyQueue:(id)arg1;
- (id)cachedEngines;
- (void)setCachedEngines:(id)arg1;
- (id)externalEngines;
- (void)setExternalEngines:(id)arg1;
- (unsigned long long)groupUserCount;
- (void)setGroupUserCount:(unsigned long long)arg1;
- (id)subEngineKey;
- (void)setSubEngineKey:(id)arg1;
- (id)memoryPlugin;
- (void)setMemoryPlugin:(id)arg1;
- (void).cxx_destruct;
@end
