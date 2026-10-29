@interface MMLiveILinkCombineFrame : NSObject
{
    opaqueCMSampleBuffer * _sampleBuffer; // +0x8
    double _xRotate; // +0x10
    double _yRotate; // +0x18
    double _zRotate; // +0x20
    double _xTranslate; // +0x28
    double _yTranslate; // +0x30
    double _alpha; // +0x38
    double _scale; // +0x40
    CGRect _crop; // +0x48
    CGRect _position; // +0x68
}
- (id)init;
- (void)setSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)dealloc;
- (opaqueCMSampleBuffer *)sampleBuffer;
- (CGRect)crop;
- (void)setCrop:(CGRect)arg1;
- (CGRect)position;
- (void)setPosition:(CGRect)arg1;
- (double)xRotate;
- (void)setXRotate:(double)arg1;
- (double)yRotate;
- (void)setYRotate:(double)arg1;
- (double)zRotate;
- (void)setZRotate:(double)arg1;
- (double)xTranslate;
- (void)setXTranslate:(double)arg1;
- (double)yTranslate;
- (void)setYTranslate:(double)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
@end

