@interface TXCImageBlendFilter : TXCBaseFilter
{
    float[8] _vertices; // +0x8
    float[8] _imageTexCoords; // +0x28
    id <TXIGlContext> _context; // +0x48
    TXCGlFrameBuffer * _imageFrameBuffer; // +0x50
    TXCGlProgram * _program; // +0x58
    UIImage * _image; // +0x60
    double _alpha; // +0x68
    CGRect _imageRect; // +0x70
}
- (id)initWithContext:(id)arg1 image:(id)arg2 atRect:(CGRect)arg3;
- (void)dealloc;
- (void)setBlendAlpha:(double)arg1;
- (BOOL)createGlObjectsIfNeeded;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)updateImageTexCoords:(CGSize)arg1;
- (id)context;
- (id)imageFrameBuffer;
- (void)setImageFrameBuffer:(id)arg1;
- (id)program;
- (void)setProgram:(id)arg1;
- (id)image;
- (CGRect)imageRect;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (void).cxx_destruct;
@end

