@interface MMFinderLiveSessionSelectHandle : NSObject <SessionSelectControllerDelegate>
{
    NSString * _userName; // +0x8
    UINavigationController * _navVC; // +0x10
    NSString * _qrCodeUri; // +0x18
    MMFinderLiveQrCodeSessionSelectController * _sessionSelectController; // +0x20
}
- (void)pushLiveSessionSelectUserName:(id)arg1 currentNavController:(id)arg2 qrCodeUri:(id)arg3;
- (void)pushSelectViewController;
- (id)sessionSelectController;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (id)qrCodeUri;
- (void)setQrCodeUri:(id)arg1;
- (void)setSessionSelectController:(id)arg1;
- (void).cxx_destruct;
@end

