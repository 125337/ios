@interface WeVisProcessResult : NSObject
{
    int _outputTexture; // +0x8
    int _faceTrackRet; // +0xc
    WeVisPixelBuffer * _pixelBuffer; // +0x10
    double _processCostTime; // +0x18
    double _widthScaled; // +0x20
    double _heightScaled; // +0x28
}
+ (int)transferFaceTrackX3DRet:(int)arg1;
- (id)pixelBuffer;
- (void)setPixelBuffer:(id)arg1;
- (int)outputTexture;
- (void)setOutputTexture:(int)arg1;
- (int)faceTrackRet;
- (void)setFaceTrackRet:(int)arg1;
- (double)processCostTime;
- (void)setProcessCostTime:(double)arg1;
- (double)widthScaled;
- (void)setWidthScaled:(double)arg1;
- (double)heightScaled;
- (void)setHeightScaled:(double)arg1;
- (void).cxx_destruct;
@end

