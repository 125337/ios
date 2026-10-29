@interface MMFinderLivePictureInPictureReporter : NSObject
{
    MMFinderLiveTaskId * _taskID; // +0x8
    unsigned long long _pipStartTime; // +0x10
    unsigned long long _lastPauseTime; // +0x18
    unsigned long long _pauseDuration; // +0x20
}
- (void)reportForStartPictureInPicture;
- (void)reportForStopPictureInPicture;
- (void)reportForClosePictureInPicture;
- (void)reportForRestorePictureInPicture;
- (void)reportForPausePictureInPicture;
- (void)reportForResumePictureInPicture;
- (void)onPictureInPicturePause;
- (void)onPictureInPictureResume;
- (id)audienceLogReporter;
- (void)clearLastDatas;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (unsigned long long)pipStartTime;
- (void)setPipStartTime:(unsigned long long)arg1;
- (unsigned long long)lastPauseTime;
- (void)setLastPauseTime:(unsigned long long)arg1;
- (unsigned long long)pauseDuration;
- (void)setPauseDuration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

