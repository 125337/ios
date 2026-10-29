@interface MJPlaybackConfiguration : NSObject
{
    BOOL _isAudioEnabled; // +0x8
    int _loopCount; // +0xc
    unsigned long long _playbackMode; // +0x10
    unsigned long long _playbackStartMode; // +0x18
    OMJID * _segmentID; // +0x20
    struct _startTimeOffset; // +0x28
    struct _endTimeOffset; // +0x40
}
- (id)init;
- (struct)playbackTimeRangeWithTimelineVM:(id)arg1;
- (struct)playbackTimeRangeWithTimeRange:(struct)arg1 timelineTimeRange:(struct)arg2;
- (struct)playbackStartTimeWithTimelineVM:(id)arg1 playbackVM:(id)arg2;
- (void)resetToTimelineMode;
- (void)resetToSegmentModeWithSegmentID:(id)arg1 playbackStartMode:(unsigned long long)arg2 loopCount:(int)arg3 startTimeOffset:(struct)arg4 endTimeOffset:(struct)arg5 isAudioEnabled:(BOOL)arg6;
- (void)updateSegmentID:(id)arg1;
- (unsigned long long)playbackMode;
- (void)setPlaybackMode:(unsigned long long)arg1;
- (unsigned long long)playbackStartMode;
- (void)setPlaybackStartMode:(unsigned long long)arg1;
- (id)segmentID;
- (int)loopCount;
- (void)setLoopCount:(int)arg1;
- (struct)startTimeOffset;
- (void)setStartTimeOffset:(struct)arg1;
- (struct)endTimeOffset;
- (void)setEndTimeOffset:(struct)arg1;
- (BOOL)isAudioEnabled;
- (void)setIsAudioEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

