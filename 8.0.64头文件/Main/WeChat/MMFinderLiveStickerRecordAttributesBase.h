@interface MMFinderLiveStickerRecordAttributesBase : NSObject
{
    NSString * _instanceId; // +0x8
    unsigned long long _stickerType; // +0x10
    double _canvasSizeWidth; // +0x18
    double _canvasSizeHeight; // +0x20
    double _nativeSizeWidth; // +0x28
    double _nativeSizeHeight; // +0x30
    double _transformA; // +0x38
    double _transformB; // +0x40
    double _transformC; // +0x48
    double _transformD; // +0x50
    double _transformTx; // +0x58
    double _transformTy; // +0x60
    double _normalizedSizeWidth; // +0x68
    double _normalizedSizeHeight; // +0x70
    double _normalizedCenterX; // +0x78
    double _normalizedCenterY; // +0x80
    double _normalizedAnchorPointX; // +0x88
    double _normalizedAnchorPointY; // +0x90
    double _normalizedTransformComponentsScaleWidth; // +0x98
    double _normalizedTransformComponentsScaleHeight; // +0xa0
    double _normalizedTransformComponentsHorizontalShear; // +0xa8
    double _normalizedTransformComponentsRotation; // +0xb0
    double _normalizedTransformComponentsTranslationX; // +0xb8
    double _normalizedTransformComponentsTranslationY; // +0xc0
    long long _actionSceneOrientation; // +0xc8
}
+ (id)stickerRecordAttributesFromItem:(id)arg1;
- (id)initWithStickerItem:(id)arg1;
- (void)populateStickerItem:(id)arg1;
- (id)stickerItemFromRecordAttributes;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (unsigned long long)stickerType;
- (void)setStickerType:(unsigned long long)arg1;
- (double)canvasSizeWidth;
- (void)setCanvasSizeWidth:(double)arg1;
- (double)canvasSizeHeight;
- (void)setCanvasSizeHeight:(double)arg1;
- (double)nativeSizeWidth;
- (void)setNativeSizeWidth:(double)arg1;
- (double)nativeSizeHeight;
- (void)setNativeSizeHeight:(double)arg1;
- (double)transformA;
- (void)setTransformA:(double)arg1;
- (double)transformB;
- (void)setTransformB:(double)arg1;
- (double)transformC;
- (void)setTransformC:(double)arg1;
- (double)transformD;
- (void)setTransformD:(double)arg1;
- (double)transformTx;
- (void)setTransformTx:(double)arg1;
- (double)transformTy;
- (void)setTransformTy:(double)arg1;
- (double)normalizedSizeWidth;
- (void)setNormalizedSizeWidth:(double)arg1;
- (double)normalizedSizeHeight;
- (void)setNormalizedSizeHeight:(double)arg1;
- (double)normalizedCenterX;
- (void)setNormalizedCenterX:(double)arg1;
- (double)normalizedCenterY;
- (void)setNormalizedCenterY:(double)arg1;
- (double)normalizedAnchorPointX;
- (void)setNormalizedAnchorPointX:(double)arg1;
- (double)normalizedAnchorPointY;
- (void)setNormalizedAnchorPointY:(double)arg1;
- (double)normalizedTransformComponentsScaleWidth;
- (void)setNormalizedTransformComponentsScaleWidth:(double)arg1;
- (double)normalizedTransformComponentsScaleHeight;
- (void)setNormalizedTransformComponentsScaleHeight:(double)arg1;
- (double)normalizedTransformComponentsHorizontalShear;
- (void)setNormalizedTransformComponentsHorizontalShear:(double)arg1;
- (double)normalizedTransformComponentsRotation;
- (void)setNormalizedTransformComponentsRotation:(double)arg1;
- (double)normalizedTransformComponentsTranslationX;
- (void)setNormalizedTransformComponentsTranslationX:(double)arg1;
- (double)normalizedTransformComponentsTranslationY;
- (void)setNormalizedTransformComponentsTranslationY:(double)arg1;
- (long long)actionSceneOrientation;
- (void)setActionSceneOrientation:(long long)arg1;
- (void).cxx_destruct;
@end
