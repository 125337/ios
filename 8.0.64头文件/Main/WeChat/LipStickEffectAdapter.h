@interface LipStickEffectAdapter : WeEffectBaseAdapter
{
    NSNumber * _alpha; // +0x8
    NSNumber * _faceModel; // +0x10
    NSNumber * _lipstickType; // +0x18
    NSArray * _color; // +0x20
    NSNumber * _mouthShape; // +0x28
}
+ (id)weeffectType;
- (void)load;
- (void)onImageFetchDone:(BOOL)arg1;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (id)alpha;
- (void)setAlpha:(id)arg1;
- (id)faceModel;
- (void)setFaceModel:(id)arg1;
- (id)lipstickType;
- (void)setLipstickType:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)mouthShape;
- (void)setMouthShape:(id)arg1;
- (void).cxx_destruct;
@end
