@interface FLTStatusPlugin : NSObject <FLTStatusActionPlatformApi, MMFlutterPlugin>
{
    UIViewController * _associateViewController; // +0x8
    NSObject<FlutterTextureRegistry> * _flutterTextureRegistery; // +0x10
    FLTStatusCommonApi * _commonApi; // +0x18
    NSMutableSet * _handlerSet; // +0x20
}
+ (id)requestFromData:(id)arg1 pbClass:(Class)arg2;
+ (id)plugin;
- (void)handleRegisterCallbackRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleUnregisterCallbackRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleJumpUserProfilePage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleJumpSelectStatusPostPage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleJumpPoiPage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleShowVisibilityGroupDialog:(id)arg1 completion:(id /* block */)arg2;
- (void)handleShowLikeListDialog:(id)arg1 completion:(id /* block */)arg2;
- (void)handleShowCommentDialog:(id)arg1 completion:(id /* block */)arg2;
- (void)handleOnEnterCardDialogPage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleOnExitCardDialogPage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleActionWithCommand:(id)arg1 requestData:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)dealloc;
- (id)availableNavigationController;
- (void)fltStatusActionRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)sendCallback:(id)arg1 data:(id)arg2 completion:(id /* block */)arg3;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (id)associateViewController;
- (void)setAssociateViewController:(id)arg1;
- (id)flutterTextureRegistery;
- (void)setFlutterTextureRegistery:(id)arg1;
- (id)commonApi;
- (void)setCommonApi:(id)arg1;
- (id)handlerSet;
- (void)setHandlerSet:(id)arg1;
- (void).cxx_destruct;
@end
