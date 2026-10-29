@interface MMFinderLiveKTVSongPrepareRecord : NSObject
{
    double _beginTimeInMs; // +0x8
    double _endTimeInMs; // +0x10
}
- (double)costTimeInMs;
- (double)beginTimeInMs;
- (void)setBeginTimeInMs:(double)arg1;
- (double)endTimeInMs;
- (void)setEndTimeInMs:(double)arg1;
@end
