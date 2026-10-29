@interface TickMeter : NSObject
{
    Ptr<cv::TickMeter> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::TickMeter>)arg1;
- (id)initWithNativePtr:(Ptr<cv::TickMeter>)arg1;
- (id)init;
- (void)start;
- (void)stop;
- (long long)getTimeTicks;
- (double)getTimeMicro;
- (double)getTimeMilli;
- (double)getTimeSec;
- (long long)getCounter;
- (double)getFPS;
- (double)getAvgTimeSec;
- (double)getAvgTimeMilli;
- (void)reset;
- (Ptr<cv::TickMeter>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
