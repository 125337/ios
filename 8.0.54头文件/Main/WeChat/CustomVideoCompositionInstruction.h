@interface CustomVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction>
{
    BOOL _enablePostProcessing; // +0x8
    BOOL _containsTweening; // +0x9
    int _passthroughTrackID; // +0xc
    NSArray * _requiredSourceTrackIDs; // +0x10
    NSArray * _layerInstructions; // +0x18
    struct _timeRange; // +0x20
}
- (id)initWithPassthroughTrackID:(int)arg1 timeRange:(struct)arg2;
- (id)initWithSourceTrackIDs:(id)arg1 timeRange:(struct)arg2;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (BOOL)enablePostProcessing;
- (void)setEnablePostProcessing:(BOOL)arg1;
- (BOOL)containsTweening;
- (void)setContainsTweening:(BOOL)arg1;
- (id)requiredSourceTrackIDs;
- (int)passthroughTrackID;
- (id)layerInstructions;
- (void)setLayerInstructions:(id)arg1;
- (void).cxx_destruct;
@end

