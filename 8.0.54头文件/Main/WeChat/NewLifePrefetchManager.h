@interface NewLifePrefetchManager : NSObject <WCFinderRedDotExt>
{
    BOOL _findPageVisible; // +0x8
    NSMutableArray * _configs; // +0x10
    NewLifeMMKVKeyModel * _mmkvModel; // +0x18
}
- (id)initWith:(id)arg1;
- (BOOL)addOrUpdatePrefetchConfig:(id)arg1;
- (id)reddotPrefetchConfig;
- (id)generalPrefetchConfig;
- (void)updateEntranceReddotPrefetchConfig;
- (void)updateEntrancePrefetchConfig;
- (void)tryPrefetchWith:(id)arg1;
- (id)currentConfigWithType:(long long)arg1;
- (void)clearAllConfigs;
- (id)getPrefetchConfigWithType:(long long)arg1 identifierId:(id)arg2;
- (void)updateFindPageVisible:(BOOL)arg1;
- (void)finderRedDotDataReceiveWithPathKey:(id)arg1 isAlreadExistRedDot:(BOOL)arg2;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (id)configs;
- (void)setConfigs:(id)arg1;
- (id)mmkvModel;
- (void)setMmkvModel:(id)arg1;
- (BOOL)findPageVisible;
- (void)setFindPageVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end

