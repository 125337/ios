@interface TXCAsyncSocket : NSObject
{
    unsigned int flags; // +0x8
    unsigned short config; // +0xc
    id <TXCAsyncSocketDelegate> delegate; // +0x10
    NSObject<OS_dispatch_queue> * delegateQueue; // +0x18
    int socket4FD; // +0x20
    int socket6FD; // +0x24
    int socketUN; // +0x28
    NSURL * socketUrl; // +0x30
    int stateIndex; // +0x38
    NSData * connectInterface4; // +0x40
    NSData * connectInterface6; // +0x48
    NSData * connectInterfaceUN; // +0x50
    NSObject<OS_dispatch_queue> * socketQueue; // +0x58
    NSObject<OS_dispatch_source> * accept4Source; // +0x60
    NSObject<OS_dispatch_source> * accept6Source; // +0x68
    NSObject<OS_dispatch_source> * acceptUNSource; // +0x70
    NSObject<OS_dispatch_source> * connectTimer; // +0x78
    NSObject<OS_dispatch_source> * readSource; // +0x80
    NSObject<OS_dispatch_source> * writeSource; // +0x88
    NSObject<OS_dispatch_source> * readTimer; // +0x90
    NSObject<OS_dispatch_source> * writeTimer; // +0x98
    NSMutableArray * readQueue; // +0xa0
    NSMutableArray * writeQueue; // +0xa8
    TXCAsyncReadPacket * currentRead; // +0xb0
    TXCAsyncWritePacket * currentWrite; // +0xb8
    unsigned long long socketFDBytesAvailable; // +0xc0
    TXCAsyncSocketPreBuffer * preBuffer; // +0xc8
    struct streamContext; // +0xd0
    __CFReadStream * readStream; // +0xf8
    __CFWriteStream * writeStream; // +0x100
    SSLContext * sslContext; // +0x108
    TXCAsyncSocketPreBuffer * sslPreBuffer; // +0x110
    unsigned long long sslWriteCachedLength; // +0x118
    int sslErrCode; // +0x120
    int lastSSLHandshakeError; // +0x124
    void * IsOnSocketQueueOrTargetQueueKey; // +0x128
    id userData; // +0x130
    double alternateAddressDelay; // +0x138
}
+ (id)socketFromConnectedSocketFD:(int)arg1 socketQueue:(id)arg2 error:(id *)arg3;
+ (id)socketFromConnectedSocketFD:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 error:(id *)arg4;
+ (id)socketFromConnectedSocketFD:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 socketQueue:(id)arg4 error:(id *)arg5;
+ (id)gaiError:(int)arg1;
+ (void)ignore:(id)arg1;
+ (void)startCFStreamThreadIfNeeded;
+ (void)stopCFStreamThreadIfNeeded;
+ (void)cfstreamThread;
+ (void)scheduleCFStreams:(id)arg1;
+ (void)unscheduleCFStreams:(id)arg1;
+ (id)lookupHost:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
+ (id)hostFromSockaddr4:(const sockaddr_in *)arg1;
+ (id)hostFromSockaddr6:(const sockaddr_in6 *)arg1;
+ (unsigned short)portFromSockaddr4:(const sockaddr_in *)arg1;
+ (unsigned short)portFromSockaddr6:(const sockaddr_in6 *)arg1;
+ (id)urlFromSockaddrUN:(const sockaddr_un *)arg1;
+ (id)hostFromAddress:(id)arg1;
+ (unsigned short)portFromAddress:(id)arg1;
+ (BOOL)isIPv4Address:(id)arg1;
+ (BOOL)isIPv6Address:(id)arg1;
+ (BOOL)getHost:(id *)arg1 port:(unsigned short *)arg2 fromAddress:(id)arg3;
+ (BOOL)getHost:(id *)arg1 port:(unsigned short *)arg2 family:(char *)arg3 fromAddress:(id)arg4;
+ (id)CRLFData;
+ (id)CRData;
+ (id)LFData;
+ (id)ZeroData;
- (id)init;
- (id)initWithSocketQueue:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1 synchronously:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)synchronouslySetDelegate:(id)arg1;
- (id)delegateQueue;
- (void)setDelegateQueue:(id)arg1 synchronously:(BOOL)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)synchronouslySetDelegateQueue:(id)arg1;
- (void)getDelegate:(id *)arg1 delegateQueue:(id *)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2 synchronously:(BOOL)arg3;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)synchronouslySetDelegate:(id)arg1 delegateQueue:(id)arg2;
- (BOOL)isIPv4Enabled;
- (void)setIPv4Enabled:(BOOL)arg1;
- (BOOL)isIPv6Enabled;
- (void)setIPv6Enabled:(BOOL)arg1;
- (BOOL)isIPv4PreferredOverIPv6;
- (void)setIPv4PreferredOverIPv6:(BOOL)arg1;
- (double)alternateAddressDelay;
- (void)setAlternateAddressDelay:(double)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (BOOL)acceptOnPort:(unsigned short)arg1 error:(id *)arg2;
- (BOOL)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)acceptOnUrl:(id)arg1 error:(id *)arg2;
- (BOOL)doAccept:(int)arg1;
- (BOOL)preConnectWithInterface:(id)arg1 error:(id *)arg2;
- (BOOL)preConnectWithUrl:(id)arg1 error:(id *)arg2;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 viaInterface:(id)arg3 withTimeout:(double)arg4 error:(id *)arg5;
- (BOOL)connectToAddress:(id)arg1 error:(id *)arg2;
- (BOOL)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (BOOL)connectToAddress:(id)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)connectToUrl:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (void)lookup:(int)arg1 didSucceedWithAddress4:(id)arg2 address6:(id)arg3;
- (void)lookup:(int)arg1 didFail:(id)arg2;
- (BOOL)bindSocket:(int)arg1 toInterface:(id)arg2 error:(id *)arg3;
- (int)createSocket:(int)arg1 connectInterface:(id)arg2 errPtr:(id *)arg3;
- (void)connectSocket:(int)arg1 address:(id)arg2 stateIndex:(int)arg3;
- (void)closeSocket:(int)arg1;
- (void)closeUnusedSocket:(int)arg1;
- (BOOL)connectWithAddress4:(id)arg1 address6:(id)arg2 error:(id *)arg3;
- (BOOL)connectWithAddressUN:(id)arg1 error:(id *)arg2;
- (void)didConnect:(int)arg1;
- (void)didNotConnect:(int)arg1 error:(id)arg2;
- (void)startConnectTimeout:(double)arg1;
- (void)endConnectTimeout;
- (void)doConnectTimeout;
- (void)closeWithError:(id)arg1;
- (void)disconnect;
- (void)disconnectAfterReading;
- (void)disconnectAfterWriting;
- (void)disconnectAfterReadingAndWriting;
- (void)maybeClose;
- (id)badConfigError:(id)arg1;
- (id)badParamError:(id)arg1;
- (id)errorWithErrno:(int)arg1 reason:(id)arg2;
- (id)errnoError;
- (id)sslError:(int)arg1;
- (id)connectTimeoutError;
- (id)readMaxedOutError;
- (id)readTimeoutError;
- (id)writeTimeoutError;
- (id)connectionClosedError;
- (id)otherError:(id)arg1;
- (BOOL)isDisconnected;
- (BOOL)isConnected;
- (id)connectedHost;
- (unsigned short)connectedPort;
- (id)connectedUrl;
- (id)localHost;
- (unsigned short)localPort;
- (id)connectedHost4;
- (id)connectedHost6;
- (unsigned short)connectedPort4;
- (unsigned short)connectedPort6;
- (id)localHost4;
- (id)localHost6;
- (unsigned short)localPort4;
- (unsigned short)localPort6;
- (id)connectedHostFromSocket4:(int)arg1;
- (id)connectedHostFromSocket6:(int)arg1;
- (unsigned short)connectedPortFromSocket4:(int)arg1;
- (unsigned short)connectedPortFromSocket6:(int)arg1;
- (id)connectedUrlFromSocketUN:(int)arg1;
- (id)localHostFromSocket4:(int)arg1;
- (id)localHostFromSocket6:(int)arg1;
- (unsigned short)localPortFromSocket4:(int)arg1;
- (unsigned short)localPortFromSocket6:(int)arg1;
- (id)connectedAddress;
- (id)localAddress;
- (BOOL)isIPv4;
- (BOOL)isIPv6;
- (BOOL)isSecure;
- (void)getInterfaceAddress4:(id *)arg1 address6:(id *)arg2 fromDescription:(id)arg3 port:(unsigned short)arg4;
- (id)getInterfaceAddressFromUrl:(id)arg1;
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg1;
- (BOOL)usingCFStreamForTLS;
- (BOOL)usingSecureTransportForTLS;
- (void)suspendReadSource;
- (void)resumeReadSource;
- (void)suspendWriteSource;
- (void)resumeWriteSource;
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 maxLength:(unsigned long long)arg5 tag:(long long)arg6;
- (float)progressOfReadReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (void)maybeDequeueRead;
- (void)flushSSLBuffers;
- (void)doReadData;
- (void)doReadEOF;
- (void)completeCurrentRead;
- (void)endCurrentRead;
- (void)setupReadTimerWithTimeout:(double)arg1;
- (void)doReadTimeout;
- (void)doReadTimeoutWithExtension:(double)arg1;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (float)progressOfWriteReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (void)maybeDequeueWrite;
- (void)doWriteData;
- (void)completeCurrentWrite;
- (void)endCurrentWrite;
- (void)setupWriteTimerWithTimeout:(double)arg1;
- (void)doWriteTimeout;
- (void)doWriteTimeoutWithExtension:(double)arg1;
- (void)startTLS:(id)arg1;
- (void)maybeStartTLS;
- (int)sslReadWithBuffer:(void *)arg1 length:(unsigned long long *)arg2;
- (int)sslWriteWithBuffer:(const void *)arg1 length:(unsigned long long *)arg2;
- (void)ssl_startTLS;
- (void)ssl_continueSSLHandshake;
- (void)ssl_shouldTrustPeer:(BOOL)arg1 stateIndex:(int)arg2;
- (void)cf_finishSSLHandshake;
- (void)cf_abortSSLHandshake:(id)arg1;
- (void)cf_startTLS;
- (BOOL)createReadAndWriteStream;
- (BOOL)registerForStreamCallbacksIncludingReadWrite:(BOOL)arg1;
- (BOOL)addStreamsToRunLoop;
- (void)removeStreamsFromRunLoop;
- (BOOL)openStreams;
- (BOOL)autoDisconnectOnClosedReadStream;
- (void)setAutoDisconnectOnClosedReadStream:(BOOL)arg1;
- (void)markSocketQueueTargetQueue:(id)arg1;
- (void)unmarkSocketQueueTargetQueue:(id)arg1;
- (void)performBlock:(id /* block */)arg1;
- (int)socketFD;
- (int)socket4FD;
- (int)socket6FD;
- (__CFReadStream *)readStream;
- (__CFWriteStream *)writeStream;
- (SSLContext *)sslContext;
- (void).cxx_destruct;
@end
