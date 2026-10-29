@interface WADynamicBackgroundGLObject : NSObject
{
    WADynamicBackgroundGLContext * _context; // +0x8
    _GLKMatrix4 _modelMatrix; // +0x10
}
- (id)initWithGLContext:(id)arg1;
- (void)update:(double)arg1;
- (void)draw:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (_GLKMatrix4)modelMatrix;
- (void)setModelMatrix:(_GLKMatrix4)arg1;
- (void).cxx_destruct;
@end
