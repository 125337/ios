@interface MJComposingMusicUtils : NSObject
+ (struct)mj_cmTimeFromMilliseconds:(long long)arg1;
+ (id)convertMusicLyricInfosWithMusicData:(id)arg1;
+ (id)convertLyricInfosWithLrcString:(id)arg1 songDurationInMs:(unsigned long long)arg2;
+ (id)mj_convertLyricInfos:(id)arg1 songDurationInMs:(unsigned long long)arg2;
+ (BOOL)isValidMusicFilePath:(id)arg1;
+ (struct)totalDurationForMusicFilePath:(id)arg1 fallbackDuration:(struct)arg2;
+ (struct)safeTrimTimeRangeWithStartTime:(struct)arg1 duration:(struct)arg2 totalDuration:(struct)arg3;
+ (struct)currentTrimTimeRangeFromAppliedMusic:(id)arg1 totalDuration:(struct)arg2;
+ (void)syncAppliedMusicInfo:(id)arg1 withStartTime:(struct)arg2 duration:(struct)arg3;
+ (id)trimmedMusicInfoFromBase:(id)arg1 startTime:(struct)arg2 duration:(struct)arg3;
+ (void)setMusicTrimCurrentTimeRange:(struct)arg1 forHost:(id)arg2;
+ (struct)musicTrimCurrentTimeRangeForHost:(id)arg1;
+ (struct)waveformProgressForElapsedSeconds:(double)arg1 durationSeconds:(double)arg2 loop:(BOOL)arg3;
+ (id)buildClipViewControllerWithTotalDuration:(struct)arg1 trimTimeRange:(struct)arg2 musicFilePath:(id)arg3 delegate:(id)arg4;
@end
