@interface OMJImageCropDesc : NSObject
{
    unsigned long long _cropAspectRatioType; // +0x8
    OMJAspectRatio * _aspectRatio; // +0x10
    OMJAspectRatio * _originalAspectRatio; // +0x18
    CGRect _cropRegion; // +0x20
}
- (id)init;
- (id)description;
- (unsigned long long)cropAspectRatioType;
- (void)setCropAspectRatioType:(unsigned long long)arg1;
- (id)aspectRatio;
- (void)setAspectRatio:(id)arg1;
- (id)originalAspectRatio;
- (void)setOriginalAspectRatio:(id)arg1;
- (CGRect)cropRegion;
- (void)setCropRegion:(CGRect)arg1;
- (void).cxx_destruct;
@end
