@interface MMXp2pWrapper : NSObject <CNetworkStatusExt>
{
    NSString * _host; // +0x8
    NSString * _token; // +0x10
    unsigned long long _initTime; // +0x18
    BOOL _bStartP2pService; // +0x20
    BOOL _bPostDelayStopP2p; // +0x21
    id <MMXp2pWrapperDelegate> _delegate; // +0x28
    NSObject<OS_dispatch_queue> * _p2pProcessingQueue; // +0x30
    NSMutableDictionary * _p2pParamsMap; // +0x38
}
+ (id)sharedInstance;
+ (void)destroySharedInstance;
- (id)initInternal;
- (void)dealloc;
- (void)startP2pServiceWithParams:(id)arg1;
- (int)initWith:(id)arg1 appKey:(id)arg2 appSecretKey:(id)arg3 debugLogLevel:(unsigned int)arg4;
- (id)replacePlaybackUrl:(id)arg1 streamId:(id)arg2 bHttps:(BOOL)arg3 liveSdkChannelParams:(id)arg4 shouldStartP2PService:(BOOL)arg5;
- (id)fixIPDirectUrl:(id)arg1;
- (id)pathFromOriginUrl:(id)arg1;
- (id)wrapIPIfNeeded:(id)arg1;
- (id)generateP2pUrl:(id)arg1 proxy:(id)arg2 p2pDomain:(id)arg3 bHttps:(BOOL)arg4;
- (void)updateAllP2pServices;
- (void)updateP2pService:(id)arg1;
- (id)getP2pParamsForStreamId:(id)arg1;
- (BOOL)hasP2pStream:(id)arg1;
- (void)checkP2pStreamStatus:(id)arg1;
- (void)clearP2pParams;
- (id)version;
- (void)setLogLevel:(unsigned int)arg1;
- (void)setLogger;
- (int)resume;
- (id)host;
- (id)proxyOf:(id)arg1;
- (void)getStat:(id)arg1;
- (void)updateVideoCache:(id)arg1 videoCache:(unsigned int)arg2;
- (id)randomStringWithLength;
- (void)runSyncOnP2pQueue:(id /* block */)arg1;
- (void)runSyncOnP2pQueueTimeout:(id /* block */)arg1;
- (void)runAsyncOnP2pQueue:(id /* block */)arg1;
- (void)runOnMainThread:(id /* block */)arg1;
- (void)triggerDelayedStopP2P;
- (void)destroyStream:(id)arg1;
- (void)destroyClean;
- (BOOL)hasActiveStreams;
- (void)realStopP2P;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bStartP2pService;
- (void)setBStartP2pService:(BOOL)arg1;
- (id)p2pProcessingQueue;
- (void)setP2pProcessingQueue:(id)arg1;
- (BOOL)bPostDelayStopP2p;
- (void)setBPostDelayStopP2p:(BOOL)arg1;
- (id)p2pParamsMap;
- (void)setP2pParamsMap:(id)arg1;
- (void).cxx_destruct;
@end
