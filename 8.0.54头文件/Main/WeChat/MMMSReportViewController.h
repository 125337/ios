@interface MMMSReportViewController : MMMSBaseViewController <MemoryStatManagerExt>
{
    UIButton * m_uploadButton; // +0x10
    UIButton * m_nextButton; // +0x18
    MMLoadingView * m_loadingViewX; // +0x20
}
- (void)viewDidLoad;
- (void)layoutViews;
- (void)layoutUploadButtonAndTips:(int *)arg1;
- (void)layoutNextButton:(int *)arg1;
- (void)startLoadingBlocked;
- (void)startLoadingBlockedWithText:(id)arg1;
- (void)stopLoading;
- (void)onUploadButtonClicked:(id)arg1;
- (void)onNextButtonClicked:(id)arg1;
- (void)onMemoryRecordUploadCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end

