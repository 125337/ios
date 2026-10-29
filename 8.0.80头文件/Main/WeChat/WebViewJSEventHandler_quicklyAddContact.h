@interface WebViewJSEventHandler_quicklyAddContact : WebviewJSEventHandlerBase <PBMessageObserverDelegate, IStrangerContactMgrExt>
{
    BOOL _isWaitContactSync; // +0x8
    MMTimer * _timerContactSync; // +0x10
    SyncContactInfo * _syncContactInfo; // +0x18
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)internalAddContact:(id)arg1;
- (void)CreateVerify:(id)arg1 andScene:(unsigned int)arg2 reportInfo:(id)arg3 scenenote:(id)arg4 finderBuffer:(id)arg5 searchClickId:(id)arg6;
- (void)scheduleContactSyncTimer;
- (void)invalidateContactSyncTimer;
- (void)onTimeoutContactSync:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callbackAddContactOK;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (id)syncContactInfo;
- (void)setSyncContactInfo:(id)arg1;
- (void).cxx_destruct;
@end
