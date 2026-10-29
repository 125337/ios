@interface MMSMUploadFileViewController : MMSMBaseViewController <MMSafeModeMgrExt>
{
    int m_percent; // +0x20
    UIProgressView * m_progressView; // +0x28
}
- (id)init;
- (void)viewDidLoad;
- (void)layoutViewsBeforeUpload;
- (void)layoutViewsForUploading;
- (void)layoutViewsAfterUploading;
- (void)setProgress:(unsigned int)arg1;
- (void)updateProgress:(unsigned int)arg1;
- (void)onUploadButtonClicked:(id)arg1;
- (void)onNextButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onUploadFilesProgress:(double)arg1;
- (void)onUploadFilesFinished;
- (void)onUploadFilesFail;
- (void)onFinishButtonClicked:(id)arg1;
- (void).cxx_destruct;
@end
