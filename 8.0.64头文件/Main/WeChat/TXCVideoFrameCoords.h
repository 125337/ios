@interface TXCVideoFrameCoords : NSObject
{
    float[8] _frameVertices; // +0x8
    float[8] _textureCoords; // +0x28
    shared_ptr<liteav::BufferT<float>> _perspectiveMatrixBuffer; // +0x48
    BOOL _viewInLandscape; // +0x58
    BOOL _preorderFlip; // +0x59
    BOOL _outputTransformVerticalFlip; // +0x5a
    BOOL _outputMirror; // +0x5b
    unsigned int _orientation; // +0x5c
    unsigned long long _mirrorMode; // +0x60
    unsigned long long _rotation; // +0x68
    unsigned long long _fillMode; // +0x70
    unsigned long long _flip; // +0x78
    float * _vertices; // +0x80
    unsigned long long _outputRotation; // +0x88
    NSNumber * _transform; // +0x90
    CGSize _inputSize; // +0x98
    CGSize _outputSize; // +0xa8
    CGRect _cropRect; // +0xb8
}
+ (unsigned long long)transformOfRotation:(unsigned long long)arg1;
+ (unsigned long long)transformTransform:(unsigned long long)arg1 rotation:(unsigned long long)arg2;
+ (unsigned long long)rotate90OfTransform:(unsigned long long)arg1;
+ (unsigned long long)rotate180OfTransform:(unsigned long long)arg1;
+ (unsigned long long)rotate270OfTransform:(unsigned long long)arg1;
+ (unsigned long long)verticalFlipOfTransform:(unsigned long long)arg1;
+ (unsigned long long)horizontalFlipOfTransform:(unsigned long long)arg1;
+ (unsigned long long)mirrorOfTransform:(unsigned long long)arg1 originOrientation:(unsigned int)arg2 outputRotation:(unsigned long long)arg3;
- (id)debugDescription;
- (id)init;
- (void)setOrientation:(unsigned int)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setFillMode:(unsigned long long)arg1;
- (void)setCropRect:(CGRect)arg1;
- (void)setInputSize:(CGSize)arg1;
- (void)setOutputSize:(CGSize)arg1;
- (void)setFlip:(unsigned long long)arg1;
- (void)setPerspectiveSrcPoints:(const void *)arg1 dstPoints:(const void *)arg2;
- (void)applyFrameParamsToMatrix:(SkMatrix *)arg1;
- (float *)vertices;
- (float *)textureCoords;
- (const float *)rawTextureCoords;
- (unsigned long long)outputTransform;
- (float *)perspectiveMatrix;
- (void)updateOutputProperties;
- (void)updateCoords;
- (BOOL)isIdentical;
- (BOOL)isTrimScaling;
- (unsigned int)orientation;
- (unsigned long long)mirrorMode;
- (unsigned long long)rotation;
- (unsigned long long)fillMode;
- (CGRect)cropRect;
- (CGSize)inputSize;
- (CGSize)outputSize;
- (BOOL)isViewInLandscape;
- (void)setViewInLandscape:(BOOL)arg1;
- (unsigned long long)flip;
- (BOOL)preorderFlip;
- (void)setPreorderFlip:(BOOL)arg1;
- (BOOL)outputTransformVerticalFlip;
- (void)setOutputTransformVerticalFlip:(BOOL)arg1;
- (void)setVertices:(float *)arg1;
- (unsigned long long)outputRotation;
- (void)setOutputRotation:(unsigned long long)arg1;
- (BOOL)outputMirror;
- (void)setOutputMirror:(BOOL)arg1;
- (id)transform;
- (void)setTransform:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
