@interface TXCCameraCaptureConfig : NSObject
{
    NSNumber * _frameRate; // +0x8
    NSValue * _resolution; // +0x10
    NSNumber * _zoomScale; // +0x18
    NSNumber * _enablesZoom; // +0x20
    NSNumber * _isFront; // +0x28
    NSNumber * _enablesFaceDetect; // +0x30
}
- (id)frameRate;
- (void)setFrameRate:(id)arg1;
- (id)resolution;
- (void)setResolution:(id)arg1;
- (id)zoomScale;
- (void)setZoomScale:(id)arg1;
- (id)enablesZoom;
- (void)setEnablesZoom:(id)arg1;
- (id)isFront;
- (void)setIsFront:(id)arg1;
- (id)enablesFaceDetect;
- (void)setEnablesFaceDetect:(id)arg1;
- (void).cxx_destruct;
@end

