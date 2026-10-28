@interface MMLiveFaceTrackResultRecord : NSObject
{
    NSString * _tagName; // +0x8
    NSMutableArray * _faceTrackResultList; // +0x10
    NSArray * _normalizeFaceFeatureList; // +0x18
    NSArray * _averTransformedLandmarks2DList; // +0x20
}
- (id)initWithTagName:(id)arg1;
- (void)addFaceTrackResult:(id)arg1;
- (id)mostNthZScoreResult:(int)arg1;
- (long long)resultCount;
- (void)computeNormalizeFaceFeature;
- (void)finish;
- (void)averageTransformedLandMark2D;
- (void)sortFaceTrackResults;
- (id)tagName;
- (void)setTagName:(id)arg1;
- (id)faceTrackResultList;
- (void)setFaceTrackResultList:(id)arg1;
- (id)normalizeFaceFeatureList;
- (void)setNormalizeFaceFeatureList:(id)arg1;
- (id)averTransformedLandmarks2DList;
- (void)setAverTransformedLandmarks2DList:(id)arg1;
- (void).cxx_destruct;
@end
