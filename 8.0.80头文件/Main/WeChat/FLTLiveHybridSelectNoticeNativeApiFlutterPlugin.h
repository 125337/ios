@interface FLTLiveHybridSelectNoticeNativeApiFlutterPlugin : NSObject <MMFinderLiveCreateNoticeViewControllerDelegate, MMFlutterPlugin, LiveCreateNoticeNativeApi, LiveSelectNoticeNativeApi>
{
    id <FLTLiveHybridSelectNoticeNativeApiFlutterPluginDelegate> _delegate; // +0x8
    UIViewController * _viewController; // +0x10
    NSMutableDictionary * _noticeCreationItems; // +0x18
}
- (void)onAttachedToViewController:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)createNoticeTaskID:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSelectNoticeResultAction:(unsigned long long)arg1 selectedNoticeData:(id)arg2 error:(id *)arg3;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)noticeCreationItems;
- (void)setNoticeCreationItems:(id)arg1;
- (void).cxx_destruct;
@end
