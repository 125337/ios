@interface MMDeviceCameraInfo : NSObject
{
    BOOL _isMainCamera; // +0x8
    long long _cameraType; // +0x10
    double _baseOpticalZoomFactor; // +0x18
    double _minDigitalZoomFactor; // +0x20
    double _maxDigitalZoomFactor; // +0x28
    double _maxDigitalZoomLimit; // +0x30
}
+ (id)defaultInfo;
- (long long)cameraType;
- (void)setCameraType:(long long)arg1;
- (BOOL)isMainCamera;
- (void)setIsMainCamera:(BOOL)arg1;
- (double)baseOpticalZoomFactor;
- (void)setBaseOpticalZoomFactor:(double)arg1;
- (double)minDigitalZoomFactor;
- (void)setMinDigitalZoomFactor:(double)arg1;
- (double)maxDigitalZoomFactor;
- (void)setMaxDigitalZoomFactor:(double)arg1;
- (double)maxDigitalZoomLimit;
- (void)setMaxDigitalZoomLimit:(double)arg1;
@end
