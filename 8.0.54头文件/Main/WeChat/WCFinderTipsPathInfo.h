@interface WCFinderTipsPathInfo : NSObject
{
    BOOL _optimizeTipsUuidSetSafeThreadSwitch; // +0x8
    BOOL _optimizeContainerUseGCDSafeThreadStrategy; // +0x9
    NSString * _nsPathKey; // +0x10
    NSMutableSet * _tipsUuidSet; // +0x18
    WCFinderRedDotThreadSafeSet * _gcdSafeUuidSet; // +0x20
}
- (id)init;
- (id)tipsUuidSet;
- (id)gcdSafeUuidSet;
- (void)uuidContainerAddObject:(id)arg1;
- (void)uuidContainerRemoveObject:(id)arg1;
- (id)uuidContainerMutableCopy;
- (unsigned long long)uuidContainerCount;
- (void)uuidContainerEnumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)_synchronizedAddObjectToTipsUuidSet:(id)arg1;
- (void)_synchronizedRemoveObjectToTipsUuidSet:(id)arg1;
- (id)_synchronizedMutableCopyTipsUuidSet;
- (id)nsPathKey;
- (void)setNsPathKey:(id)arg1;
- (BOOL)optimizeTipsUuidSetSafeThreadSwitch;
- (void)setOptimizeTipsUuidSetSafeThreadSwitch:(BOOL)arg1;
- (BOOL)optimizeContainerUseGCDSafeThreadStrategy;
- (void)setOptimizeContainerUseGCDSafeThreadStrategy:(BOOL)arg1;
- (void)setTipsUuidSet:(id)arg1;
- (void)setGcdSafeUuidSet:(id)arg1;
- (void).cxx_destruct;
@end

