@interface WAAuthorizeAddAvatarProxy : NSObject <MMAuthorizeAddAvatarViewControllerDelegate>
{
    id <IWAAuthorizeAddAvatarServiceDelegate> _delegate; // +0x8
}
- (id)authorizeAddAvatarViewControllerWithParams:(id)arg1 delegate:(id)arg2;
- (void)onAddAvatarSuccess:(id)arg1;
- (void)onModAvatarSuccess:(id)arg1;
- (void)cancelAddAvatar;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
