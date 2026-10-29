@interface GCDWebServer : NSObject
{
    id <GCDWebServerDelegate> _delegate; // +0x8
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x10
    NSObject<OS_dispatch_group> * _sourceGroup; // +0x18
    NSMutableArray * _handlers; // +0x20
    long long _activeConnections; // +0x28
    BOOL _connected; // +0x30
    __CFRunLoopTimer * _disconnectTimer; // +0x38
    NSDictionary * _options; // +0x40
    NSString * _serverName; // +0x48
    NSString * _authenticationRealm; // +0x50
    NSMutableDictionary * _authenticationBasicAccounts; // +0x58
    NSMutableDictionary * _authenticationDigestAccounts; // +0x60
    Class _connectionClass; // +0x68
    BOOL _mapHEADToGET; // +0x70
    double _disconnectDelay; // +0x78
    long long _dispatchQueuePriority; // +0x80
    unsigned long long _port; // +0x88
    NSObject<OS_dispatch_source> * _source4; // +0x90
    NSObject<OS_dispatch_source> * _source6; // +0x98
    __CFNetService * _registrationService; // +0xa0
    __CFNetService * _resolutionService; // +0xa8
    _DNSServiceRef_t * _dnsService; // +0xb0
    __CFSocket * _dnsSocket; // +0xb8
    __CFRunLoopSource * _dnsSource; // +0xc0
    NSString * _dnsAddress; // +0xc8
    unsigned long long _dnsPort; // +0xd0
    BOOL _bindToLocalhost; // +0xd8
    BOOL _suspendInBackground; // +0xd9
    unsigned long long _backgroundTask; // +0xe0
}
+ (void)setLogLevel:(int)arg1;
+ (void)initialize;
- (void)logVerbose:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logWarning:(id)arg1;
- (void)logError:(id)arg1;
- (void)addGETHandlerForPath:(id)arg1 staticData:(id)arg2 contentType:(id)arg3 cacheAge:(unsigned long long)arg4;
- (void)addGETHandlerForPath:(id)arg1 filePath:(id)arg2 isAttachment:(BOOL)arg3 cacheAge:(unsigned long long)arg4 allowRangeRequests:(BOOL)arg5;
- (id)_responseWithContentsOfDirectory:(id)arg1;
- (void)addGETHandlerForBasePath:(id)arg1 directoryPath:(id)arg2 indexFilename:(id)arg3 cacheAge:(unsigned long long)arg4 allowRangeRequests:(BOOL)arg5;
- (void)addDefaultHandlerForMethod:(id)arg1 requestClass:(Class)arg2 processBlock:(id /* block */)arg3;
- (void)addDefaultHandlerForMethod:(id)arg1 requestClass:(Class)arg2 asyncProcessBlock:(id /* block */)arg3;
- (void)addHandlerForMethod:(id)arg1 path:(id)arg2 requestClass:(Class)arg3 processBlock:(id /* block */)arg4;
- (void)addHandlerForMethod:(id)arg1 path:(id)arg2 requestClass:(Class)arg3 asyncProcessBlock:(id /* block */)arg4;
- (void)addHandlerForMethod:(id)arg1 pathRegex:(id)arg2 requestClass:(Class)arg3 processBlock:(id /* block */)arg4;
- (void)addHandlerForMethod:(id)arg1 pathRegex:(id)arg2 requestClass:(Class)arg3 asyncProcessBlock:(id /* block */)arg4;
- (id)serverURL;
- (id)bonjourServerURL;
- (id)publicServerURL;
- (BOOL)start;
- (BOOL)startWithPort:(unsigned long long)arg1 bonjourName:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)_startBackgroundTask;
- (void)_didConnect;
- (void)willStartConnection:(id)arg1;
- (void)_endBackgroundTask;
- (void)_didDisconnect;
- (void)didEndConnection:(id)arg1;
- (id)bonjourName;
- (id)bonjourType;
- (void)addHandlerWithMatchBlock:(id /* block */)arg1 processBlock:(id /* block */)arg2;
- (void)addHandlerWithMatchBlock:(id /* block */)arg1 asyncProcessBlock:(id /* block */)arg2;
- (void)removeAllHandlers;
- (int)_createListeningSocket:(BOOL)arg1 localAddress:(const void *)arg2 length:(unsigned int)arg3 maxPendingConnections:(unsigned long long)arg4 error:(id *)arg5;
- (id)_createDispatchSourceWithListeningSocket:(int)arg1 isIPv6:(BOOL)arg2;
- (BOOL)_start:(id *)arg1;
- (void)_stop;
- (void)_didEnterBackground:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (BOOL)startWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)isRunning;
- (void)stop;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)handlers;
- (unsigned long long)port;
- (id)serverName;
- (id)authenticationRealm;
- (id)authenticationBasicAccounts;
- (id)authenticationDigestAccounts;
- (BOOL)shouldAutomaticallyMapHEADToGET;
- (long long)dispatchQueuePriority;
- (void).cxx_destruct;
@end

