@interface LZFileCache : NSObject
{
    BOOL _bCleaned; // +0x8
    BOOL _bCacheFinish; // +0x9
    int _fileFD; // +0xc
    int _status; // +0x10
    NSError * _innerError; // +0x18
    unsigned long long _cacheType; // +0x20
    NSObject<OS_dispatch_queue> * _fileOptQueue; // +0x28
    void * _queueContext; // +0x30
    NSString * _fileName; // +0x38
    NSString * _cfgfileName; // +0x40
    void * _mapBuf; // +0x48
    unsigned long long _fileSize; // +0x50
    NSMutableArray * _writeRanges; // +0x58
    NSMutableArray * _readRanges; // +0x60
    NSMutableDictionary * _dicOptItems; // +0x68
    NSMutableDictionary * _dicmapRefforread; // +0x70
    long long _fileCacheErrorType; // +0x78
}
+ (id)cfgPath:(id)arg1;
+ (int)pageSize;
+ (void)preheat:(void *)arg1 size:(unsigned long long)arg2;
- (id)init;
- (id)initWithFile:(id)arg1 queue:(id)arg2 context:(void *)arg3 type:(unsigned long long)arg4;
- (void)dealloc;
- (id)filePath;
- (BOOL)openFileAndSetupMap:(id)arg1;
- (BOOL)writeFile:(id)arg1 data:(id)arg2 isFinish:(BOOL *)arg3;
- (void)cleanFileCaching;
- (void)finishWirte:(id)arg1;
- (void)endRead:(id)arg1;
- (BOOL)readFile:(id)arg1 range:(_LzRange)arg2 data:(id *)arg3;
- (void)close:(BOOL)arg1;
- (long long)fileCachedLength:(long long *)arg1;
- (long long)fileCachedLength:(long long *)arg1 lastOffset:(long long *)arg2;
- (long long)fileContinuousCachedLengthWithPosition:(long long)arg1;
- (BOOL)stopCaching:(BOOL)arg1;
- (_LzRange)calcDownloadRange:(_LzRange)arg1;
- (BOOL)loadCacheInfo;
- (BOOL)isFileCacheFinished;
- (unsigned long long)fileRealSize;
- (void)releaseMapping;
- (void)releaseFile;
- (id)mergeInfo;
- (_LzRange)calcDownloadRangeInner:(_LzRange)arg1;
- (BOOL)loadCacheInfoInner;
- (BOOL)openFileAndSetupMapInner:(id)arg1;
- (BOOL)readFileInner:(id)arg1 range:(_LzRange)arg2 data:(id *)arg3;
- (void)refreshReadRanges;
- (void)mergeRanges:(id)arg1;
- (void)fileCacheSuccess;
- (void)savefileCfg;
- (void)loadfilecfg;
- (id)innerError;
- (void)setInnerError:(id)arg1;
- (unsigned long long)cacheType;
- (id)fileOptQueue;
- (void)setFileOptQueue:(id)arg1;
- (void *)queueContext;
- (void)setQueueContext:(void *)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)cfgfileName;
- (void)setCfgfileName:(id)arg1;
- (int)fileFD;
- (void)setFileFD:(int)arg1;
- (void *)mapBuf;
- (void)setMapBuf:(void *)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)writeRanges;
- (void)setWriteRanges:(id)arg1;
- (id)readRanges;
- (void)setReadRanges:(id)arg1;
- (id)dicOptItems;
- (void)setDicOptItems:(id)arg1;
- (id)dicmapRefforread;
- (void)setDicmapRefforread:(id)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (BOOL)bCleaned;
- (void)setBCleaned:(BOOL)arg1;
- (BOOL)bCacheFinish;
- (void)setBCacheFinish:(BOOL)arg1;
- (long long)fileCacheErrorType;
- (void)setFileCacheErrorType:(long long)arg1;
- (void).cxx_destruct;
@end

