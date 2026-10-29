@interface BizAttrSyncBufferCacheItem : MMObject <PBCoding>
{
    NSString * _username; // +0x8
    unsigned long long _lastUpdateTime; // +0x10
    NSData * _syncBuf; // +0x18
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_syncBuf;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned long long)arg1;
- (id)syncBuf;
- (void)setSyncBuf:(id)arg1;
- (void).cxx_destruct;
@end

