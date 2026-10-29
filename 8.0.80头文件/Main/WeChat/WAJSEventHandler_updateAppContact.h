@interface WAJSEventHandler_updateAppContact : WAJSEventHandler_getAppContact <WAContactMgrExtension>
{
    NSString * _requestUsername; // +0x8
    NSString * _requestAppId; // +0x10
    NSString * _keyPath; // +0x18
    MMTimer * _contactGetterTimer; // +0x20
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)onGetContactTimeout;
- (id)requestUsername;
- (void)setRequestUsername:(id)arg1;
- (id)requestAppId;
- (void)setRequestAppId:(id)arg1;
- (id)keyPath;
- (void)setKeyPath:(id)arg1;
- (id)contactGetterTimer;
- (void)setContactGetterTimer:(id)arg1;
- (void).cxx_destruct;
@end
