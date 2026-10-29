@interface WAJSEventHandler_createVestUser : WAJSEventHandler_BaseEvent <IWAAuthorizeAddAvatarServiceDelegate>
{
    NSObject<IWAAuthorizeAddAvatarService> * _addAvatarService; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onIWAAuthorizeAddAvatarSuccess:(id)arg1;
- (void)onIWAAuthorizeModAvatarSuccess:(id)arg1;
- (void)onIWAAuthorizeAddAvatarCancel;
- (id)addAvatarService;
- (void)setAddAvatarService:(id)arg1;
- (void).cxx_destruct;
@end

