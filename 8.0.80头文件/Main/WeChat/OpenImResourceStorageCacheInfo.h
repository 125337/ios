@interface OpenImResourceStorageCacheInfo : MMObject
{
    NSMutableDictionary * _dictAppId2ContactResources; // +0x8
    NSMutableDictionary * _dictAppId2LastUpdateTime; // +0x10
}
- (id)init;
- (id)dictAppId2ContactResources;
- (void)setDictAppId2ContactResources:(id)arg1;
- (id)dictAppId2LastUpdateTime;
- (void)setDictAppId2LastUpdateTime:(id)arg1;
- (void).cxx_destruct;
@end
