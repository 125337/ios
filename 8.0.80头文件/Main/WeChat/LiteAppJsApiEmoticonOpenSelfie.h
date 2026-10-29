@interface LiteAppJsApiEmoticonOpenSelfie : LiteAppJsApi <MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate>
{
    EmoticonCustomAddLogicController * _emoticonAddLogicController; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)emoticonAddLogicController;
- (void)endWithOK;
- (id)errMsgWith:(id)arg1;
- (id)getViewController;
- (void)onTakePhotoCancelled;
- (void)onAddCustomEmoticonPendingUploadWithWrap:(id)arg1;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(BOOL)arg2;
- (void)onAddEmoticonDetectIfDismissViewController:(id)arg1;
- (void)setEmoticonAddLogicController:(id)arg1;
- (void).cxx_destruct;
@end
