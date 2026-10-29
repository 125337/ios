@interface ImageEditRouteHandler : NSObject <EditImageForwardAndEditLogicDelegate>
{
    EditImageForwardAndEditLogicController * _editImageLogicController; // +0x8
    NSString * _sessionId; // +0x10
}
+ (id)shared;
+ (void)registerContinueEditHandler:(id)arg1;
+ (void)unregisterContinueEditHandler;
+ (BOOL)hasActiveContinueEditHandler;
+ (void)handleContinueEditWithImage:(id)arg1 path:(id)arg2 fromVC:(id)arg3;
+ (void)handleContinueEditWithImage:(id)arg1 path:(id)arg2 fromVC:(id)arg3 sessionId:(id)arg4;
+ (id)md5ForData:(id)arg1;
- (void)onShowingEditView;
- (void)onDismissEditView;
- (id)editImageLogicController;
- (void)setEditImageLogicController:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
