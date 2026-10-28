@interface WAGameCacheCleaner : NSObject <MMCacheCleaner>
{
    BOOL _isRunning; // +0x8
    BOOL _cancelled; // +0x9
    WAPackageSweeperLogic * _sweeperLogic; // +0x10
}
- (id)sweeperLogic;
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)arg1;
- (void)cancelClean;
- (id)getSweepInfo;
- (unsigned int)getGameAutoCleanerExpiresTime;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (void)setSweeperLogic:(id)arg1;
- (void).cxx_destruct;
@end
