@interface MMGPUSpatiotemporalDenosing : NSObject
{
    MMGPUBilateralSapatialCombineDenosing * bilateralSapatialCombineDenosing; // +0x8
    MMGPUSpatialRecursiveDenosing * spatialRecursiveDenosing; // +0x10
    MMGPUMotionCheck * motionCheck; // +0x18
    MMGPUOneTextureRender * frameBufferFilter; // +0x20
    MMGPUStrongBilateralFilter * strongBilateralFilter; // +0x28
    MMGPURGB2YUVRender * rgb2yuvFilter; // +0x30
    MMGPUMultiTemporalFilterRender * multiTemporalFilter; // +0x38
    MMGPUTemporalCacheRender * temporalCacheRender; // +0x40
    BOOL useSpatioFilter; // +0x48
    BOOL mUseMultiTemporalFilter; // +0x49
}
- (id)init:(BOOL)arg1 useMultiTemporalFilter:(BOOL)arg2;
- (id)init:(BOOL)arg1;
- (void)setMotionCheckControl:(int)arg1;
- (void)setSpatialRecursiveFilterControl:(int)arg1;
- (void)setBilateralSapatialFilterControl:(int)arg1;
- (void)setTemporalDenosingLevel:(int)arg1;
- (int)updateMMGPUFramebuffer:(CGSize)arg1;
- (void)destroyFrameBuffer;
- (void)setNoiseLevel:(float)arg1;
- (void)setTemporalDenosingSwitch:(int)arg1;
- (int)processing:(int)arg1 inputRes:(CGSize)arg2;
- (void).cxx_destruct;
@end

