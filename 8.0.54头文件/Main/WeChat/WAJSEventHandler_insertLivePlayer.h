@interface WAJSEventHandler_insertLivePlayer : WAJSEventHandler_BaseEvent <IRecordPermissionCheckExt>
{
    NSDictionary * _eventDic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)realInsertLivePlayer;
- (BOOL)checkCanSetAudioAcitve;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (id)eventDic;
- (void)setEventDic:(id)arg1;
- (void).cxx_destruct;
@end

