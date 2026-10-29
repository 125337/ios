@interface UIView (WCFCache)
- (void)wcfSetImageLoadOperation:(id)arg1;
- (id)wcfImageLoadOperation;
- (id)wcfBeginImageLoadRequest;
- (BOOL)wcfIsCurrentImageLoadRequest:(id)arg1;
- (void)wcfSetImageURLKey:(id)arg1;
- (id)wcfImageURLKey;
- (void)wcfCancelCurrentImageOperationKeepingRequest;
- (void)wcfCancelCurrentImageLoad;
- (void)wcfSetImageWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)wcfSetImageWithURL:(id)arg1 scaleToSize:(CGSize)arg2 completion:(id /* block */)arg3;
- (void)wcfSetImageWithURL:(id)arg1 imageIdentifier:(id)arg2 scaleToSize:(CGSize)arg3 completion:(id /* block */)arg4;
@end
