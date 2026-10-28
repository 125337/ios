@interface WAJSEventHandler_returnGeneratedPoster : WAJSEventHandler_BaseEvent <IHttpCacheExt>
{
    id /* block */ _getImageCompletion; // +0x8
    NSString * _cacheKey; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)getImageDataFromImageURL:(id)arg1 completion:(id /* block */)arg2;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (id)genCacheKeyForUrl:(id)arg1;
- (id /* block */)getImageCompletion;
- (void)setGetImageCompletion:(id /* block */)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (void).cxx_destruct;
@end
