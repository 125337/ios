@interface MMFinderLiveKtvSongSegmentInfo : NSObject
{
    BOOL _hasSegment; // +0x8
    long long _segmentStart; // +0x10
    long long _segmentEnd; // +0x18
}
+ (void)buildSongSegmentInfo:(id)arg1 withSegmentInfo:(id)arg2;
- (id)toSegmentPb;
- (BOOL)hasSegment;
- (void)setHasSegment:(BOOL)arg1;
- (long long)segmentStart;
- (void)setSegmentStart:(long long)arg1;
- (long long)segmentEnd;
- (void)setSegmentEnd:(long long)arg1;
@end
