@interface TXCRoiRegionTransformFilter : TXCVideoBindableObject
{
    BOOL _shouldSkipRoiRegionTransform; // +0x8
    TXCVideoFrameCoords * _frameCoords; // +0x10
    NSValue * _inputSize; // +0x18
    NSValue * _outputSize; // +0x20
    TXCDispatchQueue * _queue; // +0x28
    NSArray * _roiConfigArray; // +0x30
}
- (id)initWithQueue:(id)arg1;
- (void)setRoiConfig:(id)arg1;
- (id)calculateRoiRegion:(id)arg1;
- (id)transformRoiConfigArray;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (id)frameCoords;
- (void)setFrameCoords:(id)arg1;
- (id)inputSize;
- (void)setInputSize:(id)arg1;
- (id)outputSize;
- (void)setOutputSize:(id)arg1;
- (BOOL)shouldSkipRoiRegionTransform;
- (void)setShouldSkipRoiRegionTransform:(BOOL)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)roiConfigArray;
- (void)setRoiConfigArray:(id)arg1;
- (void).cxx_destruct;
@end

