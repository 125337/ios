@interface WAJSEventHandler_profile : WAJSEventHandler_BaseEvent <IStrangerContactMgrExt>
{
    NSMutableDictionary * _param; // +0x8
    NSString * _scene; // +0x10
    unsigned long long _contactType; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (void)openProfileWithType:(unsigned long long)arg1 param:(id)arg2;
- (void)finallyOpenProfile:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)showErrorWhenNoContact;
- (void).cxx_destruct;
@end
