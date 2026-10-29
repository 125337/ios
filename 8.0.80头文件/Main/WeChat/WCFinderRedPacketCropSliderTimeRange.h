@interface WCFinderRedPacketCropSliderTimeRange : NSObject
{
    double _start; // +0x8
    double _duration; // +0x10
}
- (id)init;
- (id)description;
- (double)start;
- (void)setStart:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
@end
