@interface GPUImageGrayscaleFilter : GPUImageFilter
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (BOOL)wantsMonochromeInput;
- (BOOL)providesMonochromeOutput;
- (id)init;
@end
