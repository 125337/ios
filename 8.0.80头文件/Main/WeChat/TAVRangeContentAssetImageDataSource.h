@interface TAVRangeContentAssetImageDataSource : NSObject <TAVVideoRangeContentViewDataSource>
{
    AVAsset * _asset; // +0x8
    double _widthPerSecond; // +0x10
    TAVCachedAssetImageGenerator * _imageGenerator; // +0x18
    CGSize _imageSize; // +0x20
}
- (id)initWithAsset:(id)arg1 imageSize:(CGSize)arg2 widthPerSecond:(double)arg3;
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2 imageSize:(CGSize)arg3 widthPerSecond:(double)arg4;
- (void)setImageSize:(CGSize)arg1;
- (long long)videoRangeContentViewNumberOfImages:(id)arg1;
- (id)videoRangeContent:(id)arg1 imageAtIndex:(long long)arg2 preferredSize:(CGSize)arg3;
- (BOOL)videoRangeContent:(id)arg1 hasCacheAtIndex:(long long)arg2;
- (id)asset;
- (void)setAsset:(id)arg1;
- (CGSize)imageSize;
- (double)widthPerSecond;
- (void)setWidthPerSecond:(double)arg1;
- (id)imageGenerator;
- (void)setImageGenerator:(id)arg1;
- (void).cxx_destruct;
@end
