@interface VoiceReminderMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, IMsgExt>
{
    NSMutableDictionary * _dicRemindId; // +0x8
}
- (void)onRemindMsgsOpReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doRemindMsgsOp:(unsigned int)arg1 arrRemindId:(id)arg2;
- (BOOL)shouldNotifyRemindMsg:(id)arg1;
- (void)onNotifyRemindMsg:(id)arg1;
- (void)onVoiceReminderAlertClickDetail:(id)arg1;
- (void)onVoiceReminderAlertClickOK:(id)arg1;
- (void)onVoiceReminderAlertClick:(id)arg1 viewDetail:(BOOL)arg2;
- (id)init;
- (void)dealloc;
- (void)deleteRemindMsgs:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void).cxx_destruct;
@end

