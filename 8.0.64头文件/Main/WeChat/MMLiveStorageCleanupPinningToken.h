@interface MMLiveStorageCleanupPinningToken : NSObject <MMLiveStorageCleanupExt>
{
    NSArray * _paths; // +0x8
}
- (id)initWithPinnedPath:(id)arg1;
- (id)initWithPinnedPaths:(id)arg1;
- (void)dealloc;
- (void)keepAlive;
- (void)willBeginStorageCleanupInScenario:(unsigned long long)arg1 withContext:(id)arg2;
- (id)paths;
- (void)setPaths:(id)arg1;
- (void).cxx_destruct;
@end
