@interface MMLiveFaceTrackOutputData : NSObject
{
    NSArray * _faceFeatureList; // +0x8
    NSArray * _landmarks2DList; // +0x10
}
- (id)faceFeatureList;
- (void)setFaceFeatureList:(id)arg1;
- (id)landmarks2DList;
- (void)setLandmarks2DList:(id)arg1;
- (void).cxx_destruct;
@end
