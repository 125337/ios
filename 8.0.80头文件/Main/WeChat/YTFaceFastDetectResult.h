@interface YTFaceFastDetectResult : NSObject
{
    double _confidence; // +0x8
    CGRect _faceRect; // +0x10
}
- (CGRect)faceRect;
- (void)setFaceRect:(CGRect)arg1;
- (double)confidence;
- (void)setConfidence:(double)arg1;
@end
