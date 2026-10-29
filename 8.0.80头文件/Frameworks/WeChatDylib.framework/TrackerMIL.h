@interface TrackerMIL : Tracker
{
    Ptr<cv::TrackerMIL> _nativePtrTrackerMIL; // +0x8
}
+ (id)fromNative:(Ptr<cv::TrackerMIL>)arg1;
+ (id)create:(id)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::TrackerMIL>)arg1;
- (Ptr<cv::TrackerMIL>)nativePtrTrackerMIL;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
