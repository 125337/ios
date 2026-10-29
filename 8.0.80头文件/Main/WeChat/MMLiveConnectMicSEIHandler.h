@interface MMLiveConnectMicSEIHandler : NSObject
{
    BOOL _useBackendSeiInfo; // +0x8
    BOOL _shouldUpdateMicUsersInfoAfterReceiveAudioRoomAnchorSei; // +0x9
    BOOL _canSwitchBackendSei; // +0xa
    MMLiveTaskId * _taskId; // +0x10
    id <MMLiveConnectMicSEIHandlerDelegate> _logicDelegate; // +0x18
    FinderLiveBackendPeriodSeiInfo * _lastBackendPeriodSeiInfo; // +0x20
    MMLiveBackendSeiMicMsgWrap * _backendSeiMicMsgWrap; // +0x28
    unsigned long long _lastReceiveAudioRoomAnchorSeiTime; // +0x30
    unsigned long long _firstLiveStreamServerTimeUpdatedTime; // +0x38
    unsigned long long _lastLiveStreamServerTimeUpdatedTime; // +0x40
    unsigned long long _lastLiveStreamServerTime; // +0x48
}
- (id)initWithTaskId:(id)arg1 andDelegate:(id)arg2;
- (id)getLiveTask;
- (id)audioRoomSeiMicMsg;
- (void)resetBackendSeiInfo;
- (void)configBackendSeiInfo;
- (void)updateCanSwitchBackendSeiTimeValues;
- (BOOL)checkAndUpdateBackendSeiMicMsgWrap;
- (id)generateAudioRoomSeiMicMsgFromBackendSeiInfo:(id)arg1;
- (void)handleAudioRoomSceneChangedTo:(unsigned long long)arg1;
- (BOOL)handleAudioRoomAnchorSEIMicMsgInfoUpdated:(id)arg1;
- (void)handlePlayingViaCdnChanged:(BOOL)arg1;
- (void)handleFinderLiveBackendPeriodSeiInfoUpdated:(id)arg1;
- (void)handleLiveStreamServerTimeUpdated:(unsigned long long)arg1;
- (BOOL)useBackendSeiInfo;
- (void)setUseBackendSeiInfo:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (BOOL)shouldUpdateMicUsersInfoAfterReceiveAudioRoomAnchorSei;
- (void)setShouldUpdateMicUsersInfoAfterReceiveAudioRoomAnchorSei:(BOOL)arg1;
- (id)lastBackendPeriodSeiInfo;
- (void)setLastBackendPeriodSeiInfo:(id)arg1;
- (id)backendSeiMicMsgWrap;
- (void)setBackendSeiMicMsgWrap:(id)arg1;
- (BOOL)canSwitchBackendSei;
- (void)setCanSwitchBackendSei:(BOOL)arg1;
- (unsigned long long)lastReceiveAudioRoomAnchorSeiTime;
- (void)setLastReceiveAudioRoomAnchorSeiTime:(unsigned long long)arg1;
- (unsigned long long)firstLiveStreamServerTimeUpdatedTime;
- (void)setFirstLiveStreamServerTimeUpdatedTime:(unsigned long long)arg1;
- (unsigned long long)lastLiveStreamServerTimeUpdatedTime;
- (void)setLastLiveStreamServerTimeUpdatedTime:(unsigned long long)arg1;
- (unsigned long long)lastLiveStreamServerTime;
- (void)setLastLiveStreamServerTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
