@interface MMAssetFromSandboxFramework : MMAsset
{
    NSString * _localAssetURL; // +0x8
}
- (id)initWithLocalURL:(id)arg1;
- (id)getThumbImage;
- (id)getThumbImageWithSize:(CGSize)arg1;
- (id)getThumbnail;
- (id)assetUrl;
- (id)assetId;
- (void)asyncGetVideoAssetWithBlock:(id /* block */)arg1;
- (id)videoDuration;
- (CGSize)getImageRatioSize;
- (id)localAssetURL;
- (void)setLocalAssetURL:(id)arg1;
- (void).cxx_destruct;
@end

