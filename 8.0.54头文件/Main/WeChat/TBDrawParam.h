@interface TBDrawParam : NSObject
{
    float[16] _viewMat; // +0x8
    float[16] _projectMat; // +0x48
    int _renderType; // +0x88
    int _width; // +0x8c
    int _height; // +0x90
    float _distancePerPixel; // +0x94
}
- (float *)viewMatrix;
- (float *)projectMatrix;
- (void)update:(TBDrawParamType *)arg1;
- (int)renderType;
- (void)setRenderType:(int)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (float)distancePerPixel;
- (void)setDistancePerPixel:(float)arg1;
@end

