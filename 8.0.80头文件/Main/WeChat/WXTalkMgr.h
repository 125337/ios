@interface WXTalkMgr : MMUserService <AUAudioDataSource, IRemoteControlCheckExt, AVAudioPlayerDelegate, CNetworkStatusExt, IAUAudioDeviceExt, MMServiceProtocol, PBMessageObserverDelegate, IWXTalkPresentExt, AVAudioPlayerDelegate, IContactMgrExt, MMKernelExt>
{
    BOOL _isInTalkRoom; // +0x8
    BOOL _isRealInTalkRoom; // +0x9
    MMTimer * _regetMicTimer; // +0x10
    BOOL _isPause; // +0x18
    BOOL _isPlayingBeginSound; // +0x19
    BOOL _isGettingRoomMember; // +0x1a
    BOOL _isRecording; // +0x1b
    BOOL _hasPlayGetMicSound; // +0x1c
    BOOL _isWantToTalk; // +0x1d
    unsigned int _scene; // +0x20
    AVAudioPlayer * _player; // +0x28
    WXTalkStatusReportHelper * _reportHelper; // +0x30
    WXTalkRoomData * roomData; // +0x38
    WXTalkieComponent * component; // +0x40
    WXTalkDNSController * wxTalkDNSController; // +0x48
    NSRecursiveLock * audioEncLock; // +0x50
    NSRecursiveLock * audioDecLock; // +0x58
    MMTimer * wxTalkTimer; // +0x60
    __sFILE * recordDumpFile; // +0x68
}
- (void)StartTalk;
- (void)StopTalk;
- (void)StartRecord;
- (void)StartPlay;
- (void)StopRecord;
- (void)GetUnknowMemberByMemberId:(unsigned int)arg1;
- (void)SetCurrentSpeakingMember:(id)arg1;
- (void)ReportNobodyTalking;
- (void)StopReportNobodyTalking;
- (void)PlayBeginSound;
- (void)NotifyMainThreadNoTalkingData;
- (void)NotifyMainThreadHasTalkingData;
- (void)NotifyMainThreadCurrentSpeakingStatus:(id)arg1;
- (void)DumpToRecordFile:(char *)arg1 withDataLen:(unsigned int)arg2;
- (BOOL)isGetDataReady;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (void)iRemoteControlCheckShouldBeginRecord;
- (void)iRemoteControlCheckShouldFinishRecord;
- (void)SendHeartBeatRequest;
- (void)TimerCheck;
- (void)CreateRecordDumpFile;
- (void)CloseRecordDumpFile;
- (void)StartSession;
- (void)StopSession;
- (void)handleBeginInterruption;
- (void)handleEndInterruption;
- (void)NotifyMainThreadEnterRoomOK;
- (void)NotifyMainThreadEngineError;
- (void)OnOpenEngineSuccess;
- (void)OnEngineError:(int)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)ForceStop;
- (void)audioDeviceForceStop:(id)arg1;
- (void)Pause;
- (void)audioDevicePause:(id)arg1;
- (void)Restart;
- (void)audioDeviceResetCallback:(id)arg1;
- (void)audioDeviceRestart:(id)arg1;
- (void)InitAll;
- (void)UnInitAll;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)resetData;
- (void)stopPlaySound;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (BOOL)IsOpenWXTalkMode:(id)arg1;
- (BOOL)IsOpenAnyWXTalkMode;
- (BOOL)CanEnterThisRoom:(id)arg1;
- (BOOL)OpenWXTalkMode:(id)arg1;
- (BOOL)IsRealInTalkRoom;
- (void)CloseWXTalkMode:(BOOL)arg1;
- (void)CloseWXTalkModeAndNotifyUI:(BOOL)arg1;
- (void)GetMicrophone;
- (void)GiveupMicrophone;
- (void)startRegetMicLogic;
- (void)stopRegetMicLogic;
- (void)SendEnterTalkRoomRequest;
- (int)retToErrType:(int)arg1;
- (void)handleEnterTalkRoomResponse:(id)arg1;
- (void)SendExitTalkRoomRequest;
- (void)handleExitTalkRoomResponse:(id)arg1;
- (void)SendGetMicrophoneRequest;
- (void)handleGetMicrophoneResponse:(id)arg1;
- (void)SendRegetMicrophoneRequest;
- (void)SendGiveupMicrophoneRequest;
- (void)handleGetTalkRoomMemberResponse:(id)arg1;
- (void)handleHeartBeatResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)checkIfOfflineAndNeedReEnter:(id)arg1;
- (void)reOpenWXTalkMode:(id)arg1;
- (void)TellOthersWhoEnterOrExitRoom:(id)arg1;
- (void)TellOthersAllMembersExitRoom;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onKickQuit;
- (void)onPreQuit;
- (id)roomData;
- (void)setRoomData:(id)arg1;
- (id)component;
- (void)setComponent:(id)arg1;
- (id)wxTalkDNSController;
- (void)setWxTalkDNSController:(id)arg1;
- (id)audioEncLock;
- (void)setAudioEncLock:(id)arg1;
- (id)audioDecLock;
- (void)setAudioDecLock:(id)arg1;
- (id)wxTalkTimer;
- (void)setWxTalkTimer:(id)arg1;
- (__sFILE *)recordDumpFile;
- (void)setRecordDumpFile:(__sFILE *)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
