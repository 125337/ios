@interface AVAssetImageGenerator (FinderHDRConvertor)
+ (void)checkIsHDRVideo:(id)arg1 completion:(id /* block */)arg2;
+ (void)createVideoCompositionWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (CGImage *)syncCopyCGImageAtTime:(struct)arg1 actualTime:(struct *)arg2 error:(id *)arg3;
- (id)syncCopyImageAtTime:(struct)arg1 actualTime:(struct *)arg2 error:(id *)arg3;
- (void)asyncSetupFinderHDRConvertor:(id /* block */)arg1;
- (BOOL)syncSetupFinderHDRConvertor;
@end
