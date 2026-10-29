@interface LineSegmentDetector : Algorithm
{
    Ptr<cv::LineSegmentDetector> _nativePtrLineSegmentDetector; // +0x8
}
+ (id)fromNative:(Ptr<cv::LineSegmentDetector>)arg1;
- (id)initWithNativePtr:(Ptr<cv::LineSegmentDetector>)arg1;
- (void)detect:(id)arg1 lines:(id)arg2 width:(id)arg3 prec:(id)arg4 nfa:(id)arg5;
- (void)detect:(id)arg1 lines:(id)arg2 width:(id)arg3 prec:(id)arg4;
- (void)detect:(id)arg1 lines:(id)arg2 width:(id)arg3;
- (void)detect:(id)arg1 lines:(id)arg2;
- (void)drawSegments:(id)arg1 lines:(id)arg2;
- (int)compareSegments:(id)arg1 lines1:(id)arg2 lines2:(id)arg3 image:(id)arg4;
- (int)compareSegments:(id)arg1 lines1:(id)arg2 lines2:(id)arg3;
- (Ptr<cv::LineSegmentDetector>)nativePtrLineSegmentDetector;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
