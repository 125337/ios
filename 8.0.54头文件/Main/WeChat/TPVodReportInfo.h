@interface TPVodReportInfo : TPDefaultReportInfo
{
    BOOL _hasSubtitles; // +0xd0
    long long _optimizedPlay; // +0xd8
    long long _bizId; // +0xe0
    long long _clipCount; // +0xe8
    long long _videoStatus; // +0xf0
    long long _currentPlayState; // +0xf8
}
- (long long)playType;
- (long long)optimizedPlay;
- (void)setOptimizedPlay:(long long)arg1;
- (BOOL)hasSubtitles;
- (void)setHasSubtitles:(BOOL)arg1;
- (long long)bizId;
- (void)setBizId:(long long)arg1;
- (long long)clipCount;
- (void)setClipCount:(long long)arg1;
- (long long)videoStatus;
- (void)setVideoStatus:(long long)arg1;
- (long long)currentPlayState;
- (void)setCurrentPlayState:(long long)arg1;
@end

