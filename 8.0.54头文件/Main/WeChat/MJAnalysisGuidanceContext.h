@interface MJAnalysisGuidanceContext : NSObject
{
    unsigned long long _entrance; // +0x8
    NSOrderedSet * _segmentVMs; // +0x10
    NSArray * _originAssets; // +0x18
    MJMovieComposingAssetsClassifyHelper * _assetsClassifyHelper; // +0x20
    struct _timelineDuration; // +0x28
}
- (id)initWithEntrance:(unsigned long long)arg1 segmentVMs:(id)arg2 originAssets:(id)arg3 timelineDuration:(struct)arg4 assetsClassifyHelper:(id)arg5;
- (unsigned long long)entrance;
- (id)segmentVMs;
- (id)originAssets;
- (struct)timelineDuration;
- (id)assetsClassifyHelper;
- (void).cxx_destruct;
@end

