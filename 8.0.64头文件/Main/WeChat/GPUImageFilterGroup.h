@interface GPUImageFilterGroup : GPUImageOutput <GPUImageInput>
{
    NSMutableArray * filters; // +0x70
    BOOL isEndProcessing; // +0x78
    GPUImageOutput<GPUImageInput> * _terminalFilter; // +0x80
    NSArray * _initialFilters; // +0x88
    GPUImageOutput<GPUImageInput> * _inputFilterToIgnoreForUpdates; // +0x90
    GPUImageFramebuffer * _inputFrameBuffer; // +0x98
    CGSize _inputSize; // +0xa0
}
- (id)init;
- (void)addFilter:(id)arg1;
- (id)filterAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterCount;
- (void)useNextFrameForImageCapture;
- (CGImage *)newCGImageFromCurrentlyProcessedOutput;
- (void)setTargetToIgnoreForUpdates:(id)arg1;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)removeTarget:(id)arg1;
- (void)removeAllTargets;
- (id)targets;
- (void)setRGB2YUV420Process:(BOOL)arg1;
- (void)setFrameProcessingCompletionBlock:(id /* block */)arg1;
- (id /* block */)frameProcessingCompletionBlock;
- (void)newFrameReadyAtTime:(struct)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setInputTexture:(unsigned int)arg1 inputSize:(CGSize)arg2;
- (void)setInput:(id)arg1 inputSize:(CGSize)arg2;
- (int)generateFrameBuffer:(BOOL)arg1 newSize:(CGSize)arg2;
- (void)destroyFrameBuffer;
- (unsigned int)processing;
- (void)setInputSize:(CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)forceProcessingAtSize:(CGSize)arg1;
- (void)forceProcessingAtSizeRespectingAspectRatio:(CGSize)arg1;
- (CGSize)maximumOutputSize;
- (void)endProcessing;
- (BOOL)wantsMonochromeInput;
- (void)setCurrentlyReceivingMonochromeInput:(BOOL)arg1;
- (id)terminalFilter;
- (void)setTerminalFilter:(id)arg1;
- (id)initialFilters;
- (void)setInitialFilters:(id)arg1;
- (id)inputFilterToIgnoreForUpdates;
- (void)setInputFilterToIgnoreForUpdates:(id)arg1;
- (id)inputFrameBuffer;
- (void)setInputFrameBuffer:(id)arg1;
- (CGSize)inputSize;
- (void)setInputSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
