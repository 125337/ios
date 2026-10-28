@interface MMFinderCacheCleaner : NSObject <MMCacheCleaner>
{
    WCFinderDiskCleanMgr * _cleanMgr; // +0x8
}
- (id)init;
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)arg1;
- (void)cancelClean;
- (id)cleanMgr;
- (void)setCleanMgr:(id)arg1;
- (void).cxx_destruct;
@end
