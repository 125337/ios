@interface LiteAppJsApiAddImageToFavorites : LiteAppJsApi <IHttpCacheExt>
{
    NSString * _cacheKey; // +0x20
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)addToFavoritesWithImageData:(id)arg1;
- (unsigned long long)getImageDataWithHttpUrl:(id)arg1 dataPtr:(id *)arg2;
- (id)genKeyForUrl:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (void).cxx_destruct;
@end
