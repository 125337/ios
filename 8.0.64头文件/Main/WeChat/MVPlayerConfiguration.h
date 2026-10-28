@interface MVPlayerConfiguration : NSObject
{
    BOOL _shouldShowAlbumImage; // +0x8
    BOOL _resetWhileEpisodeIndexChanged; // +0x9
    long long _initailTimeInSeconds; // +0x10
    unsigned long long _actionAfterDurationAvailable; // +0x18
    MVPlayerTimeRange * _loopTimeRange; // +0x20
    double _initalTime; // +0x28
    unsigned long long _minimizationWindowUIStyle; // +0x30
}
- (id)init;
- (long long)initailTimeInSeconds;
- (void)setInitailTimeInSeconds:(long long)arg1;
- (unsigned long long)actionAfterDurationAvailable;
- (void)setActionAfterDurationAvailable:(unsigned long long)arg1;
- (BOOL)shouldShowAlbumImage;
- (void)setShouldShowAlbumImage:(BOOL)arg1;
- (BOOL)resetWhileEpisodeIndexChanged;
- (void)setResetWhileEpisodeIndexChanged:(BOOL)arg1;
- (id)loopTimeRange;
- (void)setLoopTimeRange:(id)arg1;
- (double)initalTime;
- (void)setInitalTime:(double)arg1;
- (unsigned long long)minimizationWindowUIStyle;
- (void)setMinimizationWindowUIStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
