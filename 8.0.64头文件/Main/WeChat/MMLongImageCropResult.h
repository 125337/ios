@interface MMLongImageCropResult : NSObject
{
    UIImage * _croppedImage; // +0x8
    double _topCroppedRatio; // +0x10
    double _bottomCroppedRatio; // +0x18
}
- (id)description;
- (id)croppedImage;
- (void)setCroppedImage:(id)arg1;
- (double)topCroppedRatio;
- (void)setTopCroppedRatio:(double)arg1;
- (double)bottomCroppedRatio;
- (void)setBottomCroppedRatio:(double)arg1;
- (void).cxx_destruct;
@end
