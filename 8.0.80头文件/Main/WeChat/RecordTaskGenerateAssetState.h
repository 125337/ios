@interface RecordTaskGenerateAssetState : RecordTaskBaseState
{
    BOOL _isGeneratedMiddleImage; // +0x8
    BOOL _isConvertedToH264Video; // +0x9
    BOOL _isConvertedImageToJpeg; // +0xa
    BOOL _isConvertedMiddleImageToJpeg; // +0xb
}
- (void)start;
- (void)checkState;
- (id)getStateName;
- (void)refreshMd5AndSizeForConvertedAsset:(unsigned long long)arg1 path:(id)arg2 scene:(id)arg3 completion:(id /* block */)arg4;
- (void)applyRefreshedMd5:(id)arg1 size:(long long)arg2 forConvertedAsset:(unsigned long long)arg3 scene:(id)arg4;
- (void)tryGenerateThumbImage;
- (id)generateThumbImageMsg:(id)arg1;
- (BOOL)tryGenMiddleImage;
- (BOOL)tryConvertToH264Video;
- (BOOL)tryConvertImageToJpeg:(id)arg1 convertedAsset:(unsigned long long)arg2;
- (BOOL)isGeneratedMiddleImage;
- (void)setIsGeneratedMiddleImage:(BOOL)arg1;
- (BOOL)isConvertedToH264Video;
- (void)setIsConvertedToH264Video:(BOOL)arg1;
- (BOOL)isConvertedImageToJpeg;
- (void)setIsConvertedImageToJpeg:(BOOL)arg1;
- (BOOL)isConvertedMiddleImageToJpeg;
- (void)setIsConvertedMiddleImageToJpeg:(BOOL)arg1;
@end
