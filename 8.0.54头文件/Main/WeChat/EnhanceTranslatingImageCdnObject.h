@interface EnhanceTranslatingImageCdnObject : NSObject
{
    UIImage * _captureImage; // +0x8
    UIImage * _enhanceImage; // +0x10
    UIImage * _translateImage; // +0x18
    NSString * _captureImageCdnFiledId; // +0x20
    NSString * _captureImageCdnAesKey; // +0x28
    NSString * _enhanceImageCdnFiledId; // +0x30
    NSString * _enhanceImageCdnAesKey; // +0x38
    NSString * _translateImageCdnFiledId; // +0x40
    NSString * _translateImageCdnAesKey; // +0x48
}
- (id)captureImage;
- (void)setCaptureImage:(id)arg1;
- (id)enhanceImage;
- (void)setEnhanceImage:(id)arg1;
- (id)translateImage;
- (void)setTranslateImage:(id)arg1;
- (id)captureImageCdnFiledId;
- (void)setCaptureImageCdnFiledId:(id)arg1;
- (id)captureImageCdnAesKey;
- (void)setCaptureImageCdnAesKey:(id)arg1;
- (id)enhanceImageCdnFiledId;
- (void)setEnhanceImageCdnFiledId:(id)arg1;
- (id)enhanceImageCdnAesKey;
- (void)setEnhanceImageCdnAesKey:(id)arg1;
- (id)translateImageCdnFiledId;
- (void)setTranslateImageCdnFiledId:(id)arg1;
- (id)translateImageCdnAesKey;
- (void)setTranslateImageCdnAesKey:(id)arg1;
- (void).cxx_destruct;
@end

