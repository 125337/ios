@interface WCAdAlphaVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction>
{
    BOOL _enablePostProcessing; // +0x8
    BOOL _containsTweening; // +0x9
    int _passthroughTrackID; // +0xc
    int _videoCompositeType; // +0x10
    NSArray * _requiredSourceTrackIDs; // +0x18
    NSArray * _layerInstructions; // +0x20
    WCAdAlphaVideoProcessor * _alphaVideoProcessor; // +0x28
    struct _timeRange; // +0x30
}
- (id)initWithSourceTrackIDs:(id)arg1 timeRange:(struct)arg2 videoCompositeType:(int)arg3;
- (__CVBuffer *)applyPixelBuffer:(__CVBuffer *)arg1;
- (id)alphaVideoProcessor;
- (struct)timeRange;
- (BOOL)enablePostProcessing;
- (BOOL)containsTweening;
- (id)requiredSourceTrackIDs;
- (int)passthroughTrackID;
- (id)layerInstructions;
- (void)setLayerInstructions:(id)arg1;
- (int)videoCompositeType;
- (void)setVideoCompositeType:(int)arg1;
- (void)setAlphaVideoProcessor:(id)arg1;
- (void).cxx_destruct;
@end

