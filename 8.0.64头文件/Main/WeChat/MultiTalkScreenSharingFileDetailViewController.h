@interface MultiTalkScreenSharingFileDetailViewController : FileDetailViewController <MultiTalkScreenSharingFileProtocol>
{
    BOOL _automaticallyAdjustsWebScrollViewInsets; // +0x70
    BOOL _showsToastForSwitchingLandscape; // +0x71
    UIColor * _previewBackgroundColor; // +0x78
    long long _fileEncryptType; // +0x80
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)updateWebScrollViewInset;
- (void)didInitPreview;
- (void)didLoadWebView;
- (void)checkFileEncryptType;
- (BOOL)findWKPasswordViewInView:(id)arg1;
- (void)updateViewAndSubviews:(id)arg1 withBackgroundColor:(id)arg2;
- (void)showToastForSwitchingLandscapeIfNeeded;
- (void)showToastForSwitchingLandscape;
- (id)customizedPreviewControllerForPreviewType:(unsigned int)arg1;
- (id)filePathForScreenSharing;
- (id)previewBackgroundColor;
- (void)setPreviewBackgroundColor:(id)arg1;
- (BOOL)automaticallyAdjustsWebScrollViewInsets;
- (void)setAutomaticallyAdjustsWebScrollViewInsets:(BOOL)arg1;
- (BOOL)showsToastForSwitchingLandscape;
- (void)setShowsToastForSwitchingLandscape:(BOOL)arg1;
- (long long)fileEncryptType;
- (void)setFileEncryptType:(long long)arg1;
- (void).cxx_destruct;
@end
