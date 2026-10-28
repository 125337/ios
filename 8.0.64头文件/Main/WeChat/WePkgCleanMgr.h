@interface WePkgCleanMgr : MMObject
- (void)setLastCleanTime:(unsigned int)arg1;
- (unsigned int)getLastCleanTime;
- (void)tryCleanWePkg;
- (void)doCleanWePkg;
- (void)cleanPkgId:(id)arg1;
@end
