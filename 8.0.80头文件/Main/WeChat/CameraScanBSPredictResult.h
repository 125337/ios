@interface CameraScanBSPredictResult : NSObject
{
    BOOL _isBlackScreen; // +0x8
    float _probability; // +0xc
    float _deployThreshold; // +0x10
    double _inferTimeMs; // +0x18
}
- (float)probability;
- (void)setProbability:(float)arg1;
- (BOOL)isBlackScreen;
- (void)setIsBlackScreen:(BOOL)arg1;
- (float)deployThreshold;
- (void)setDeployThreshold:(float)arg1;
- (double)inferTimeMs;
- (void)setInferTimeMs:(double)arg1;
@end
