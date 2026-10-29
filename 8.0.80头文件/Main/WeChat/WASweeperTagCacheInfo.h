@interface WASweeperTagCacheInfo : NSObject
{
    NSString * _tag; // +0x8
    NSArray * _arrFolderPaths; // +0x10
    unsigned long long _cacheSize; // +0x18
}
+ (id)genTagCacheInfoWithTag:(id)arg1 folderPath:(id)arg2 cacheSize:(unsigned long long)arg3;
+ (id)genTagCacheInfoWithTag:(id)arg1 arrFolderPaths:(id)arg2 cacheSize:(unsigned long long)arg3;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)arrFolderPaths;
- (void)setArrFolderPaths:(id)arg1;
- (unsigned long long)cacheSize;
- (void)setCacheSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
