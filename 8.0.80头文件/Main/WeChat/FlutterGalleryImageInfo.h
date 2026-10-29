@interface FlutterGalleryImageInfo : SimpleImgInfo
{
    NSString * _imagePath; // +0x20
    NSString * _sourceUrl; // +0x28
}
- (BOOL)isImgMsg;
- (id)getImgPath;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (void).cxx_destruct;
@end
