@interface WAEJGLProgram2DRadialGradient : WAEJGLProgram2D
{
    unsigned int inner; // +0x10
    unsigned int diff; // +0x14
}
- (void)getUniforms;
- (unsigned int)inner;
- (unsigned int)diff;
@end
