@interface MMSMClearDataViewController : MMSMBaseViewController <MMSafeModeMgrExt>
{
    int m_percent; // +0x20
    UIProgressView * m_progressView; // +0x28
}
- (id)init;
- (void)viewDidLoad;
- (void)layoutViewsBeforeClear;
- (void)layoutViewsForClearing;
- (void)layoutViewsAfterClear;
- (void)onClearButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onExitButtonClicked:(id)arg1;
- (void)startFakeLoadingToProgress:(int)arg1;
- (void)updateProgress:(unsigned int)arg1;
- (void)onClearUnnecessaryFilesFinished;
- (void).cxx_destruct;
@end
