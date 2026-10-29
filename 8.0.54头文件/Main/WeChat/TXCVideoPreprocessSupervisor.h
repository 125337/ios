@interface TXCVideoPreprocessSupervisor : NSObject
{
    NSArray * _supervisorPropertyKVOKeys; // +0x8
    NSArray * _frameCoordsPropertyKVOKeys; // +0x10
    BOOL _skipPreprocess; // +0x18
    BOOL _beautyFilterEnabled; // +0x19
    BOOL _lutFilterEnabled; // +0x1a
    BOOL _customFilterEnabled; // +0x1b
    BOOL _roiRegionTransformFilterEnabled; // +0x1c
    BOOL _watermarkFilterEnabled; // +0x1d
    unsigned int _inputFormat; // +0x20
    TXCVideoFrameCoords * _frameCoords; // +0x28
    id <TXCVideoPreprocessSupervisorDelegate> _delegate; // +0x30
    unsigned long long _encoderFeatures; // +0x38
}
- (id)frameCoords;
- (id)init;
- (void)dealloc;
- (void)addSupervisorPropertyObserver;
- (void)addFrameCoordsPropertyObserver;
- (void)removeSupervisorPropertyObserver;
- (void)removeFrameCoordsPropertyObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)imageProcessingEnabled;
- (BOOL)canSkipPreprocess;
- (void)updateStrategy;
- (BOOL)skipPreprocess;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)beautyFilterEnabled;
- (void)setBeautyFilterEnabled:(BOOL)arg1;
- (BOOL)lutFilterEnabled;
- (void)setLutFilterEnabled:(BOOL)arg1;
- (BOOL)customFilterEnabled;
- (void)setCustomFilterEnabled:(BOOL)arg1;
- (BOOL)roiRegionTransformFilterEnabled;
- (void)setRoiRegionTransformFilterEnabled:(BOOL)arg1;
- (BOOL)watermarkFilterEnabled;
- (void)setWatermarkFilterEnabled:(BOOL)arg1;
- (unsigned int)inputFormat;
- (void)setInputFormat:(unsigned int)arg1;
- (unsigned long long)encoderFeatures;
- (void)setEncoderFeatures:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

