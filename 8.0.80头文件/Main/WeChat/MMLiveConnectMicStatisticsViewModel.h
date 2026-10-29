@interface MMLiveConnectMicStatisticsViewModel : NSObject
{
    BOOL _isKTVMode; // +0x8
    unsigned int _pollingTimeIntervalForFetchingMicReplayInfo; // +0xc
    id <MMLiveConnectMicStatisticsViewModelDelegate> _actionDelegate; // +0x10
    id <MMLiveConnectMicStatisticsViewModelKtvInfoDelegate> _ktvInfoDelegate; // +0x18
    unsigned long long _statisticsState; // +0x20
    unsigned long long _replayStatus; // +0x28
    MicReplayInfo * _micReplayInfo; // +0x30
    KtvReplayInfo * _ktvReplayInfo; // +0x38
    MMFinderLiveTaskId * _taskId; // +0x40
    NSString * _sessionId; // +0x48
    FinderGetLiveInfoResp_AudienceMicStats * _audienceMicStats; // +0x50
}
- (id)initWithTaskId:(id)arg1 sessionId:(id)arg2 isKTVMode:(BOOL)arg3;
- (id)liveTask;
- (void)fetchConnectMicStatistics;
- (unsigned long long)connectMicDuration;
- (unsigned long long)connectMicUV;
- (unsigned long long)connectMicHeatCount;
- (unsigned long long)connectMicLikeCount;
- (unsigned long long)songsSungCount;
- (unsigned int)newSssSongUvCount;
- (unsigned int)newSungSongUvCount;
- (void)tryGenerateReplay;
- (void)generateReplayOrGetReplayInfoWithFlag:(BOOL)arg1;
- (void)handleGenerateReplayOrGetReplayInfoFailedWithFlag:(BOOL)arg1 canRetry:(BOOL)arg2;
- (void)handleGenerateReplayOrGetReplayInfoSuccessfulWithFlag:(BOOL)arg1 micReplayInfoResultObj:(id)arg2;
- (BOOL)isCurrentKtvReplayInfoSameToLastKtvReplayInfo:(id)arg1;
- (void)showTryGenerateReplaySuccessfullyToast;
- (void)delayGetReplayInfo;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)ktvInfoDelegate;
- (void)setKtvInfoDelegate:(id)arg1;
- (unsigned long long)statisticsState;
- (void)setStatisticsState:(unsigned long long)arg1;
- (unsigned long long)replayStatus;
- (void)setReplayStatus:(unsigned long long)arg1;
- (BOOL)isKTVMode;
- (void)setIsKTVMode:(BOOL)arg1;
- (id)micReplayInfo;
- (void)setMicReplayInfo:(id)arg1;
- (id)ktvReplayInfo;
- (void)setKtvReplayInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)audienceMicStats;
- (void)setAudienceMicStats:(id)arg1;
- (unsigned int)pollingTimeIntervalForFetchingMicReplayInfo;
- (void)setPollingTimeIntervalForFetchingMicReplayInfo:(unsigned int)arg1;
- (void).cxx_destruct;
@end
