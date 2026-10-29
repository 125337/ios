@interface GCImgPreviewController : WCDragToCloseViewController <WCActionSheetDelegate, ImageScrollViewDelegate>
{
    ImageScrollView * imageScrollView; // +0x68
    BOOL _oriNavhidden; // +0x70
    BOOL _oriStatusBarHidden; // +0x71
    id <GCImgPreviewDelegate> _delegate; // +0x78
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x80
    NSString * _cdnKey; // +0x88
    NSString * _savePath; // +0x90
    WCActionSheetWithScanWXCode * _m_actionSheet; // +0x98
}
- (id)init;
- (void)viewDidLoad;
- (void)onSingleTap:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onOperate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSavedPhotosAlbum;
- (void)startDownloadImgWithFileKey:(id)arg1 url:(id)arg2 savePath:(id)arg3 aesKey:(id)arg4;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)animateTransition:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)displayImage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)cdnKey;
- (void)setCdnKey:(id)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (BOOL)oriNavhidden;
- (void)setOriNavhidden:(BOOL)arg1;
- (BOOL)oriStatusBarHidden;
- (void)setOriStatusBarHidden:(BOOL)arg1;
- (id)m_actionSheet;
- (void)setM_actionSheet:(id)arg1;
- (void).cxx_destruct;
@end

