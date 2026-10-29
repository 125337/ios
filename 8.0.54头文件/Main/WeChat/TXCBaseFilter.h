@interface TXCBaseFilter : TXCVideoBindableObject
{
    TXCVideoFrameCoords * _frameCoords; // +0x8
    NSNumber * _outputRatio; // +0x10
    NSValue * _outputSize; // +0x18
}
- (id)frameCoords;
- (CGSize)outputSizeFromInputSize:(CGSize)arg1;
- (void)setFrameCoords:(id)arg1;
- (id)outputRatio;
- (void)setOutputRatio:(id)arg1;
- (id)outputSize;
- (void)setOutputSize:(id)arg1;
- (void).cxx_destruct;
@end

