@interface BizAudioInsertedContentPlugin : NSObject <MMFlutterPlugin, TingInsertedContentApi>
{
    UIViewController * _currentViewController; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)showFinderProfileDialogUserName:(id)arg1 percentHeight:(double)arg2 listenItemData:(id)arg3 tabType:(long long)arg4 requestScene:(long long)arg5 extraInfo:(id)arg6 followScene:(long long)arg7 completion:(id /* block */)arg8;
- (void)showBizProfileDialogUserName:(id)arg1 percentHeight:(id)arg2 completion:(id /* block */)arg3;
- (void)showBizProfileDialogUserName:(id)arg1 percentHeight:(double)arg2 listenItemData:(id)arg3 scene:(long long)arg4 sceneNote:(id)arg5 completion:(id /* block */)arg6;
- (void)closeProfileDialogWithError:(id *)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (void).cxx_destruct;
@end
