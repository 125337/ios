@interface MMFinderLiveKTVScoreBaseFrameUnit : NSObject
{
    int _inSize; // +0x8
    char * _inBuffer; // +0x10
    double _timeOffsetMS; // +0x18
}
- (id)initWithInBuffer:(char *)arg1 inSize:(int)arg2 timeOffsetMS:(double)arg3;
- (char *)inBuffer;
- (void)setInBuffer:(char *)arg1;
- (int)inSize;
- (void)setInSize:(int)arg1;
- (double)timeOffsetMS;
- (void)setTimeOffsetMS:(double)arg1;
@end

