@interface FaceContourEffectAdapter : WeEffectBaseAdapter
{
    NSNumber * _alpha; // +0x8
    NSNumber * _faceModel; // +0x10
    NSString * _path; // +0x18
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
- (void).cxx_destruct;
@end

