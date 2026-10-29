@interface TrackerGOTURN : Tracker
{
    Ptr<cv::TrackerGOTURN> _nativePtrTrackerGOTURN; // +0x8
}
+ (id)fromNative:(Ptr<cv::TrackerGOTURN>)arg1;
+ (id)create:(id)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::TrackerGOTURN>)arg1;
- (Ptr<cv::TrackerGOTURN>)nativePtrTrackerGOTURN;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
