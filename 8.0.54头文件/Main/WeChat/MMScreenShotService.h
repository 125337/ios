@interface MMScreenShotService : MMUserService <MMUIViewControllerExt, MMServiceProtocol>
{
    BOOL _isCaptured; // +0x8
    NSURL * _fakeScreenShotUrl; // +0x10
    UIImage * _fakeScreenShot; // +0x18
    UIImage * _sendingScreenShot; // +0x20
    NSURL * _sendingScreenShotUrl; // +0x28
}
- (void)setIsCaptured:(BOOL)arg1;
- (void)takeScreenShot;
- (id)getFakeScreenShotUrl;
- (id)getScreenShotForUrl:(id)arg1;
- (void)cacheCurrentFakeScreenShot;
- (void)cleanCachedScreenShot;
- (unsigned int)getReportScene;
- (BOOL)shouldFakeScreenShot;
- (void)logVC:(id)arg1 action:(id)arg2;
- (void)saveFakeScreenShot:(id)arg1;
- (void)MMUIViewControllerDidBePushOrPresent:(id)arg1;
- (BOOL)isCaptured;
- (id)fakeScreenShotUrl;
- (void)setFakeScreenShotUrl:(id)arg1;
- (id)fakeScreenShot;
- (void)setFakeScreenShot:(id)arg1;
- (id)sendingScreenShot;
- (void)setSendingScreenShot:(id)arg1;
- (id)sendingScreenShotUrl;
- (void)setSendingScreenShotUrl:(id)arg1;
- (void).cxx_destruct;
@end

