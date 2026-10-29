@interface MMFinderCacheCleaner : NSObject <MMCacheCleaner>
- (id)getCachePaths;
- (id)getTaggedCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)arg1;
- (void)cancelClean;
@end
