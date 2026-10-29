@interface WAJSEventHandler_addImageToFavorites : WAJSEventHandler_BaseEvent <IHttpCacheExt>
{
    NSString * _cacheKey; // +0x8
}
- (id)init;
- (void)handleJSEvent:(id)arg1;
- (void)addToFavoritesWithImageData:(id)arg1;
- (unsigned long long)getImageDataWithHttpUrl:(id)arg1 dataPtr:(id *)arg2;
- (id)getImageDataWithLocalId:(id)arg1;
- (id)getImageDataWithPackageRelativeURL:(id)arg1;
- (id)genKeyForUrl:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (void).cxx_destruct;
@end

