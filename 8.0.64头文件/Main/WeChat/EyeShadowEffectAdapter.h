@interface EyeShadowEffectAdapter : WeEffectBaseAdapter
{
    NSNumber * _alpha; // +0x8
    NSNumber * _faceModel; // +0x10
    NSString * _path; // +0x18
    NSString * _shimmerPath; // +0x20
    NSNumber * _shimmerType; // +0x28
    NSNumber * _blendMode; // +0x30
}
+ (id)weeffectType;
- (void)load;
- (void)onImageFetchDone:(BOOL)arg1;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (id)alpha;
- (void)setAlpha:(id)arg1;
- (id)faceModel;
- (void)setFaceModel:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)shimmerPath;
- (void)setShimmerPath:(id)arg1;
- (id)shimmerType;
- (void)setShimmerType:(id)arg1;
- (id)blendMode;
- (void)setBlendMode:(id)arg1;
- (void).cxx_destruct;
@end
