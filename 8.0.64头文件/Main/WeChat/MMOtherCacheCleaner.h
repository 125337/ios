@interface MMOtherCacheCleaner : NSObject <MMCacheCleaner>
{
    BOOL _cancelled; // +0x8
}
- (id)init;
- (id)getCachePaths;
- (id)getTaggedCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanPart:(id)arg1 targetSize:(unsigned long long)arg2 hardLimit:(long long)arg3;
- (unsigned long long)doCleanForSize:(unsigned long long)arg1;
- (void)cancelClean;
@end
