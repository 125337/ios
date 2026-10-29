@interface TAVVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction>
{
    BOOL _enablePostProcessing; // +0x8
    BOOL _containsTweening; // +0x9
    BOOL _cacheDecodedFrameAsEmptyFrame; // +0xa
    int _passthroughTrackID; // +0xc
    NSArray * _requiredSourceTrackIDs; // +0x10
    NSArray * _transitionableChannel; // +0x18
    NSArray * _layerInstructions; // +0x20
    id <TAVVideoComposition> _videoComposition; // +0x28
    id <TAVVideoCompositionMixer> _videoCompositionMixer; // +0x30
    CIColor * _backgroundColor; // +0x38
    TAVRenderReportData * _renderReportData; // +0x40
    TAVPixelBufferCache * _pixelBufferCache; // +0x48
    struct _timeRange; // +0x50
}
- (id)initWithPassthroughTrackID:(int)arg1 timeRange:(struct)arg2;
- (id)initWithSourceTrackIDs:(id)arg1 timeRange:(struct)arg2;
- (void)commonInit;
- (id)applyRequest:(id)arg1;
- (void)applyRequest:(id)arg1 directedToPixelBuffer:(__CVBuffer *)arg2;
- (id)applyDefaultMixerWithRequest:(id)arg1 backgroundImage:(id)arg2;
- (id)applyTransitionForImage:(id)arg1 withRequest:(id)arg2 layerInstruction1:(id)arg3 layerInstruction2:(id)arg4;
- (id)applyCustomMixerWithRequest:(id)arg1 backgroundImage:(id)arg2;
- (id)imageFromLayerInstruction:(id)arg1 request:(id)arg2;
- (__CVBuffer *)pixelBufferFromLayerInstruction:(id)arg1 request:(id)arg2;
- (id)generateImageFromPixelBuffer:(__CVBuffer *)arg1;
- (CGAffineTransform)pixelAspectRatioTransformFromPixelBuffer:(__CVBuffer *)arg1;
- (float)factorForTime:(struct)arg1 inRange:(struct)arg2;
- (__CVBuffer *)handleCacheForPixelBuffer:(__CVBuffer *)arg1 trackID:(long long)arg2;
- (id)debugDescription;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (BOOL)enablePostProcessing;
- (void)setEnablePostProcessing:(BOOL)arg1;
- (BOOL)containsTweening;
- (void)setContainsTweening:(BOOL)arg1;
- (id)requiredSourceTrackIDs;
- (int)passthroughTrackID;
- (id)transitionableChannel;
- (void)setTransitionableChannel:(id)arg1;
- (id)layerInstructions;
- (void)setLayerInstructions:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)videoCompositionMixer;
- (void)setVideoCompositionMixer:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)cacheDecodedFrameAsEmptyFrame;
- (void)setCacheDecodedFrameAsEmptyFrame:(BOOL)arg1;
- (id)renderReportData;
- (void)setRenderReportData:(id)arg1;
- (id)pixelBufferCache;
- (void)setPixelBufferCache:(id)arg1;
- (void).cxx_destruct;
@end
