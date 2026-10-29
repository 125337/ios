@interface TrackerDaSiamRPN : Tracker
{
    Ptr<cv::TrackerDaSiamRPN> _nativePtrTrackerDaSiamRPN; // +0x8
}
+ (id)fromNative:(Ptr<cv::TrackerDaSiamRPN>)arg1;
+ (id)create:(id)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::TrackerDaSiamRPN>)arg1;
- (float)getTrackingScore;
- (Ptr<cv::TrackerDaSiamRPN>)nativePtrTrackerDaSiamRPN;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
