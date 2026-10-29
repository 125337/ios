@interface QBASINetworkQueue : NSOperationQueue <QBASIProgressDelegate, QBASIHTTPRequestDelegate, NSCopying>
{
    id delegate; // +0x8
    SEL requestDidStartSelector; // +0x10
    SEL requestDidReceiveResponseHeadersSelector; // +0x18
    SEL requestWillRedirectSelector; // +0x20
    SEL requestDidFinishSelector; // +0x28
    SEL requestDidFailSelector; // +0x30
    SEL queueDidFinishSelector; // +0x38
    id uploadProgressDelegate; // +0x40
    unsigned long long bytesUploadedSoFar; // +0x48
    unsigned long long totalBytesToUpload; // +0x50
    id downloadProgressDelegate; // +0x58
    unsigned long long bytesDownloadedSoFar; // +0x60
    unsigned long long totalBytesToDownload; // +0x68
    BOOL shouldCancelAllRequestsOnFailure; // +0x70
    int requestsCount; // +0x74
    BOOL showAccurateProgress; // +0x78
    NSDictionary * userInfo; // +0x80
}
+ (id)queue;
- (id)init;
- (void)dealloc;
- (void)setSuspended:(BOOL)arg1;
- (void)reset;
- (void)go;
- (void)cancelAllOperations;
- (void)setUploadProgressDelegate:(id)arg1;
- (void)setDownloadProgressDelegate:(id)arg1;
- (void)resetProgressDelegate:(id *)arg1;
- (void)addHEADOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)requestStarted:(id)arg1;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)request:(id)arg1 willRedirectToURL:(id)arg2;
- (void)requestFinished:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)request:(id)arg1 didReceiveBytes:(long long)arg2;
- (void)request:(id)arg1 didSendBytes:(long long)arg2;
- (void)request:(id)arg1 incrementDownloadSizeBy:(long long)arg2;
- (void)request:(id)arg1 incrementUploadSizeBy:(long long)arg2;
- (void)authenticationNeededForRequest:(id)arg1;
- (void)proxyAuthenticationNeededForRequest:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (int)requestsCount;
- (void)setRequestsCount:(int)arg1;
- (unsigned long long)bytesUploadedSoFar;
- (void)setBytesUploadedSoFar:(unsigned long long)arg1;
- (unsigned long long)totalBytesToUpload;
- (void)setTotalBytesToUpload:(unsigned long long)arg1;
- (unsigned long long)bytesDownloadedSoFar;
- (void)setBytesDownloadedSoFar:(unsigned long long)arg1;
- (unsigned long long)totalBytesToDownload;
- (void)setTotalBytesToDownload:(unsigned long long)arg1;
- (BOOL)shouldCancelAllRequestsOnFailure;
- (void)setShouldCancelAllRequestsOnFailure:(BOOL)arg1;
- (id)uploadProgressDelegate;
- (id)downloadProgressDelegate;
- (SEL)requestDidStartSelector;
- (void)setRequestDidStartSelector:(SEL)arg1;
- (SEL)requestDidReceiveResponseHeadersSelector;
- (void)setRequestDidReceiveResponseHeadersSelector:(SEL)arg1;
- (SEL)requestWillRedirectSelector;
- (void)setRequestWillRedirectSelector:(SEL)arg1;
- (SEL)requestDidFinishSelector;
- (void)setRequestDidFinishSelector:(SEL)arg1;
- (SEL)requestDidFailSelector;
- (void)setRequestDidFailSelector:(SEL)arg1;
- (SEL)queueDidFinishSelector;
- (void)setQueueDidFinishSelector:(SEL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showAccurateProgress;
- (void)setShowAccurateProgress:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
@end

