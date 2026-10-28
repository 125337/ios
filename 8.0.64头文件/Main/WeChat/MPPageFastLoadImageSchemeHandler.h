@interface MPPageFastLoadImageSchemeHandler : NSObject <WKURLSchemeHandler>
{
    id <MPPageFastLoadImageSchemeHandlerDelegate> _delegate; // +0x8
    NSURLSession * _imageRequestSession; // +0x10
    NSMutableSet * _ongoingTasks; // +0x18
    NSObject<OS_dispatch_queue> * _decodeQueue; // +0x20
    NSObject<OS_dispatch_semaphore> * _decodeSemaphore; // +0x28
    MPPageFastLoadWXPicDecoder * _wxPicDecoder; // +0x30
    NSArray * _preloadImageIDs; // +0x38
}
+ (id)fixSchemeIfNeedForURL:(id)arg1 originScheme:(id)arg2;
+ (id)createOnlineRequestURLForURL:(id)arg1;
+ (BOOL)isURLSupportWxPic:(id)arg1;
- (id)customScheme;
- (id)init;
- (void)loadPreloadImageIDsWithPageURL:(id)arg1;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)getImageFromCacheIfNeedForTask:(id)arg1 pageDataKeyURL:(id)arg2;
- (void)fallbackToOnlineRequestForTask:(id)arg1 pageDataKeyURL:(id)arg2 shouldSaveCache:(BOOL)arg3;
- (id)getImageContentTypeFromTask:(id)arg1;
- (id)getImageTypeFromTask:(id)arg1;
- (id)createSuccessResponseForImageData:(id)arg1 contentType:(id)arg2 url:(id)arg3 headers:(id)arg4;
- (id)create404ResponseForURL:(id)arg1;
- (void)finishTask:(id)arg1 withError:(id)arg2;
- (void)finishTask:(id)arg1 withResponse:(id)arg2 data:(id)arg3;
- (void)decodeAndFinishForTask:(id)arg1 imageData:(id)arg2 serverContentType:(id)arg3 originHeaders:(id)arg4 saveContext:(id)arg5;
- (BOOL)canUseExternalCoverImageForURL:(id)arg1;
- (void)reportCacheAction:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imageRequestSession;
- (void)setImageRequestSession:(id)arg1;
- (id)ongoingTasks;
- (void)setOngoingTasks:(id)arg1;
- (id)decodeQueue;
- (void)setDecodeQueue:(id)arg1;
- (id)decodeSemaphore;
- (void)setDecodeSemaphore:(id)arg1;
- (id)wxPicDecoder;
- (void)setWxPicDecoder:(id)arg1;
- (id)preloadImageIDs;
- (void)setPreloadImageIDs:(id)arg1;
- (void).cxx_destruct;
@end
