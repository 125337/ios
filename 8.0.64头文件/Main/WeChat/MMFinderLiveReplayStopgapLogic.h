@interface MMFinderLiveReplayStopgapLogic : NSObject
{
    BOOL _h265Capable; // +0x8
    BOOL _preloadInvoked; // +0x9
    unsigned int _currentLiveQuality; // +0xc
    FinderLiveReplayTransitionInfo * _stopgapInfo; // +0x10
    FinderLiveReplayTransitionPreloadInfo * _preloadInfo; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    MMFinderLiveReplayStopgapConfiguration * _stopgapConfig; // +0x28
    MMFinderLiveReplayStopgapPreloadRecord * _preloadRecord; // +0x30
}
+ (BOOL)stopgapInfoValid:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (BOOL)stopgapPresent;
- (id)preferredMediaItem;
- (void)setCurrentLiveQuality:(unsigned int)arg1;
- (void)updateWithStopgapInfo:(id)arg1 preloadInfo:(id)arg2;
- (void)tryStartPreload;
- (void)markPreloadCompleteWithPreloadRecord:(id)arg1;
- (void)updateCurrentLiveQuality;
- (id)stopgapInfo;
- (void)setStopgapInfo:(id)arg1;
- (id)preloadInfo;
- (void)setPreloadInfo:(id)arg1;
- (unsigned int)currentLiveQuality;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)h265Capable;
- (void)setH265Capable:(BOOL)arg1;
- (id)stopgapConfig;
- (void)setStopgapConfig:(id)arg1;
- (id)preloadRecord;
- (void)setPreloadRecord:(id)arg1;
- (BOOL)preloadInvoked;
- (void)setPreloadInvoked:(BOOL)arg1;
- (void).cxx_destruct;
@end
