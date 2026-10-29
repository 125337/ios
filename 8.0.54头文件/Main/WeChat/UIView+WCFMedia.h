@interface UIView (WCFMedia)
- (id)wcfMediaTid;
- (void)wcfSetMediaTid:(id)arg1;
- (void)wcfSetImageWithMedia:(id)arg1 type:(long long)arg2 scaleToSize:(CGSize)arg3 completion:(id /* block */)arg4;
- (void)wcfSetImageWithMedia:(id)arg1 type:(long long)arg2 scaleToSize:(CGSize)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
- (void)wcfLoadImageFromCacheWithMedia:(id)arg1 type:(long long)arg2 scaleToSize:(CGSize)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
- (void)wcfLoadImageWithMedia:(id)arg1 scaleToSize:(CGSize)arg2 options:(long long)arg3 completion:(id /* block */)arg4;
- (void)wcfLoadImageWithMedia:(id)arg1 fullScreenThumbFirst:(BOOL)arg2 scaleToSize:(CGSize)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
- (void)wcfLoadImageWithMedia:(id)arg1 setting:(long long)arg2 scaleToSize:(CGSize)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
- (void)wcfLoadImageForVideoMedia:(id)arg1 scaleToSize:(CGSize)arg2 options:(long long)arg3 completion:(id /* block */)arg4;
- (void)wcfLoadImageForPhotoMedia:(id)arg1 setting:(long long)arg2 scaleToSize:(CGSize)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
- (void)wcfLoadImageForPhotoS2:(id)arg1 setting:(long long)arg2 called:(BOOL)arg3 scaleToSize:(CGSize)arg4 options:(long long)arg5 completion:(id /* block */)arg6;
- (void)wcfLoadImageForPhotoS3:(id)arg1 retryForThumb:(BOOL)arg2 setting:(long long)arg3 called:(BOOL)arg4 scaleToSize:(CGSize)arg5 options:(long long)arg6 completion:(id /* block */)arg7;
- (void)wcfLoadImageForPhotoS4:(id)arg1 setting:(long long)arg2 called:(BOOL)arg3 scaleToSize:(CGSize)arg4 options:(long long)arg5 completion:(id /* block */)arg6;
- (void)wcfPreloadImageWithMedia:(id)arg1 type:(long long)arg2 scaleToSize:(CGSize)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
@end

