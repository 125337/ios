@interface MMGPUSpatialRecursiveDenosing : MMGPUThreeTextureRender
{
    int spatialRecursiveFilterControlUniform; // +0x60
    int spatialRecursiveFilterSwitchUniform; // +0x64
}
- (id)init;
- (void)setSpatialRecursiveFilterControl:(int)arg1;
@end

