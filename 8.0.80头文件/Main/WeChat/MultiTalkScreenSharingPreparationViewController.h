@interface MultiTalkScreenSharingPreparationViewController : MultiTalkScreenSharingBaseViewController <MultiTalkMgrExt>
{
    BOOL _startButtonClicked; // +0x70
    id <MultiTalkScreenSharingPreparationViewControllerDelegate> _delegate; // +0x78
    UIButton * _startButton; // +0x80
    NSString * _fileValidationPath; // +0x88
    long long _fileValidationStatus; // +0x90
}
- (id)init;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadStartButton;
- (void)startButtonClicked:(id)arg1;
- (void)didFinishFileValidation;
- (void)didStartPresentation;
- (void)didFailToStartPresentation;
- (void)didSetTargetViewController:(id)arg1;
- (void)validateFileIfNeeded;
- (void)fileValidationDidTimeOut;
- (void)onMultiTalkScreenSharingStartValidatingFileWithPath:(id)arg1;
- (void)onMultiTalkScreenSharingFinishValidatingFileWithPath:(id)arg1 ret:(int)arg2 fileStatus:(int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)startButton;
- (void)setStartButton:(id)arg1;
- (BOOL)startButtonClicked;
- (void)setStartButtonClicked:(BOOL)arg1;
- (id)fileValidationPath;
- (void)setFileValidationPath:(id)arg1;
- (long long)fileValidationStatus;
- (void)setFileValidationStatus:(long long)arg1;
- (void).cxx_destruct;
@end
