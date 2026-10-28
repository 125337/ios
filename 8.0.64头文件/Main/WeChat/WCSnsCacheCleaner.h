@interface WCSnsCacheCleaner : NSObject <MMCacheCleaner>
{
    BOOL _cancelled; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (BOOL)enableAutoCleanCache;
- (long long)mediaCacheMinRetentionPeriod;
- (unsigned long long)doCleanPart:(id)arg1 targetSize:(unsigned long long)arg2 hardLimit:(long long)arg3;
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)arg1;
- (void)cancelClean;
@end
