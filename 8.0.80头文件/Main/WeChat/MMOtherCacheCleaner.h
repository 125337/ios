@interface MMOtherCacheCleaner : NSObject <MMCacheCleaner>
{
    BOOL _cancelled; // +0x8
    NSDictionary * _categorySizes; // +0x10
}
- (id)init;
- (id)getCachePaths;
- (id)getCachePathTags;
- (id)getTaggedCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanPart:(id)arg1 categories:(int *)arg2 categoryCount:(int)arg3 categorySizes:(unsigned long long *)arg4 targetSize:(unsigned long long)arg5 hardLimit:(long long)arg6;
- (unsigned long long)saveCleanSize:(unsigned long long)arg1 categorySizes:(unsigned long long *)arg2;
- (unsigned long long)doCleanForSize:(unsigned long long)arg1;
- (void)cancelClean;
- (id)getTaggedCleanedSize;
- (id)categorySizes;
- (void)setCategorySizes:(id)arg1;
- (void).cxx_destruct;
@end
