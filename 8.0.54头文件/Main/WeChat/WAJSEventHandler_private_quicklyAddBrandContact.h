@interface WAJSEventHandler_private_quicklyAddBrandContact : WAJSEventHandler_BaseEvent <IContactMgrExt>
{
    BOOL _isWaitContactSync; // +0x8
    MMTimer * _timerContactSync; // +0x10
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)CreateVerify:(id)arg1 andScene:(unsigned int)arg2;
- (void)scheduleContactSyncTimer;
- (void)invalidateContactSyncTimer;
- (void)onTimeoutContactSync:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)callbackAddContactOK;
- (void)onModifyContact:(id)arg1;
- (void).cxx_destruct;
@end

