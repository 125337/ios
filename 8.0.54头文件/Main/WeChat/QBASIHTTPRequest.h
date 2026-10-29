@interface QBASIHTTPRequest : NSOperation <NSCopying>
{
    NSURL * url; // +0x8
    NSURL * originalURL; // +0x10
    NSURL * redirectURL; // +0x18
    id <QBASIHTTPRequestDelegate> delegate; // +0x20
    id <QBASIHTTPRequestDelegate><QBASIProgressDelegate> queue; // +0x28
    NSString * requestMethod; // +0x30
    NSMutableData * postBody; // +0x38
    NSData * compressedPostBody; // +0x40
    BOOL shouldStreamPostDataFromDisk; // +0x48
    NSString * postBodyFilePath; // +0x50
    NSString * compressedPostBodyFilePath; // +0x58
    BOOL didCreateTemporaryPostDataFile; // +0x60
    NSOutputStream * postBodyWriteStream; // +0x68
    NSInputStream * postBodyReadStream; // +0x70
    NSMutableDictionary * requestHeaders; // +0x78
    BOOL haveBuiltRequestHeaders; // +0x80
    NSDictionary * responseHeaders; // +0x88
    NSMutableArray * requestCookies; // +0x90
    NSArray * responseCookies; // +0x98
    BOOL useCookiePersistence; // +0xa0
    BOOL useKeychainPersistence; // +0xa1
    BOOL useSessionPersistence; // +0xa2
    BOOL allowCompressedResponse; // +0xa3
    BOOL shouldCompressRequestBody; // +0xa4
    NSString * downloadDestinationPath; // +0xa8
    NSString * temporaryFileDownloadPath; // +0xb0
    NSString * temporaryUncompressedDataDownloadPath; // +0xb8
    NSOutputStream * fileDownloadOutputStream; // +0xc0
    NSOutputStream * inflatedFileDownloadOutputStream; // +0xc8
    BOOL complete; // +0xd0
    BOOL finished; // +0xd1
    BOOL cancelled; // +0xd2
    NSError * error; // +0xd8
    NSString * username; // +0xe0
    NSString * password; // +0xe8
    NSString * userAgentString; // +0xf0
    NSString * domain; // +0xf8
    NSString * proxyUsername; // +0x100
    NSString * proxyPassword; // +0x108
    NSString * proxyDomain; // +0x110
    id <QBASIProgressDelegate> uploadProgressDelegate; // +0x118
    id <QBASIProgressDelegate> downloadProgressDelegate; // +0x120
    BOOL haveExaminedHeaders; // +0x128
    NSMutableData * rawResponseData; // +0x130
    __CFHTTPMessage * request; // +0x138
    NSInputStream * readStream; // +0x140
    _CFHTTPAuthentication * requestAuthentication; // +0x148
    NSDictionary * requestCredentials; // +0x150
    int authenticationRetryCount; // +0x158
    NSString * authenticationScheme; // +0x160
    NSString * authenticationRealm; // +0x168
    BOOL shouldPresentAuthenticationDialog; // +0x170
    BOOL shouldPresentProxyAuthenticationDialog; // +0x171
    _CFHTTPAuthentication * proxyAuthentication; // +0x178
    NSDictionary * proxyCredentials; // +0x180
    int proxyAuthenticationRetryCount; // +0x188
    NSString * proxyAuthenticationScheme; // +0x190
    NSString * proxyAuthenticationRealm; // +0x198
    int responseStatusCode; // +0x1a0
    NSString * responseStatusMessage; // +0x1a8
    unsigned long long contentLength; // +0x1b0
    unsigned long long partialDownloadSize; // +0x1b8
    unsigned long long postLength; // +0x1c0
    unsigned long long totalBytesRead; // +0x1c8
    unsigned long long totalBytesSent; // +0x1d0
    unsigned long long lastBytesRead; // +0x1d8
    unsigned long long lastBytesSent; // +0x1e0
    NSRecursiveLock * cancelledLock; // +0x1e8
    SEL didStartSelector; // +0x1f0
    SEL didReceiveResponseHeadersSelector; // +0x1f8
    SEL willRedirectSelector; // +0x200
    SEL didFinishSelector; // +0x208
    SEL didFailSelector; // +0x210
    SEL didReceiveDataSelector; // +0x218
    NSDate * lastActivityTime; // +0x220
    double timeOutSeconds; // +0x228
    BOOL shouldResetUploadProgress; // +0x230
    BOOL shouldResetDownloadProgress; // +0x231
    QBASIHTTPRequest * mainRequest; // +0x238
    BOOL showAccurateProgress; // +0x240
    BOOL updatedProgress; // +0x241
    BOOL haveBuiltPostBody; // +0x242
    unsigned long long uploadBufferSize; // +0x248
    unsigned long long defaultResponseEncoding; // +0x250
    unsigned long long responseEncoding; // +0x258
    BOOL allowResumeForFileDownloads; // +0x260
    NSDictionary * userInfo; // +0x268
    long long tag; // +0x270
    BOOL useHTTPVersionOne; // +0x278
    BOOL shouldRedirect; // +0x279
    BOOL needsRedirect; // +0x27a
    int redirectCount; // +0x27c
    BOOL validatesSecureCertificate; // +0x280
    __SecIdentity * clientCertificateIdentity; // +0x288
    NSArray * clientCertificates; // +0x290
    NSString * proxyHost; // +0x298
    int proxyPort; // +0x2a0
    NSString * proxyType; // +0x2a8
    NSURL * PACurl; // +0x2b0
    int authenticationNeeded; // +0x2b8
    BOOL shouldPresentCredentialsBeforeChallenge; // +0x2bc
    BOOL inProgress; // +0x2bd
    BOOL readStreamIsScheduled; // +0x2be
    int numberOfTimesToRetryOnTimeout; // +0x2c0
    int retryCount; // +0x2c4
    BOOL willRetryRequest; // +0x2c8
    BOOL shouldAttemptPersistentConnection; // +0x2c9
    double persistentConnectionTimeoutSeconds; // +0x2d0
    BOOL connectionCanBeReused; // +0x2d8
    NSMutableDictionary * connectionInfo; // +0x2e0
    BOOL shouldUseRFC2616RedirectBehaviour; // +0x2e8
    BOOL downloadComplete; // +0x2e9
    NSNumber * requestID; // +0x2f0
    NSString * runLoopMode; // +0x2f8
    NSTimer * statusTimer; // +0x300
    id <QBASICacheDelegate> downloadCache; // +0x308
    int cachePolicy; // +0x310
    int cacheStoragePolicy; // +0x314
    BOOL didUseCachedResponse; // +0x318
    double secondsToCache; // +0x320
    BOOL shouldContinueWhenAppEntersBackground; // +0x328
    unsigned long long backgroundTask; // +0x330
    QBASIDataDecompressor * dataDecompressor; // +0x338
    BOOL shouldWaitToInflateCompressedResponses; // +0x340
    BOOL isPACFileRequest; // +0x341
    QBASIHTTPRequest * PACFileRequest; // +0x348
    NSInputStream * PACFileReadStream; // +0x350
    NSMutableData * PACFileData; // +0x358
    BOOL isSynchronous; // +0x360
    id /* block */ startedBlock; // +0x368
    id /* block */ headersReceivedBlock; // +0x370
    id /* block */ completionBlock; // +0x378
    id /* block */ failureBlock; // +0x380
    id /* block */ bytesReceivedBlock; // +0x388
    id /* block */ bytesSentBlock; // +0x390
    id /* block */ downloadSizeIncrementedBlock; // +0x398
    id /* block */ uploadSizeIncrementedBlock; // +0x3a0
    id /* block */ dataReceivedBlock; // +0x3a8
    id /* block */ authenticationNeededBlock; // +0x3b0
    id /* block */ proxyAuthenticationNeededBlock; // +0x3b8
    id /* block */ requestRedirectedBlock; // +0x3c0
    BOOL isQBNetwork; // +0x3c8
    BOOL noRedict; // +0x3c9
    NSThread * qbThread; // +0x3d0
    NSString * sslHost; // +0x3d8
}
+ (void)initialize;
+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 usingCache:(id)arg2;
+ (id)requestWithURL:(id)arg1 usingCache:(id)arg2 andCachePolicy:(int)arg3;
+ (void)releaseBlocks:(id)arg1;
+ (void)performSelector:(SEL)arg1 onTarget:(id *)arg2 withObject:(id)arg3 amount:(void *)arg4 callerToRetain:(id)arg5;
+ (void)performInvocation:(id)arg1 onTarget:(id *)arg2 releasingObject:(id)arg3;
+ (void)updateProgressIndicator:(id *)arg1 withProgress:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3;
+ (BOOL)removeFileAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)hasParsePac;
+ (void)expirePersistentConnections;
+ (double)defaultTimeOutSeconds;
+ (void)setDefaultTimeOutSeconds:(double)arg1;
+ (id)sessionProxyCredentialsStore;
+ (id)sessionCredentialsStore;
+ (void)storeProxyAuthenticationCredentialsInSessionStore:(id)arg1;
+ (void)storeAuthenticationCredentialsInSessionStore:(id)arg1;
+ (void)removeProxyAuthenticationCredentialsFromSessionStore:(id)arg1;
+ (void)removeAuthenticationCredentialsFromSessionStore:(id)arg1;
+ (void)saveCredentials:(id)arg1 forHost:(id)arg2 port:(int)arg3 protocol:(id)arg4 realm:(id)arg5;
+ (void)saveCredentials:(id)arg1 forProxy:(id)arg2 port:(int)arg3 realm:(id)arg4;
+ (id)savedCredentialsForHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4;
+ (id)savedCredentialsForProxy:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4;
+ (void)removeCredentialsForHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4;
+ (void)removeCredentialsForProxy:(id)arg1 port:(int)arg2 realm:(id)arg3;
+ (id)sessionCookies;
+ (void)setSessionCookies:(id)arg1;
+ (void)addSessionCookie:(id)arg1;
+ (void)clearSession;
+ (id)defaultUserAgentString;
+ (void)setDefaultUserAgentString:(id)arg1;
+ (id)mimeTypeForFileAtPath:(id)arg1;
+ (BOOL)isBandwidthThrottled;
+ (unsigned long long)maxBandwidthPerSecond;
+ (void)setMaxBandwidthPerSecond:(unsigned long long)arg1;
+ (void)incrementBandwidthUsedInLastSecond:(unsigned long long)arg1;
+ (void)recordBandwidthUsage;
+ (unsigned long long)averageBandwidthUsedPerSecond;
+ (void)measureBandwidthUsage;
+ (unsigned long long)maxUploadReadLength;
+ (void)setShouldThrottleBandwidthForWWAN:(BOOL)arg1;
+ (void)throttleBandwidthForWWANUsingLimit:(unsigned long long)arg1;
+ (void)registerForNetworkReachabilityNotifications;
+ (void)unsubscribeFromNetworkReachabilityNotifications;
+ (BOOL)isNetworkReachableViaWWAN;
+ (void)reachabilityChanged:(id)arg1;
+ (id)sharedQueue;
+ (void)setDefaultCache:(id)arg1;
+ (id)defaultCache;
+ (BOOL)isNetworkInUse;
+ (void)setShouldUpdateNetworkActivityIndicator:(BOOL)arg1;
+ (void)showNetworkActivityIndicator;
+ (void)hideNetworkActivityIndicator;
+ (void)hideNetworkActivityIndicatorAfterDelay;
+ (void)hideNetworkActivityIndicatorIfNeeeded;
+ (id)threadForRequest:(id)arg1;
+ (void)runRequests;
+ (BOOL)isMultitaskingSupported;
+ (id)base64forData:(id)arg1;
+ (id)expiryDateForRequest:(id)arg1 maxAge:(double)arg2;
+ (id)dateFromRFC1123String:(id)arg1;
+ (void)parseMimeType:(id *)arg1 andResponseEncoding:(unsigned long long *)arg2 fromContentType:(id)arg3;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (void)releaseBlocksOnMainThread;
- (void)addRequestHeader:(id)arg1 value:(id)arg2;
- (void)appendRequestHeader:(id)arg1 value:(id)arg2;
- (void)buildPostBody;
- (void)setupPostBody;
- (void)appendPostData:(id)arg1;
- (void)appendPostDataFromFile:(id)arg1;
- (id)requestMethod;
- (void)setRequestMethod:(id)arg1;
- (id)url;
- (void)setURL:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)cancelOnRequestThread;
- (void)cancel;
- (void)clearDelegatesAndCancel;
- (BOOL)isCancelled;
- (id)responseString;
- (BOOL)isResponseCompressed;
- (id)responseData;
- (void)startSynchronous;
- (void)start;
- (void)startAsynchronous;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)main;
- (void)applyAuthorizationHeader;
- (void)applyCookieHeader;
- (void)buildRequestHeaders;
- (void)updatePartialDownloadSize;
- (void)startRequest;
- (void)setStatusTimer:(id)arg1;
- (void)updateStatus:(id)arg1;
- (void)performRedirect;
- (void)redirectToURL:(id)arg1;
- (BOOL)shouldTimeOut;
- (void)checkRequestStatus;
- (void)cancelLoad;
- (id)HEADRequest;
- (void)updateProgressIndicators;
- (id)uploadProgressDelegate;
- (void)setUploadProgressDelegate:(id)arg1;
- (id)downloadProgressDelegate;
- (void)setDownloadProgressDelegate:(id)arg1;
- (void)updateDownloadProgress;
- (void)updateUploadProgress;
- (void)incrementDownloadSizeBy:(long long)arg1;
- (void)incrementUploadSizeBy:(long long)arg1;
- (void)removeUploadProgressSoFar;
- (void)performBlockOnMainThread:(id /* block */)arg1;
- (void)callBlock:(id /* block */)arg1;
- (void)requestStarted;
- (void)requestRedirected;
- (void)requestReceivedResponseHeaders:(id)arg1;
- (void)requestWillRedirectToURL:(id)arg1;
- (void)requestFinished;
- (void)reportFinished;
- (void)reportFailure;
- (void)passOnReceivedData:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)readResponseHeaders;
- (BOOL)willRedirect;
- (void)parseStringEncodingFromHeaders;
- (void)saveProxyCredentialsToKeychain:(id)arg1;
- (void)saveCredentialsToKeychain:(id)arg1;
- (BOOL)applyProxyCredentials:(id)arg1;
- (BOOL)applyCredentials:(id)arg1;
- (id)findProxyCredentials;
- (id)findCredentials;
- (void)retryUsingSuppliedCredentials;
- (void)cancelAuthentication;
- (void)failAuthentication;
- (BOOL)showProxyAuthenticationDialog;
- (BOOL)willAskDelegateForProxyCredentials;
- (void)askDelegateForProxyCredentials;
- (BOOL)willAskDelegateForCredentials;
- (void)askDelegateForCredentials;
- (void)attemptToApplyProxyCredentialsAndResume;
- (BOOL)showAuthenticationDialog;
- (void)attemptToApplyCredentialsAndResume;
- (void)addBasicAuthenticationHeaderWithUsername:(id)arg1 andPassword:(id)arg2;
- (void)handleNetworkEvent:(unsigned long long)arg1;
- (BOOL)willAskDelegateToConfirmRedirect;
- (void)handleBytesAvailable;
- (void)handleStreamComplete;
- (void)markAsFinished;
- (void)useDataFromCache;
- (BOOL)retryUsingNewConnection;
- (void)handleStreamError;
- (void)destroyReadStream;
- (void)scheduleReadStream;
- (void)unscheduleReadStream;
- (BOOL)removeTemporaryDownloadFile;
- (BOOL)removeTemporaryUncompressedDownloadFile;
- (BOOL)removeTemporaryUploadFile;
- (BOOL)removeTemporaryCompressedUploadFile;
- (BOOL)configureProxies;
- (void)fetchPACFile;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)timeOutPACRead;
- (void)runPACScript:(id)arg1;
- (void)finishedDownloadingPACFile:(id)arg1;
- (id)connectionID;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setClientCertificateIdentity:(__SecIdentity *)arg1;
- (id)findSessionProxyAuthenticationCredentials;
- (id)findSessionAuthenticationCredentials;
- (void)performThrottling;
- (void)setStartedBlock:(id /* block */)arg1;
- (void)setHeadersReceivedBlock:(id /* block */)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setFailedBlock:(id /* block */)arg1;
- (void)setBytesReceivedBlock:(id /* block */)arg1;
- (void)setBytesSentBlock:(id /* block */)arg1;
- (void)setDownloadSizeIncrementedBlock:(id /* block */)arg1;
- (void)setUploadSizeIncrementedBlock:(id /* block */)arg1;
- (void)setDataReceivedBlock:(id /* block */)arg1;
- (void)setAuthenticationNeededBlock:(id /* block */)arg1;
- (void)setProxyAuthenticationNeededBlock:(id /* block */)arg1;
- (void)setRequestRedirectedBlock:(id /* block */)arg1;
- (void)qbStartSynchronous;
- (void)qbStartAsynchronous;
- (void)qbCancel;
- (void)qbRedirectToURL:(id)arg1;
- (BOOL)qbNeedsRedirect;
- (void)qbSetPostBodyReadStream:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)userAgentString;
- (void)setUserAgentString:(id)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)proxyUsername;
- (void)setProxyUsername:(id)arg1;
- (id)proxyPassword;
- (void)setProxyPassword:(id)arg1;
- (id)proxyDomain;
- (void)setProxyDomain:(id)arg1;
- (id)originalURL;
- (void)setOriginalURL:(id)arg1;
- (BOOL)useKeychainPersistence;
- (void)setUseKeychainPersistence:(BOOL)arg1;
- (BOOL)useSessionPersistence;
- (void)setUseSessionPersistence:(BOOL)arg1;
- (BOOL)useCookiePersistence;
- (void)setUseCookiePersistence:(BOOL)arg1;
- (id)downloadDestinationPath;
- (void)setDownloadDestinationPath:(id)arg1;
- (id)temporaryFileDownloadPath;
- (void)setTemporaryFileDownloadPath:(id)arg1;
- (id)temporaryUncompressedDataDownloadPath;
- (void)setTemporaryUncompressedDataDownloadPath:(id)arg1;
- (SEL)didStartSelector;
- (void)setDidStartSelector:(SEL)arg1;
- (SEL)didReceiveResponseHeadersSelector;
- (void)setDidReceiveResponseHeadersSelector:(SEL)arg1;
- (SEL)willRedirectSelector;
- (void)setWillRedirectSelector:(SEL)arg1;
- (SEL)didFinishSelector;
- (void)setDidFinishSelector:(SEL)arg1;
- (SEL)didFailSelector;
- (void)setDidFailSelector:(SEL)arg1;
- (SEL)didReceiveDataSelector;
- (void)setDidReceiveDataSelector:(SEL)arg1;
- (id)authenticationRealm;
- (void)setAuthenticationRealm:(id)arg1;
- (id)proxyAuthenticationRealm;
- (void)setProxyAuthenticationRealm:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (BOOL)complete;
- (void)setComplete:(BOOL)arg1;
- (id)requestHeaders;
- (void)setRequestHeaders:(id)arg1;
- (id)responseHeaders;
- (void)setResponseHeaders:(id)arg1;
- (id)responseCookies;
- (void)setResponseCookies:(id)arg1;
- (id)requestCookies;
- (void)setRequestCookies:(id)arg1;
- (id)requestCredentials;
- (void)setRequestCredentials:(id)arg1;
- (int)responseStatusCode;
- (void)setResponseStatusCode:(int)arg1;
- (id)rawResponseData;
- (void)setRawResponseData:(id)arg1;
- (id)lastActivityTime;
- (void)setLastActivityTime:(id)arg1;
- (double)timeOutSeconds;
- (void)setTimeOutSeconds:(double)arg1;
- (id)postBody;
- (void)setPostBody:(id)arg1;
- (id)compressedPostBody;
- (void)setCompressedPostBody:(id)arg1;
- (unsigned long long)contentLength;
- (void)setContentLength:(unsigned long long)arg1;
- (unsigned long long)partialDownloadSize;
- (void)setPartialDownloadSize:(unsigned long long)arg1;
- (unsigned long long)postLength;
- (void)setPostLength:(unsigned long long)arg1;
- (BOOL)shouldResetDownloadProgress;
- (void)setShouldResetDownloadProgress:(BOOL)arg1;
- (BOOL)shouldResetUploadProgress;
- (void)setShouldResetUploadProgress:(BOOL)arg1;
- (id)mainRequest;
- (void)setMainRequest:(id)arg1;
- (unsigned long long)totalBytesRead;
- (void)setTotalBytesRead:(unsigned long long)arg1;
- (unsigned long long)totalBytesSent;
- (void)setTotalBytesSent:(unsigned long long)arg1;
- (BOOL)showAccurateProgress;
- (void)setShowAccurateProgress:(BOOL)arg1;
- (unsigned long long)uploadBufferSize;
- (void)setUploadBufferSize:(unsigned long long)arg1;
- (unsigned long long)defaultResponseEncoding;
- (void)setDefaultResponseEncoding:(unsigned long long)arg1;
- (unsigned long long)responseEncoding;
- (void)setResponseEncoding:(unsigned long long)arg1;
- (BOOL)allowCompressedResponse;
- (void)setAllowCompressedResponse:(BOOL)arg1;
- (BOOL)allowResumeForFileDownloads;
- (void)setAllowResumeForFileDownloads:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (long long)tag;
- (void)setTag:(long long)arg1;
- (id)postBodyFilePath;
- (void)setPostBodyFilePath:(id)arg1;
- (id)compressedPostBodyFilePath;
- (void)setCompressedPostBodyFilePath:(id)arg1;
- (id)postBodyWriteStream;
- (void)setPostBodyWriteStream:(id)arg1;
- (id)postBodyReadStream;
- (void)setPostBodyReadStream:(id)arg1;
- (BOOL)shouldStreamPostDataFromDisk;
- (void)setShouldStreamPostDataFromDisk:(BOOL)arg1;
- (BOOL)didCreateTemporaryPostDataFile;
- (void)setDidCreateTemporaryPostDataFile:(BOOL)arg1;
- (BOOL)useHTTPVersionOne;
- (void)setUseHTTPVersionOne:(BOOL)arg1;
- (unsigned long long)lastBytesRead;
- (void)setLastBytesRead:(unsigned long long)arg1;
- (unsigned long long)lastBytesSent;
- (void)setLastBytesSent:(unsigned long long)arg1;
- (id)cancelledLock;
- (void)setCancelledLock:(id)arg1;
- (BOOL)haveBuiltPostBody;
- (void)setHaveBuiltPostBody:(BOOL)arg1;
- (id)fileDownloadOutputStream;
- (void)setFileDownloadOutputStream:(id)arg1;
- (id)inflatedFileDownloadOutputStream;
- (void)setInflatedFileDownloadOutputStream:(id)arg1;
- (int)authenticationRetryCount;
- (void)setAuthenticationRetryCount:(int)arg1;
- (int)proxyAuthenticationRetryCount;
- (void)setProxyAuthenticationRetryCount:(int)arg1;
- (BOOL)updatedProgress;
- (void)setUpdatedProgress:(BOOL)arg1;
- (BOOL)shouldRedirect;
- (void)setShouldRedirect:(BOOL)arg1;
- (BOOL)validatesSecureCertificate;
- (void)setValidatesSecureCertificate:(BOOL)arg1;
- (BOOL)needsRedirect;
- (void)setNeedsRedirect:(BOOL)arg1;
- (int)redirectCount;
- (void)setRedirectCount:(int)arg1;
- (BOOL)shouldCompressRequestBody;
- (void)setShouldCompressRequestBody:(BOOL)arg1;
- (id)proxyCredentials;
- (void)setProxyCredentials:(id)arg1;
- (id)proxyHost;
- (void)setProxyHost:(id)arg1;
- (int)proxyPort;
- (void)setProxyPort:(int)arg1;
- (id)proxyType;
- (void)setProxyType:(id)arg1;
- (id)PACurl;
- (void)setPACurl:(id)arg1;
- (id)authenticationScheme;
- (void)setAuthenticationScheme:(id)arg1;
- (id)proxyAuthenticationScheme;
- (void)setProxyAuthenticationScheme:(id)arg1;
- (BOOL)shouldPresentAuthenticationDialog;
- (void)setShouldPresentAuthenticationDialog:(BOOL)arg1;
- (BOOL)shouldPresentProxyAuthenticationDialog;
- (void)setShouldPresentProxyAuthenticationDialog:(BOOL)arg1;
- (int)authenticationNeeded;
- (void)setAuthenticationNeeded:(int)arg1;
- (id)responseStatusMessage;
- (void)setResponseStatusMessage:(id)arg1;
- (BOOL)shouldPresentCredentialsBeforeChallenge;
- (void)setShouldPresentCredentialsBeforeChallenge:(BOOL)arg1;
- (BOOL)haveBuiltRequestHeaders;
- (void)setHaveBuiltRequestHeaders:(BOOL)arg1;
- (BOOL)inProgress;
- (void)setInProgress:(BOOL)arg1;
- (int)numberOfTimesToRetryOnTimeout;
- (void)setNumberOfTimesToRetryOnTimeout:(int)arg1;
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (BOOL)willRetryRequest;
- (void)setWillRetryRequest:(BOOL)arg1;
- (BOOL)shouldAttemptPersistentConnection;
- (void)setShouldAttemptPersistentConnection:(BOOL)arg1;
- (double)persistentConnectionTimeoutSeconds;
- (void)setPersistentConnectionTimeoutSeconds:(double)arg1;
- (BOOL)connectionCanBeReused;
- (void)setConnectionCanBeReused:(BOOL)arg1;
- (id)connectionInfo;
- (void)setConnectionInfo:(id)arg1;
- (id)readStream;
- (void)setReadStream:(id)arg1;
- (BOOL)readStreamIsScheduled;
- (void)setReadStreamIsScheduled:(BOOL)arg1;
- (BOOL)shouldUseRFC2616RedirectBehaviour;
- (void)setShouldUseRFC2616RedirectBehaviour:(BOOL)arg1;
- (BOOL)downloadComplete;
- (void)setDownloadComplete:(BOOL)arg1;
- (id)requestID;
- (void)setRequestID:(id)arg1;
- (id)runLoopMode;
- (void)setRunLoopMode:(id)arg1;
- (id)statusTimer;
- (id)downloadCache;
- (void)setDownloadCache:(id)arg1;
- (int)cachePolicy;
- (void)setCachePolicy:(int)arg1;
- (int)cacheStoragePolicy;
- (void)setCacheStoragePolicy:(int)arg1;
- (BOOL)didUseCachedResponse;
- (void)setDidUseCachedResponse:(BOOL)arg1;
- (double)secondsToCache;
- (void)setSecondsToCache:(double)arg1;
- (id)clientCertificates;
- (void)setClientCertificates:(id)arg1;
- (id)redirectURL;
- (void)setRedirectURL:(id)arg1;
- (BOOL)shouldContinueWhenAppEntersBackground;
- (void)setShouldContinueWhenAppEntersBackground:(BOOL)arg1;
- (id)dataDecompressor;
- (void)setDataDecompressor:(id)arg1;
- (BOOL)shouldWaitToInflateCompressedResponses;
- (void)setShouldWaitToInflateCompressedResponses:(BOOL)arg1;
- (BOOL)isPACFileRequest;
- (void)setIsPACFileRequest:(BOOL)arg1;
- (id)PACFileRequest;
- (void)setPACFileRequest:(id)arg1;
- (id)PACFileReadStream;
- (void)setPACFileReadStream:(id)arg1;
- (id)PACFileData;
- (void)setPACFileData:(id)arg1;
- (BOOL)isSynchronous;
- (void)setSynchronous:(BOOL)arg1;
- (BOOL)isQBNetwork;
- (void)setIsQBNetwork:(BOOL)arg1;
- (BOOL)noRedict;
- (void)setNoRedict:(BOOL)arg1;
- (id)qbThread;
- (void)setQbThread:(id)arg1;
- (id)sslHost;
- (void)setSslHost:(id)arg1;
@end

