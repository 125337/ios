@interface MMKalmanFilter : NSObject
{
    shared_ptr<cv::Mat> F; // +0x8
    shared_ptr<cv::Mat> FTransposed; // +0x18
    shared_ptr<cv::Mat> H; // +0x28
    shared_ptr<cv::Mat> HTransposed; // +0x38
    shared_ptr<cv::Mat> B; // +0x48
    shared_ptr<cv::Mat> Q; // +0x58
    shared_ptr<cv::Mat> R; // +0x68
    shared_ptr<cv::Mat> PInit; // +0x78
    shared_ptr<cv::Mat> xInit; // +0x88
    shared_ptr<cv::Mat> x; // +0x98
    shared_ptr<cv::Mat> P; // +0xa8
}
+ (shared_ptr<cv::Mat>)getTranspose:(shared_ptr<cv::Mat>)arg1;
+ (shared_ptr<cv::Mat>)genCVMatWithMatArray:(id)arg1;
+ (void)printMat:(Mat)arg1;
- (id)initWithF:(shared_ptr<cv::Mat>)arg1 H:(shared_ptr<cv::Mat>)arg2 B:(shared_ptr<cv::Mat>)arg3 Q:(shared_ptr<cv::Mat>)arg4 R:(shared_ptr<cv::Mat>)arg5 PInit:(shared_ptr<cv::Mat>)arg6 XInit:(shared_ptr<cv::Mat>)arg7;
- (void)resetData;
- (shared_ptr<cv::Mat>)filterWithMeasurement:(shared_ptr<cv::Mat>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
