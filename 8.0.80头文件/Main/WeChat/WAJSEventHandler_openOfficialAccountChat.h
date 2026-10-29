@interface WAJSEventHandler_openOfficialAccountChat : WAJSEventHandler_BaseEvent <IStrangerContactMgrExt>
{
     fetchingUserName; // +0x8
}
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
@end
