@interface MMFICImageCache : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * _tableLock; // +0x8
    NSMutableDictionary * _imageTables; // +0x10
}
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (BOOL)addFormatIfNotExist:(id)arg1 imgSize:(CGSize)arg2 maxImgCnt:(unsigned int)arg3 version:(unsigned int)arg4;
- (id)retrieveImageForEntity:(id)arg1 isNeedMemoryCache:(BOOL)arg2;
- (void)deleteImageForEntity:(id)arg1;
- (void)reset;
- (void)clearImgTableWithPrefix:(id)arg1;
- (void)asyncCreateFICImgForEntity:(id)arg1;
- (void)asyncCreateFICImgForEntity:(id)arg1 withImage:(id)arg2;
- (void)executeEntityCreating:(id)arg1 withImage:(id)arg2;
- (id)requiredFilePathListAndRemoveTable;
- (unsigned long long)cleanFICImageCache;
- (unsigned long long)preGetFICImageCacheSize;
- (void).cxx_destruct;
@end
