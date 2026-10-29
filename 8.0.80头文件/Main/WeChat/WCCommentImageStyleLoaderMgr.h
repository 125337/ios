@interface WCCommentImageStyleLoaderMgr : MMUserService <MMServiceProtocol>
{
    NSCache * _imageLoaderCache; // +0x8
    NSCache * _imageStyleCache; // +0x10
}
- (id)init;
- (void)setImageLoader:(id)arg1 forMediaId:(id)arg2;
- (void)removeImageLoaderForMediaId:(id)arg1;
- (id)getImageLoaderForMediaId:(id)arg1;
- (void)setImageStyle:(id)arg1 forMediaId:(id)arg2;
- (void)removeImageStyleForMediaId:(id)arg1;
- (id)getImageStyleforMediaId:(id)arg1;
- (void)clearAllImageLoaderCache;
- (void)clearAllStyleLoaderCache;
- (id)imageLoaderCache;
- (void)setImageLoaderCache:(id)arg1;
- (id)imageStyleCache;
- (void)setImageStyleCache:(id)arg1;
- (void).cxx_destruct;
@end
