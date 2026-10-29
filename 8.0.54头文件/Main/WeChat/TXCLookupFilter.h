@interface TXCLookupFilter : TXCBaseFilter
{
    BOOL _isGroupLUT; // +0x8
    BOOL _enableFilter1; // +0x9
    BOOL _enableFilter2; // +0xa
    UIImage * _leftLutImage; // +0x10
    UIImage * _rightLutImage; // +0x18
    double _leftIntensity; // +0x20
    double _rightIntensity; // +0x28
    double _leftRatio; // +0x30
    id <TXIGlContext> _context; // +0x38
    TXCGlFrameBuffer * _frameBuffer; // +0x40
    TXCGlFrameBuffer * _leftLutImageFrameBuffer; // +0x48
    TXCGlFrameBuffer * _rightLutImageFrameBuffer; // +0x50
    TXCGlProgram * _program; // +0x58
}
- (id)initWithContext:(id)arg1 image:(id)arg2;
- (id)initWithContext:(id)arg1 leftImage:(id)arg2 rightImage:(id)arg3 leftRatio:(float)arg4;
- (void)dealloc;
- (BOOL)createGlObjectsIfNeeded;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (id)leftLutImage;
- (id)rightLutImage;
- (double)leftIntensity;
- (void)setLeftIntensity:(double)arg1;
- (double)rightIntensity;
- (void)setRightIntensity:(double)arg1;
- (double)leftRatio;
- (void)setLeftRatio:(double)arg1;
- (BOOL)isGroupLUT;
- (void)setIsGroupLUT:(BOOL)arg1;
- (id)context;
- (id)frameBuffer;
- (void)setFrameBuffer:(id)arg1;
- (id)leftLutImageFrameBuffer;
- (void)setLeftLutImageFrameBuffer:(id)arg1;
- (id)rightLutImageFrameBuffer;
- (void)setRightLutImageFrameBuffer:(id)arg1;
- (id)program;
- (void)setProgram:(id)arg1;
- (BOOL)enableFilter1;
- (void)setEnableFilter1:(BOOL)arg1;
- (BOOL)enableFilter2;
- (void)setEnableFilter2:(BOOL)arg1;
- (void).cxx_destruct;
@end

