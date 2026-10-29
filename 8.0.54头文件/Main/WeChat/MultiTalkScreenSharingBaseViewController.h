@interface MultiTalkScreenSharingBaseViewController : MMUIViewController
{
    BOOL _showsCancelBarButtonItem; // +0x68
    BOOL _showsOrientationLockedToast; // +0x69
    UIViewController * _targetViewController; // +0x70
    UIView * _contentView; // +0x78
    UIView * _contentMaskView; // +0x80
    WCFileBrowseInfo * _fileBrowseInfo; // +0x88
    NSURL * _fileURL; // +0x90
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setTargetViewController:(id)arg1;
- (void)didSetTargetViewController:(id)arg1;
- (void)addTargetViewIfNeeded;
- (void)removeTargetViewIfNeeded;
- (void)setShowsCancelBarButtonItem:(BOOL)arg1;
- (void)cancelBarButtonItemDidClick:(id)arg1;
- (void)startOrientationDetection;
- (void)endOrientationDetection;
- (void)showOrientationLockedToast;
- (void)rotationDetectorRoationDidChange:(id)arg1;
- (id)targetViewController;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)contentMaskView;
- (void)setContentMaskView:(id)arg1;
- (id)fileBrowseInfo;
- (void)setFileBrowseInfo:(id)arg1;
- (id)fileURL;
- (void)setFileURL:(id)arg1;
- (BOOL)showsCancelBarButtonItem;
- (BOOL)showsOrientationLockedToast;
- (void)setShowsOrientationLockedToast:(BOOL)arg1;
- (void).cxx_destruct;
@end

