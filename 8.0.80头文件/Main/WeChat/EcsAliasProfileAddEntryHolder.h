@interface EcsAliasProfileAddEntryHolder : NSObject <IWAAuthorizeAddAvatarServiceDelegate>
{
    NSObject<IWAAuthorizeAddAvatarService> * _service; // +0x8
    id /* block */ _completion; // +0x10
}
- (void)finishWithResult:(id)arg1;
- (void)onIWAAuthorizeAddAvatarSuccess:(id)arg1;
- (void)onIWAAuthorizeModAvatarSuccess:(id)arg1;
- (void)onIWAAuthorizeAddAvatarCancel;
- (id)service;
- (void)setService:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
