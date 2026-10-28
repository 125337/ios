@interface FilterEffectAdapter : WeEffectBaseAdapter
{
    NSNumber * _alpha; // +0x8
}
+ (id)weeffectType;
- (void)load;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)onImageFetchDone:(BOOL)arg1;
- (id)generateJsonDic;
- (id)getFilterDirectory;
- (id)alpha;
- (void)setAlpha:(id)arg1;
- (void).cxx_destruct;
@end
