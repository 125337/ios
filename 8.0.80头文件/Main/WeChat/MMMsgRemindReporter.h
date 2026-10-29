@interface MMMsgRemindReporter : MMUserService <IMMNewSessionMgrExt, MMServiceProtocol>
{
    BOOL _isRecording; // +0x8
    BOOL _hasLeavePageAtRecording; // +0x9
    BOOL _hasBackToMainFrame; // +0xa
    BOOL _hasEnterRemindContact; // +0xb
    unsigned int _startRecordTime; // +0xc
    unsigned int _newMsgEndTime; // +0x10
    unsigned int _enterMainFrameTime; // +0x14
    MMTimer * _timer; // +0x18
    NSMutableSet * _recordSessions; // +0x20
    NSString * _currentSessionName; // +0x28
    long long _newMsgCount; // +0x30
    long long _pageType; // +0x38
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)didEnterMainFrame;
- (void)didLeaveCurrentPage;
- (void)didEnterSession:(id)arg1;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)startRecordFlowAtSession:(id)arg1;
- (void)stopRecordFlow;
- (void)stopRecordNewMsg;
- (void)recordNewMsgAtSession:(id)arg1;
- (void)resetReportData;
- (void)stopTimer;
- (void)doReport;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (id)recordSessions;
- (void)setRecordSessions:(id)arg1;
- (BOOL)hasLeavePageAtRecording;
- (void)setHasLeavePageAtRecording:(BOOL)arg1;
- (id)currentSessionName;
- (void)setCurrentSessionName:(id)arg1;
- (unsigned int)startRecordTime;
- (void)setStartRecordTime:(unsigned int)arg1;
- (unsigned int)newMsgEndTime;
- (void)setNewMsgEndTime:(unsigned int)arg1;
- (long long)newMsgCount;
- (void)setNewMsgCount:(long long)arg1;
- (long long)pageType;
- (void)setPageType:(long long)arg1;
- (BOOL)hasBackToMainFrame;
- (void)setHasBackToMainFrame:(BOOL)arg1;
- (BOOL)hasEnterRemindContact;
- (void)setHasEnterRemindContact:(BOOL)arg1;
- (unsigned int)enterMainFrameTime;
- (void)setEnterMainFrameTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
