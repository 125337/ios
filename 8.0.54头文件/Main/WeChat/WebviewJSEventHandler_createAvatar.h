@interface WebviewJSEventHandler_createAvatar : WebviewJSEventHandlerBase <MMAuthorizeAddAvatarViewControllerDelegate>
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onAddAvatarSuccess:(id)arg1;
- (void)onModAvatarSuccess:(id)arg1;
- (void)cancelAddAvatar;
@end

