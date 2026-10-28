@interface SRWebSocket : NSObject <NSStreamDelegate>
{
    _opaque_pthread_mutex_t * _kvoLock; // +0x8
    os_unfair_lock_s _propertyLock; // +0x10
    NSObject<OS_dispatch_queue> * _workQueue; // +0x18
    NSMutableArray * _consumers; // +0x20
    NSInputStream * _inputStream; // +0x28
    NSOutputStream * _outputStream; // +0x30
    NSObject<OS_dispatch_data> * _readBuffer; // +0x38
    unsigned long long _readBufferOffset; // +0x40
    NSObject<OS_dispatch_data> * _outputBuffer; // +0x48
    unsigned long long _outputBufferOffset; // +0x50
    unsigned char _currentFrameOpcode; // +0x58
    unsigned long long _currentFrameCount; // +0x60
    unsigned long long _readOpCount; // +0x68
    unsigned int _currentStringScanPosition; // +0x70
    NSMutableData * _currentFrameData; // +0x78
    NSString * _closeReason; // +0x80
    NSString * _secKey; // +0x88
    SRSecurityOptions * _securityOptions; // +0x90
    BOOL _streamSecurityValidated; // +0x98
    unsigned char[4] _currentReadMaskKey; // +0x99
    unsigned long long _currentReadMaskOffset; // +0xa0
    BOOL _closeWhenFinishedWriting; // +0xa8
    BOOL _failed; // +0xa9
    NSURLRequest * _urlRequest; // +0xb0
    BOOL _sentClose; // +0xb8
    BOOL _didFail; // +0xb9
    BOOL _cleanupScheduled; // +0xba
    int _closeCode; // +0xbc
    BOOL _isPumping; // +0xc0
    NSMutableSet * _scheduledRunloops; // +0xc8
    SRWebSocket * _selfRetain; // +0xd0
    NSArray * _requestedProtocols; // +0xd8
    SRIOConsumerPool * _consumerPool; // +0xe0
    SRProxyConnect * _proxyConnect; // +0xe8
    BOOL _disableTcpNaglesAlgorithm; // +0xf0
    BOOL _allowsUntrustedSSLCertificates; // +0xf1
    long long _readyState; // +0xf8
    NSURL * _url; // +0x100
    __CFHTTPMessage * _receivedHTTPHeaders; // +0x108
    NSArray * _requestCookies; // +0x110
    NSString * _protocol; // +0x118
    SRDelegateController * _delegateController; // +0x120
}
+ (BOOL)automaticallyNotifiesObserversOfReadyState;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2 allowsUntrustedSSLCertificates:(BOOL)arg3;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 protocols:(id)arg2;
- (id)initWithURL:(id)arg1 protocols:(id)arg2 allowsUntrustedSSLCertificates:(BOOL)arg3;
- (void)assertOnWorkQueue;
- (void)dealloc;
- (void)setReadyState:(long long)arg1;
- (long long)readyState;
- (void)open;
- (void)_connectionDoneWithError:(id)arg1 readStream:(id)arg2 writeStream:(id)arg3;
- (BOOL)_checkHandshake:(__CFHTTPMessage *)arg1;
- (void)_HTTPHeadersDidFinish;
- (void)_readHTTPHeader;
- (void)didConnect;
- (void)_updateSecureStreamOptions;
- (void)setupNetworkServiceType:(unsigned long long)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)close;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2;
- (void)_closeWithProtocolError:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_writeData:(id)arg1;
- (void)send:(id)arg1;
- (BOOL)sendString:(id)arg1 error:(id *)arg2;
- (BOOL)sendData:(id)arg1 error:(id *)arg2;
- (BOOL)sendPing:(id)arg1 error:(id *)arg2;
- (void)handlePing:(id)arg1;
- (void)handlePong:(id)arg1;
- (void)handleCloseWithData:(id)arg1;
- (void)closeConnection;
- (void)_handleFrameWithData:(id)arg1 opCode:(long long)arg2;
- (void)_handleFrameHeader:(struct)arg1 curData:(id)arg2;
- (void)_readFrameContinue;
- (void)_readFrameNew;
- (void)_pumpWriting;
- (void)_addConsumerWithScanner:(id /* block */)arg1 callback:(id /* block */)arg2;
- (void)_addConsumerWithDataLength:(unsigned long long)arg1 callback:(id /* block */)arg2 readToCurrentFrame:(BOOL)arg3 unmaskBytes:(BOOL)arg4;
- (void)_addConsumerWithScanner:(id /* block */)arg1 callback:(id /* block */)arg2 dataLength:(unsigned long long)arg3;
- (void)_scheduleCleanup;
- (void)_cleanupSelfReference:(id)arg1;
- (void)_readUntilHeaderCompleteWithCallback:(id /* block */)arg1;
- (void)_readUntilBytes:(const void *)arg1 length:(unsigned long long)arg2 callback:(id /* block */)arg3;
- (BOOL)_innerPumpScanner;
- (void)_pumpScanner;
- (void)_sendFrameWithOpcode:(int)arg1 data:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)safeHandleEvent:(unsigned long long)arg1 stream:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDelegateDispatchQueue:(id)arg1;
- (id)delegateDispatchQueue;
- (void)setDelegateOperationQueue:(id)arg1;
- (id)delegateOperationQueue;
- (BOOL)disableTcpNaglesAlgorithm;
- (void)setDisableTcpNaglesAlgorithm:(BOOL)arg1;
- (id)url;
- (__CFHTTPMessage *)receivedHTTPHeaders;
- (id)requestCookies;
- (void)setRequestCookies:(id)arg1;
- (id)protocol;
- (BOOL)allowsUntrustedSSLCertificates;
- (void)setAllowsUntrustedSSLCertificates:(BOOL)arg1;
- (id)delegateController;
- (void).cxx_destruct;
@end
