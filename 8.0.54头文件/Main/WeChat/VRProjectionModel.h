@interface VRProjectionModel : NSObject
{
    int mERPLatitudeGrid; // +0x8
    int mERPLongitudeGrid; // +0xc
    float mSphererRadius; // +0x10
    int mDistortionRows; // +0x14
    int mDistortionColumns; // +0x18
    float mDistortionParamA; // +0x1c
    float mDistortionParamB; // +0x20
    float mDistortionParamC; // +0x24
    float mDistortionScale; // +0x28
    int[4] mNumIndices; // +0x2c
    float *[4] mTexCoordinateBuffers; // +0x40
    float *[4] mVerticesBuffers; // +0x60
    long long mCDNRotation; // +0x80
}
- (id)init;
- (void)setERPLatitudeGrid:(int)arg1;
- (void)setERPLongitudeGrid:(int)arg1;
- (void)setSphererRadius:(float)arg1;
- (void)setNumIndices:(int)arg1 NumIndices:(int)arg2 IsDistortion:(BOOL)arg3;
- (int)getNumIndices:(int)arg1 IsDistortion:(BOOL)arg2;
- (void)setTexCoordinateBuffer:(int)arg1 TexCoordinateBuffer:(float *)arg2 Size:(int)arg3 IsDistortion:(BOOL)arg4;
- (float *)getTexCoordinateBuffer:(int)arg1 IsDistortion:(BOOL)arg2;
- (void)setVerticesBuffer:(int)arg1 VerticesBuffer:(float *)arg2 Size:(int)arg3 IsDistortion:(BOOL)arg4;
- (float *)getVerticesBuffer:(int)arg1 IsDistortion:(BOOL)arg2;
- (void)sphereMapping;
- (void)applyBarrelDistortion:(int)arg1 Vertexs:(float *)arg2;
- (void)barrelDistortion:(double)arg1 ParamB:(double)arg2 ParamC:(double)arg3 SrcX:(float *)arg4 SrcY:(float *)arg5;
- (void)setProjectionModel:(int)arg1 NumIndices:(int)arg2 VerticesBuffers:(float *)arg3 VerticesSize:(int)arg4 TexCoordinateBuffers:(float *)arg5 TexCoordinateSize:(int)arg6;
@end

