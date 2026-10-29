@interface KalmanFilter : NSObject
{
    Ptr<cv::KalmanFilter> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::KalmanFilter>)arg1;
- (id)initWithNativePtr:(Ptr<cv::KalmanFilter>)arg1;
- (id)init;
- (id)initWithDynamParams:(int)arg1 measureParams:(int)arg2 controlParams:(int)arg3 type:(int)arg4;
- (id)initWithDynamParams:(int)arg1 measureParams:(int)arg2 controlParams:(int)arg3;
- (id)initWithDynamParams:(int)arg1 measureParams:(int)arg2;
- (id)predict:(id)arg1;
- (id)predict;
- (id)correct:(id)arg1;
- (id)statePre;
- (void)setStatePre:(id)arg1;
- (id)statePost;
- (void)setStatePost:(id)arg1;
- (id)transitionMatrix;
- (void)setTransitionMatrix:(id)arg1;
- (id)controlMatrix;
- (void)setControlMatrix:(id)arg1;
- (id)measurementMatrix;
- (void)setMeasurementMatrix:(id)arg1;
- (id)processNoiseCov;
- (void)setProcessNoiseCov:(id)arg1;
- (id)measurementNoiseCov;
- (void)setMeasurementNoiseCov:(id)arg1;
- (id)errorCovPre;
- (void)setErrorCovPre:(id)arg1;
- (id)gain;
- (void)setGain:(id)arg1;
- (id)errorCovPost;
- (void)setErrorCovPost:(id)arg1;
- (Ptr<cv::KalmanFilter>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
