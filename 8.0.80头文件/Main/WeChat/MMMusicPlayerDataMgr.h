@interface MMMusicPlayerDataMgr : MMObject
+ (void)setCurMusicClipDuration:(double)arg1;
+ (double)getCaptureMaxDuration;
+ (unsigned int)getActualMusicClipDuration:(double)arg1;
+ (unsigned int)getActualVideoDuration:(double)arg1;
+ (BOOL)canSelectVideoWithVideoDuration:(double)arg1 andMusicDuration:(double)arg2;
@end
