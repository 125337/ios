@interface MMLiveFaceTrackResult : NSObject
{
    vector<float, std::allocator<float>> _facePartConf; // +0x8
    vector<float, std::allocator<float>> _faceFeature; // +0x20
    vector<int, std::allocator<int>> _partVisible; // +0x38
    vector<float, std::allocator<float>> _faceAngle; // +0x50
    vector<WeEffect::Point, std::allocator<WeEffect::Point>> _landmarks2D; // +0x68
    float _zScore; // +0x80
    NSArray * _transformedLandmarks2DList; // +0x88
}
- (void)setFacePartConf:(vector<float, std::allocator<float>>)arg1;
- (vector<float, std::allocator<float>>)facePartConf;
- (void)setFaceFeature:(vector<float, std::allocator<float>>)arg1;
- (vector<float, std::allocator<float>>)faceFeature;
- (void)updateFacePartVisible:(Span<const int>)arg1;
- (vector<int, std::allocator<int>>)partVisible;
- (void)setFaceAngle:(vector<float, std::allocator<float>>)arg1;
- (vector<float, std::allocator<float>>)faceAngle;
- (void)updateLandmarks2D:(Span<const WeEffect::Point>)arg1;
- (vector<WeEffect::Point, std::allocator<WeEffect::Point>>)landmarks2D;
- (BOOL)isFitForTrackResult;
- (id)description;
- (BOOL)isBelongToFaceRecord:(id)arg1;
- (BOOL)_checkBelongToFaceRecordByNormalizeCompare:(id)arg1;
- (BOOL)_checkBelongToFaceRecordByMostNthCompare:(id)arg1;
- (void)transformLandmarks2D;
- (float)zScore;
- (void)setZScore:(float)arg1;
- (id)transformedLandmarks2DList;
- (void)setTransformedLandmarks2DList:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
