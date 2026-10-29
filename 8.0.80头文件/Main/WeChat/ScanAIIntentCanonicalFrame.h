@interface ScanAIIntentCanonicalFrame : NSObject
{
    CGSize _pixelSize; // +0x8
    Mat _ownedBGRMat; // +0x18
}
+ (id)frameWithImage:(id)arg1 errorReasonCode:(id *)arg2;
+ (id)frameWithImageBuffer:(__CVBuffer *)arg1 interfaceOrientation:(long long)arg2 errorReasonCode:(id *)arg3;
+ (id)frameWithOwnedBGRMat:(const Mat *)arg1;
+ (CGRect)validNormalizedRect:(CGRect)arg1;
+ (void)setErrorReasonCode:(id)arg1 output:(id *)arg2;
- (const Mat *)bgrMat;
- (id)copyCropImageForNormalizedRect:(CGRect)arg1;
- (CGSize)pixelSize;
- (void)setPixelSize:(CGSize)arg1;
- (Mat)ownedBGRMat;
- (void)setOwnedBGRMat:(Mat)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
