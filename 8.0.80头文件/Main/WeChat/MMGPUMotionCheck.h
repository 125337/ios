@interface MMGPUMotionCheck : MMGPUTwoTextureRender
{
    int motionCheckControlUniform; // +0x58
    int motionCheckSwitchUniform; // +0x5c
    float noiseLevelUniform; // +0x60
    int texelWidthLocation; // +0x64
    int texelHeightLocation; // +0x68
}
- (id)init;
- (void)setMotionCheckControl:(int)arg1;
- (void)setNoiseLevel:(float)arg1;
- (void)setTextureRes:(int)arg1 Height:(int)arg2;
@end
