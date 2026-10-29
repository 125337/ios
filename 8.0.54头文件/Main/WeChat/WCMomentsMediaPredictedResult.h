@interface WCMomentsMediaPredictedResult : NSObject
{
    NSString * _tid; // +0x8
    NSString * _mid; // +0x10
    NSDate * _videoSourcePredictionStartTime; // +0x18
    NSDate * _videoSourcePredictionEndTime; // +0x20
    NSNumber * _isUsingVideoSourceHD; // +0x28
}
- (id)tid;
- (void)setTid:(id)arg1;
- (id)mid;
- (void)setMid:(id)arg1;
- (id)videoSourcePredictionStartTime;
- (void)setVideoSourcePredictionStartTime:(id)arg1;
- (id)videoSourcePredictionEndTime;
- (void)setVideoSourcePredictionEndTime:(id)arg1;
- (id)isUsingVideoSourceHD;
- (void)setIsUsingVideoSourceHD:(id)arg1;
- (void).cxx_destruct;
@end

