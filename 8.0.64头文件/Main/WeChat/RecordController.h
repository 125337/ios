@interface RecordController : MMObject <MonoServiceLogicExt, IAudioSenderExt, IRemoteControlCheckExt, IMsgExt>
{
    MMTimer * m_TimeoutTimer; // +0x8
    id <RecordControllerDelegate> m_delegate; // +0x10
    BOOL m_bRecording; // +0x18
    BOOL m_bRecordEnabled; // +0x19
    unsigned int m_uiTmpRecordID; // +0x1c
    BOOL m_bRemoteControl; // +0x20
    unsigned int m_currentTmpFormat; // +0x24
    double m_iLastMsgSentTime; // +0x28
}
- (void)Register;
- (void)UnRegister;
- (id)init;
- (BOOL)isRecording;
- (void)setButtonHighlighted:(BOOL)arg1;
- (void)ResetStateWithNotifyResetTips:(id)arg1;
- (void)TooShortTips;
- (void)TooLongTips;
- (void)RecordingTimeOutCounting;
- (void)StartRecordingInternal:(id)arg1;
- (void)StartTmpRecordInternal;
- (void)StartTmpRecording:(unsigned int)arg1;
- (void)StartTmpRecording;
- (BOOL)StartRecordingFromUsr:(id)arg1 ToUsr:(id)arg2 UserInfo:(id)arg3;
- (void)StopRecordingInternal;
- (void)StopRecordingInternal:(id)arg1;
- (void)StopRecording;
- (BOOL)StopRecordingInTransState:(BOOL)arg1;
- (void)CancelRecording;
- (id)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (void)stopRecording_notification:(id)arg1;
- (void)interruptRecording;
- (BOOL)canRemoteRecord;
- (void)iRemoteControlCheckShouldBeginRecord;
- (void)iRemoteControlCheckShouldFinishRecord;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)OnBeginRecording:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)OnEndRecording:(unsigned int)arg1;
- (void)OnRecordStartFail:(id)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnAddMsg:(id)arg1;
- (void)OnMsgSent:(id)arg1;
- (void)OnSendError:(id)arg1 ErrNo:(int)arg2;
- (void)onVoiceMsgSent:(id)arg1;
- (void)Reset;
- (void)dealloc;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_uiTmpRecordID;
- (void)setM_uiTmpRecordID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
