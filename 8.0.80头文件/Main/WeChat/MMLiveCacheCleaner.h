@interface MMLiveCacheCleaner : NSObject <MMCacheCleaner>
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)arg1;
@end
