@interface GPUImageHistogramGenerator : GPUImageFilter
{
    int backgroundColorUniform; // +0xe8
}
- (id)init;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
@end
