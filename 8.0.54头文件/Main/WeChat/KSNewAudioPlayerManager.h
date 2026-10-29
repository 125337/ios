@interface KSNewAudioPlayerManager : NSObject
{
    NSObject<OS_dispatch_queue> * _audioProcessingQueue; // +0x8
    void * _lzAudioMgrQueueKey; // +0x10
    LZFileCacheManager * _fileCacheMgr; // +0x18
    id <KSAudioLogProtocol> _logObj; // +0x20
    KSAudioPlayer * _curAudioPlayer; // +0x28
}
+ (void)initialize;
+ (id)sharedInstance;
+ (void)setCachePath:(id)arg1;
+ (id)cachePath;
- (id)init;
- (id)initInner;
- (void)dealloc;
- (id)fileCacheMgr;
- (id)createAudioPlayer:(id)arg1;
- (void *)contextKey;
- (id)curPlayer;
- (void)setDefaultCleanFilter:(id /* block */)arg1;
- (void)cleanCacheDir:(id /* block */)arg1;
- (BOOL)isFileAlreadCachedByVid:(id)arg1 fileExt:(id)arg2;
- (BOOL)isFileAlreadCachedByVid:(id)arg1;
- (BOOL)isFileAlreadCachedByUrl:(id)arg1;
- (BOOL)cacheLocalFile:(id)arg1 fileVid:(id)arg2 fileExt:(id)arg3 removeSrc:(BOOL)arg4;
- (id)localCachePath:(id)arg1;
- (void)setupAudioSession;
- (void)interruption:(id)arg1;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (void)setLogProtocol:(id)arg1;
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 EFDict:(id)arg5 msg:(id)arg6;
- (id)logObj;
- (void)setLogObj:(id)arg1;
- (id)curAudioPlayer;
- (void)setCurAudioPlayer:(id)arg1;
- (void).cxx_destruct;
@end

