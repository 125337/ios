@interface MMFinderLiveCommentAssistantManageViewController : MMUILandscapeSheetViewController
{
    MMFinderLiveTaskId * _taskId; // +0x70
    MMFinderLiveCommentAssitantManageView * _manageView; // +0x78
    MMFinderLiveCommentAssitantManageViewModel * _manageViewModel; // +0x80
    WCLiveBlurButton * _closeButton; // +0x88
}
+ (void)presentCommentAssitantManageVCFromVC:(id)arg1 taskId:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (id)closeButton;
- (void)onCloseButtonClicked;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)manageView;
- (void)setManageView:(id)arg1;
- (id)manageViewModel;
- (void)setManageViewModel:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end
