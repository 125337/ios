@interface KvReportAction24123 : NSObject
{
    int _tabType; // +0x8
    int _pullType; // +0xc
    unsigned int _entranceRedDotScene; // +0x10
    int _entranceRedDotPreloadFlag; // +0x14
    unsigned int _refreshPrefetchStatus; // +0x18
    unsigned int _innerVersion; // +0x1c
    NSString * _opType; // +0x20
    NSString * _preloadSource; // +0x28
    NSString * _entranceRedDotObjectId; // +0x30
    NSString * _serverConfig; // +0x38
    NSString * _clearCacheSource; // +0x40
}
+ (id)action;
- (void)perform;
- (id)opType;
- (void)setOpType:(id)arg1;
- (id)preloadSource;
- (void)setPreloadSource:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)pullType;
- (void)setPullType:(int)arg1;
- (id)entranceRedDotObjectId;
- (void)setEntranceRedDotObjectId:(id)arg1;
- (unsigned int)entranceRedDotScene;
- (void)setEntranceRedDotScene:(unsigned int)arg1;
- (int)entranceRedDotPreloadFlag;
- (void)setEntranceRedDotPreloadFlag:(int)arg1;
- (id)serverConfig;
- (void)setServerConfig:(id)arg1;
- (unsigned int)refreshPrefetchStatus;
- (void)setRefreshPrefetchStatus:(unsigned int)arg1;
- (id)clearCacheSource;
- (void)setClearCacheSource:(id)arg1;
- (unsigned int)innerVersion;
- (void)setInnerVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
