@interface MMXp2pWrapper : NSObject <CNetworkStatusExt>
{
    NSString * _p2pStreamId; // +0x8
    NSString * _host; // +0x10
    BOOL _needUpdateP2pService; // +0x18
    BOOL _p2pStarted; // +0x19
    NSString * _token; // +0x20
    BOOL _p2pDebugStatus; // +0x28
    unsigned long long _initTime; // +0x30
    BOOL _bStartP2pService; // +0x38
    BOOL _bPostDelayStopP2p; // +0x39
    unsigned int _p2pSwitch; // +0x3c
    unsigned int _p2pUploadSwitch; // +0x40
    unsigned int _p2pDownloadMnSwitch; // +0x44
    unsigned int _p2pStatSwitch; // +0x48
    unsigned int _p2pDebugLogSwitch; // +0x4c
    unsigned int _p2pMaxLoad; // +0x50
    unsigned int _p2pMaxBufferSize; // +0x54
    unsigned int _p2pUploadDawangkaSwitch; // +0x58
    unsigned int _p2pVerifyStream; // +0x5c
    id <MMXp2pWrapperDelegate> _delegate; // +0x60
    NSString * _p2pAppid; // +0x68
    NSString * _p2pKey; // +0x70
    NSString * _p2pSecret; // +0x78
    NSString * _cdnPlayUrl; // +0x80
    NSString * _p2pDomain; // +0x88
    NSObject<OS_dispatch_queue> * _p2pProcessingQueue; // +0x90
}
+ (id)sharedInstance;
+ (void)destroySharedInstance;
- (id)initInternal;
- (void)dealloc;
- (void)startP2pService;
- (int)initWith:(id)arg1 appKey:(id)arg2 appSecretKey:(id)arg3;
- (id)replacePlaybackUrl:(id)arg1 streamId:(id)arg2 bHttps:(BOOL)arg3;
- (id)version;
- (void)enableDebug;
- (void)disableDebug;
- (void)setLogger;
- (void)alias:(id)arg1 of:(id)arg2;
- (int)resume;
- (id)host;
- (id)proxyOf:(id)arg1;
- (void)getStat;
- (void)updateStreamId:(id)arg1;
- (void)updateP2pService;
- (void)updateP2pSwitches:(unsigned int)arg1 p2pUpload:(unsigned int)arg2 p2pDownloadMn:(unsigned int)arg3 p2pStat:(unsigned int)arg4 p2pDebugLog:(unsigned int)arg5 p2pMaxLoad:(unsigned int)arg6 p2pMaxBufferSize:(unsigned int)arg7 p2pUploadDawangka:(unsigned int)arg8 p2pAppid:(id)arg9 p2pKey:(id)arg10 p2pSecret:(id)arg11 p2PVerifyStream:(unsigned int)arg12 p2pDomain:(id)arg13;
- (id)randomStringWithLength;
- (void)runSyncOnP2pQueue:(id /* block */)arg1;
- (void)runSyncOnP2pQueueTimeout:(id /* block */)arg1;
- (void)runAsyncOnP2pQueue:(id /* block */)arg1;
- (void)runOnMainThread:(id /* block */)arg1;
- (void)destroyClean;
- (void)reset;
- (void)setBPostDelayStopP2p:(BOOL)arg1;
- (void)realStopP2P;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)p2pSwitch;
- (void)setP2pSwitch:(unsigned int)arg1;
- (unsigned int)p2pUploadSwitch;
- (void)setP2pUploadSwitch:(unsigned int)arg1;
- (unsigned int)p2pDownloadMnSwitch;
- (void)setP2pDownloadMnSwitch:(unsigned int)arg1;
- (unsigned int)p2pStatSwitch;
- (void)setP2pStatSwitch:(unsigned int)arg1;
- (unsigned int)p2pDebugLogSwitch;
- (void)setP2pDebugLogSwitch:(unsigned int)arg1;
- (unsigned int)p2pMaxLoad;
- (void)setP2pMaxLoad:(unsigned int)arg1;
- (unsigned int)p2pMaxBufferSize;
- (void)setP2pMaxBufferSize:(unsigned int)arg1;
- (unsigned int)p2pUploadDawangkaSwitch;
- (void)setP2pUploadDawangkaSwitch:(unsigned int)arg1;
- (id)p2pAppid;
- (void)setP2pAppid:(id)arg1;
- (id)p2pKey;
- (void)setP2pKey:(id)arg1;
- (id)p2pSecret;
- (void)setP2pSecret:(id)arg1;
- (unsigned int)p2pVerifyStream;
- (void)setP2pVerifyStream:(unsigned int)arg1;
- (id)cdnPlayUrl;
- (void)setCdnPlayUrl:(id)arg1;
- (id)p2pDomain;
- (void)setP2pDomain:(id)arg1;
- (BOOL)bStartP2pService;
- (void)setBStartP2pService:(BOOL)arg1;
- (id)p2pProcessingQueue;
- (void)setP2pProcessingQueue:(id)arg1;
- (BOOL)bPostDelayStopP2p;
- (void).cxx_destruct;
@end
