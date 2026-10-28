@interface GPUImageAlphaBlendFilter : GPUImageTwoInputFilter
{
    int mixUniform; // +0x138
    double _mix; // +0x140
}
- (id)init;
- (void)setMix:(double)arg1;
- (double)mix;
@end
