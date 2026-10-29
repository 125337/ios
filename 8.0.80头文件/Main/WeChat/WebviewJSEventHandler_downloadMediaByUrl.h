@interface WebviewJSEventHandler_downloadMediaByUrl : WebviewJSEventHandlerBase <IHttpCacheExt, IWebviewResourceManagerExt>
{
    NSString * _cacheKey; // +0x8
    NSString * _type; // +0x10
    id /* block */ _getDataCompletion; // +0x18
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)getDataFromURL:(id)arg1 completion:(id /* block */)arg2;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (id)genCacheKeyForUrl:(id)arg1;
- (void)processImageData:(id)arg1;
- (void)processVideoData:(id)arg1;
- (void)dealloc;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id /* block */)getDataCompletion;
- (void)setGetDataCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
