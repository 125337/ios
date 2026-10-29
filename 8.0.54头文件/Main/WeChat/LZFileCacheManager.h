@interface LZFileCacheManager : NSObject
{
    NSMutableDictionary * _fileCacheMgrDic; // +0x8
    NSObject<OS_dispatch_queue> * _fileOptQueue; // +0x10
    NSString * _cachePath; // +0x18
    lzCacheCleanManager * _cleanMgr; // +0x20
    void * _lzCacheMgrQueueKey; // +0x28
    id /* block */ _normalFilterBlock; // +0x30
}
+ (void)initialize;
+ (void)validCachePath:(id)arg1 obj:(id)arg2;
- (id)init;
- (id)initWithQueueName:(const char *)arg1;
- (void)dealloc;
- (void)setCachePath:(id)arg1;
- (id)cachePath;
- (void)cleanCacheDir:(id /* block */)arg1;
- (id)acquireFileCacheMgr:(id)arg1 type:(unsigned long long)arg2;
- (id)acquireFileCacheMgr:(id)arg1 type:(unsigned long long)arg2 bLargeFile:(BOOL)arg3;
- (void)releaseFileCacheMgr:(id)arg1 forceClean:(BOOL)arg2;
- (id)buildFileSavePath:(id)arg1 fileVid:(id)arg2 fileExt:(id)arg3;
- (BOOL)cacheLocalFile:(id)arg1 fileVid:(id)arg2 fileExt:(id)arg3 removeSrc:(BOOL)arg4;
- (BOOL)isFileAlreadyCached:(id)arg1;
- (BOOL)isFileCaching:(id)arg1;
- (id)fileNameForItem:(id)arg1 fileExt:(id)arg2;
- (BOOL)createDirectoryIfNeed:(id)arg1;
- (void)cleanFileCaching:(id)arg1;
- (id)cleanMgr;
- (id /* block */)normalFilterBlock;
- (void)setNormalFilterBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

