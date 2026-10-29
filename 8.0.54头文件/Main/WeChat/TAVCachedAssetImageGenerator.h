@interface TAVCachedAssetImageGenerator : AVAssetImageGenerator
{
    NSMutableDictionary * _imageCache; // +0x10
}
+ (id)assetImageGeneratorWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (CGImage *)copyCGImageAtTime:(struct)arg1 actualTime:(struct *)arg2 error:(id *)arg3;
- (void)generateCGImagesAsynchronouslyForTime:(struct)arg1 completeHandle:(id /* block */)arg2;
- (BOOL)hasCacheAtTime:(struct)arg1;
- (id)keyAtTime:(struct)arg1;
- (id)imageCache;
- (void)setImageCache:(id)arg1;
- (void).cxx_destruct;
@end

