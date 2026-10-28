@interface MMScreenShotMgr : MMUserService <MMServiceProtocol>
{
    MMScreenShotForwardView * _forwardView; // +0x8
    unsigned long long _takeScreenShotTime; // +0x10
}
+ (BOOL)isEnable;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)forwardView;
- (void)onUserDidTakeScreenshot;
- (void)animateShowView;
- (id)findWindowToAttach;
- (void)animateHideView;
- (void)onClickForwardButton;
- (void)fetchLastImage:(id /* block */)arg1;
- (void)fetchLastMMAsset:(id /* block */)arg1 times:(int)arg2;
- (void)setForwardView:(id)arg1;
- (unsigned long long)takeScreenShotTime;
- (void)setTakeScreenShotTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
