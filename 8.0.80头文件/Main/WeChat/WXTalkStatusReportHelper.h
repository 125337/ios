@interface WXTalkStatusReportHelper : MMObject <PBMessageObserverDelegate>
{
    unsigned int _openWXTalkModeTime; // +0x8
    unsigned int _startTalkingTime; // +0xc
    unsigned int _startGetMicTime; // +0x10
    unsigned int _getMicCount; // +0x14
    unsigned int _getMicSucCount; // +0x18
    unsigned int _getMicFailCount; // +0x1c
    double _openModeUseTime; // +0x20
    double _openModeAndOpenEngineUsedTime; // +0x28
    unsigned int _openModeResult; // +0x30
    unsigned int _totalTalkingTime; // +0x34
    double _getMicTotalTime; // +0x38
    unsigned int _sendInviteTimes; // +0x40
    unsigned int _offlineReConnectTimes; // +0x44
    unsigned int _changeNetWorkReConTimes; // +0x48
    unsigned int _isEngineError; // +0x4c
    unsigned int _getRoomMemberCGI; // +0x50
    unsigned int _systemMsgErrorCount; // +0x54
    unsigned int _isBeKickedOut; // +0x58
    int _errCode; // +0x5c
    int[10] _talkingTimeDistributed; // +0x60
    BOOL _getMicResult; // +0x88
    BOOL _isGettingMic; // +0x89
}
- (void)resetData;
- (id)genReportLog:(id)arg1 RoomId:(int)arg2 RoomKey:(long long)arg3;
- (void)LogReportOpenWXTalkMode;
- (void)sendStatusReportRequest:(id)arg1;
- (void)LogReportCloseWXTalkMode:(id)arg1 RoomName:(id)arg2 RoomId:(int)arg3 RoomKey:(long long)arg4;
- (void)LogReportOpenWXTalkModeResult:(BOOL)arg1;
- (void)LogReportGetMic;
- (void)LogReportGetMicResult:(BOOL)arg1;
- (void)distributeTalkingTime:(int)arg1;
- (void)LogReportGiveupMic;
- (void)LogReportWXTalkInvite;
- (void)LogReportOfflineReConnect;
- (void)LogReportChangeNetWorkReConnect;
- (void)LogReportEngineError;
- (void)LogReportSystemMsgError;
- (void)LogReportBeKickedOut;
- (void)LogReportOpenEngineOk;
- (void)LogReportErrorCode:(int)arg1;
- (void)handleWXTalkStatReportResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end
