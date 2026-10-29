@interface TPProxyPreloadManager : NSObject <ITPPreloadProxyLifeCycleDelegate, ITPPreloadProxy>
{
    BOOL _initialized; // +0x8
    int _serviceType; // +0xc
    id <TPPreloadProxyDelegate> _delegate; // +0x10
    TPDownloadProxy * _downloadProxy; // +0x18
    NSMutableDictionary * _delegates; // +0x20
    TPLock * _delegateLock; // +0x28
    long long _initializeTryCount; // +0x30
}
- (id)initWithServiceType:(long long)arg1;
- (void)dealloc;
- (int)startPreloadWithFileId:(id)arg1 downloadParam:(id)arg2;
- (int)startPreloadWithFileId:(id)arg1 downloadParam:(id)arg2 httpHeader:(id)arg3;
- (int)startClipPreloadWithFileId:(id)arg1 downloadParamList:(id)arg2;
- (void)stopPreloadWithPreloadId:(int)arg1;
- (void)pushEvent:(long long)arg1;
- (BOOL)isAvailable;
- (id)errorCodeStringWithPreloadId:(int)arg1;
- (BOOL)isValidPlayId:(int)arg1;
- (BOOL)initialzeProxyIfNeeded;
- (BOOL)initializeProxyImpl;
- (void)onLifeCycleEndWithPlayId:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)downloadProxy;
- (void)setDownloadProxy:(id)arg1;
- (id)delegates;
- (void)setDelegates:(id)arg1;
- (id)delegateLock;
- (void)setDelegateLock:(id)arg1;
- (int)serviceType;
- (void)setServiceType:(int)arg1;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (long long)initializeTryCount;
- (void)setInitializeTryCount:(long long)arg1;
- (void).cxx_destruct;
@end
