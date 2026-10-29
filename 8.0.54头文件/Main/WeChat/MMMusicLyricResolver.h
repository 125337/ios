@interface MMMusicLyricResolver : NSObject
{
    NSString * _lyrics; // +0x8
    NSMutableArray * _lyricsList; // +0x10
    NSMutableArray * _timeList; // +0x18
    BOOL _isLyricListContainsEmptyStr; // +0x20
}
- (id)init;
- (BOOL)resolveLyrics:(id)arg1;
- (float)time_StringToFloat:(id)arg1;
- (int)getCurrentIndexWithTime:(float)arg1;
- (id)lyricsForTime:(double)arg1;
- (id)lyricsForTime:(double)arg1 preferCount:(unsigned long long)arg2;
- (double)getDuaration;
- (id)lyrics;
- (void)setLyrics:(id)arg1;
- (id)lyricsList;
- (void)setLyricsList:(id)arg1;
- (id)timeList;
- (void)setTimeList:(id)arg1;
- (void).cxx_destruct;
@end

