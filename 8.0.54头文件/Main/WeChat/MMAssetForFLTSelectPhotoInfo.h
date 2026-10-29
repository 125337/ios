@interface MMAssetForFLTSelectPhotoInfo : MMAsset
{
    NSString * _assetId; // +0x8
    NSString * _assetPath; // +0x10
    UIImage * _image; // +0x18
}
- (id)getThumbImage;
- (id)getThumbnail;
- (id)getThumbImageWithSize:(CGSize)arg1;
- (void)asyncGetThumbnail:(id /* block */)arg1;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(id /* block */)arg2 ErrorBlock:(id /* block */)arg3;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4 FaceCountBlock:(id /* block */)arg5;
- (id)assetId;
- (void)setAssetId:(id)arg1;
- (id)assetPath;
- (void)setAssetPath:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
@end

