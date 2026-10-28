@interface MPOverMarsNetworkSchemeHandler : NSObject <WCURLSessionDataDelegate, WKURLSchemeHandler>
{
    WCURLSession * _marsSession; // +0x8
    NSMutableArray * _tasks; // +0x10
    MPPageFastLoadWXPicDecoder * _wxpicDecoder; // +0x18
    NSObject<OS_dispatch_queue> * _decodeQueue; // +0x20
    NSObject<OS_dispatch_semaphore> * _decodeSemaphore; // +0x28
}
+ (BOOL)isURLSupportWxPic:(id)arg1;
- (id)init;
- (id)customScheme;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)startURLSchemeTask:(id)arg1 originURLComponents:(id)arg2;
- (id)create404ResponseForURL:(id)arg1;
- (void)stopTask:(id)arg1 withResponse:(id)arg2 data:(id)arg3;
- (void)stopTaskBySchemeTask:(id)arg1;
- (void)removeTaskBySessionTask:(id)arg1;
- (id)networkTaskForSessionTask:(id)arg1;
- (id)decodeWxPicDataIfNeed:(id)arg1 task:(id)arg2 response:(id)arg3 error:(id *)arg4;
- (id)getImageTypeFromTask:(id)arg1;
- (id)getImageContentTypeFromTask:(id)arg1;
- (id)createSuccessResponseForImageData:(id)arg1 contentType:(id)arg2 originResponse:(id)arg3;
- (void)WCURLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)WCURLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)WCURLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)marsSession;
- (void)setMarsSession:(id)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (id)wxpicDecoder;
- (void)setWxpicDecoder:(id)arg1;
- (id)decodeQueue;
- (void)setDecodeQueue:(id)arg1;
- (id)decodeSemaphore;
- (void)setDecodeSemaphore:(id)arg1;
- (void).cxx_destruct;
@end
