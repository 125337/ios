@interface KSAudioDataProvider : NSObject
{
    LZFileCache * _fileCache; // +0x8
    NSString * _filePath; // +0x10
    KSSongInfo * _songInfo; // +0x18
    LZDownloadTaskItem * _cacheItem; // +0x20
    void * _context; // +0x28
    NSObject<OS_dispatch_queue> * _queue; // +0x30
    NSError * _error; // +0x38
    id <KSAudioDataProviderDelegate> _delegate; // +0x40
    NSDictionary * _providerWorkDetail; // +0x48
}
- (id)init;
- (id)initWithSongInfo:(id)arg1 queue:(id)arg2 context:(void *)arg3;
- (void)dealloc;
- (BOOL)isReady;
- (id)audioFileExtension;
- (id)audioFileTypes;
- (void)setFilePath:(id)arg1;
- (void)setFileCache:(id)arg1;
- (double)downloadSpeed;
- (BOOL)readFileData:(long long)arg1 len:(long long)arg2 data:(id *)arg3 isEof:(BOOL *)arg4;
- (long long)readFileSize;
- (BOOL)prepareAudioData;
- (long long)fileCachingLength:(long long *)arg1;
- (BOOL)canReadData:(long long)arg1 len:(long long)arg2 err:(id *)arg3;
- (BOOL)readFileDataInner:(long long)arg1 len:(long long)arg2 data:(id *)arg3 isEof:(BOOL *)arg4;
- (void)close:(BOOL)arg1;
- (BOOL)isDataCorruption:(id)arg1;
- (void)prepareBufferData;
- (void)pauseDownloadData;
- (void)resumeDownloadData;
- (void)prepareSeekingData:(long long)arg1;
- (void)prepareTailData:(_NSRange)arg1;
- (id)songInfo;
- (id)cacheItem;
- (id)fileCache;
- (id)filePath;
- (void *)context;
- (void)setContext:(void *)arg1;
- (id)queue;
- (id)error;
- (void)setError:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)providerWorkDetail;
- (void)setProviderWorkDetail:(id)arg1;
- (void).cxx_destruct;
@end
