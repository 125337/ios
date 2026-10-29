@interface WAGameCacheCleaner : NSObject <MMCacheCleaner>
{
    BOOL _isRunning; // +0x8
    BOOL _cancelled; // +0x9
    WAPackageSweeperLogic * _sweeperLogic; // +0x10
    NSDictionary * _lastTaggedCleanedSizeDic; // +0x18
}
- (id)sweeperLogic;
- (id)getTaggedCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)arg1;
- (void)cancelClean;
- (id)getTaggedCleanedSize;
- (unsigned int)getGameAutoCleanerExpiresTime;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (void)setSweeperLogic:(id)arg1;
- (id)lastTaggedCleanedSizeDic;
- (void)setLastTaggedCleanedSizeDic:(id)arg1;
- (void).cxx_destruct;
@end
