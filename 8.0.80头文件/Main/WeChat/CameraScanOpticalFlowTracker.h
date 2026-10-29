@interface CameraScanOpticalFlowTracker : NSObject
{
    vector<HistoryFrame, std::allocator<HistoryFrame>> _historyFrames; // +0x8
    vector<TrackedObject, std::allocator<TrackedObject>> _trackedObjects; // +0x20
    long long _nextTrackId; // +0x38
    long long _maxFeatureCount; // +0x40
    double _qualityLevel; // +0x48
    double _minDistance; // +0x50
    long long _lkWindowSize; // +0x58
    long long _pyramidLevel; // +0x60
    double _minTrackRatio; // +0x68
    double _iouThreshold; // +0x70
    long long _historyFrameCount; // +0x78
    NSMutableSet * _detectedTrackIds; // +0x80
    NSRecursiveLock * _lock; // +0x88
}
- (id)init;
- (void)reset;
- (void)clear;
- (vector<cv::Point_<float>, std::allocator<cv::Point_<float>>>)detectFeatures:(const Mat *)arg1;
- (vector<cv::Point_<float>, std::allocator<cv::Point_<float>>>)detectFeaturesInROI:(const Mat *)arg1 roi:(Rect_<int>)arg2;
- (vector<cv::Point_<float>, std::allocator<cv::Point_<float>>>)trackFeatures:(const void *)arg1 prevFrame:(const Mat *)arg2 currFrame:(const Mat *)arg3 status:(void *)arg4;
- (CGRect)medianFlowVote:(const void *)arg1 currFeatures:(const void *)arg2 status:(const void *)arg3 prevBox:(CGRect)arg4 confidence:(double *)arg5;
- (double)calculateIOU:(CGRect)arg1 rect2:(CGRect)arg2;
- (void)processFrame:(const Mat *)arg1;
- (id)retrackWithFrame:(const Mat *)arg1 normalizeRect:(CGRect)arg2;
- (void)addDetectedTrackId:(id)arg1;
- (BOOL)isTrackIdDetected:(id)arg1;
- (long long)maxFeatureCount;
- (void)setMaxFeatureCount:(long long)arg1;
- (double)qualityLevel;
- (void)setQualityLevel:(double)arg1;
- (double)minDistance;
- (void)setMinDistance:(double)arg1;
- (long long)lkWindowSize;
- (void)setLkWindowSize:(long long)arg1;
- (long long)pyramidLevel;
- (void)setPyramidLevel:(long long)arg1;
- (double)minTrackRatio;
- (void)setMinTrackRatio:(double)arg1;
- (double)iouThreshold;
- (void)setIouThreshold:(double)arg1;
- (long long)historyFrameCount;
- (void)setHistoryFrameCount:(long long)arg1;
- (id)detectedTrackIds;
- (void)setDetectedTrackIds:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
