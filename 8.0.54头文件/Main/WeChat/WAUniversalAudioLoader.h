@interface WAUniversalAudioLoader : NSObject
{
    BOOL _dataLoaded; // +0x8
    BOOL _needsToSeek; // +0x9
    id <WAUniversalAudioLoaderDelegate> _delegate; // +0x10
    unsigned long long _strategy; // +0x18
    WAUniversalAudioInfo * _audioInfo; // +0x20
    NSObject<OS_dispatch_queue> * _audioQueue; // +0x28
    NSObject<OS_dispatch_queue> * _fileQueue; // +0x30
    double _seekTimeRecord; // +0x38
    WAUniversalAudioPlayerCachePool * _cachePool; // +0x40
}
- (id)initWithAudioQueue:(id)arg1 cachePool:(id)arg2 fileQueue:(id)arg3;
- (void)loadWith:(id)arg1;
- (void)seekTo:(double)arg1;
- (void)loadImplementation:(id)arg1;
- (void)handleDataDownloadFinished:(id)arg1 path:(id)arg2 audioInfo:(id)arg3;
- (void)writeDataToDisk:(id)arg1 path:(id)arg2 completion:(id /* block */)arg3;
- (void)loadDataFromDiskImplementation:(id)arg1 fileURL:(id)arg2;
- (void)readAudioFileFrom:(id)arg1 audioInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)loadDataFromCacheImplementation:(id)arg1 cache:(id)arg2;
- (void)seekToImplementation:(double)arg1;
- (id)generateSkippedPCMBufferImpelementationWith:(id)arg1 skipFrame:(long long)arg2 error:(id *)arg3;
- (void)throwErrorImplementation:(id)arg1;
- (void)throwErrorWithTypeImplementation:(unsigned long long)arg1;
- (void)throwErrorWithTypeImplementation:(unsigned long long)arg1 userInfo:(id)arg2;
- (BOOL)dataLoaded;
- (void)setDataLoaded:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)strategy;
- (void)setStrategy:(unsigned long long)arg1;
- (id)audioInfo;
- (void)setAudioInfo:(id)arg1;
- (id)audioQueue;
- (void)setAudioQueue:(id)arg1;
- (id)fileQueue;
- (void)setFileQueue:(id)arg1;
- (BOOL)needsToSeek;
- (void)setNeedsToSeek:(BOOL)arg1;
- (double)seekTimeRecord;
- (void)setSeekTimeRecord:(double)arg1;
- (id)cachePool;
- (void)setCachePool:(id)arg1;
- (void).cxx_destruct;
@end

