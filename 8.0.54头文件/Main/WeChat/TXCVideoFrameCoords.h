@interface TXCVideoFrameCoords : NSObject
{
    float[8] _frameVertices; // +0x8
    float[8] _textureCoords; // +0x28
    BOOL _viewInLandscape; // +0x48
    BOOL _outputMirror; // +0x49
    unsigned int _orientation; // +0x4c
    unsigned long long _mirrorMode; // +0x50
    unsigned long long _rotation; // +0x58
    unsigned long long _fillMode; // +0x60
    unsigned long long _flip; // +0x68
    float * _vertices; // +0x70
    unsigned long long _outputRotation; // +0x78
    NSNumber * _transform; // +0x80
    CGSize _inputSize; // +0x88
    CGSize _outputSize; // +0x98
    CGRect _cropRect; // +0xa8
}
+ (unsigned long long)transformOfRotation:(unsigned long long)arg1;
+ (unsigned long long)rotate180OfTransform:(unsigned long long)arg1;
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
- (float *)vertices;
- (float *)textureCoords;
- (const float *)rawTextureCoords;
- (unsigned long long)outputTransform;
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
- (void)setFlip:(unsigned long long)arg1;
- (void)setVertices:(float *)arg1;
- (unsigned long long)outputRotation;
- (void)setOutputRotation:(unsigned long long)arg1;
- (BOOL)outputMirror;
- (void)setOutputMirror:(BOOL)arg1;
- (id)transform;
- (void)setTransform:(id)arg1;
- (void).cxx_destruct;
@end

