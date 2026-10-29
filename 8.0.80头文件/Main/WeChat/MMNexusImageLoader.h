@interface MMNexusImageLoader : NSObject
+ (id)_payloadFromResponse:(id)arg1;
+ (BOOL)_imageHasAlpha:(id)arg1;
+ (id)_sniffMimeFromData:(id)arg1 hasAlpha:(BOOL)arg2;
- (void)_preloadNexusRawImagesForSources:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)loadImagesIntoHost:(id)arg1 keyedSources:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
- (void)loadImagesIntoStore:(id)arg1 keyedSources:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
- (void)loadImagesForKeys:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)_fetchPayloadForSource:(id)arg1 completion:(id /* block */)arg2;
@end
