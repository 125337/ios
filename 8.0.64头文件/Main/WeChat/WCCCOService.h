@interface WCCCOService : MMRootService <MMServiceProtocol>
+ (id)RLECompressWithIndexes:(id)arg1;
+ (id)totalClassHashIndexMapWithVersion:(unsigned int *)arg1;
+ (id)classNameIndexMapWithClassNames:(id)arg1 fromTotalClassHashIndexMap:(id)arg2;
- (void)onServiceEnterBackground;
@end
