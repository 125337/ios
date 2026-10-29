@interface TXCSmoothMixFilter : TXCTwoInputFilter
- (id)fragmentShaderString;
- (id)vertexShaderString;
- (void)setUniformsForFilter:(id)arg1 fboSize:(CGSize)arg2;
@end

