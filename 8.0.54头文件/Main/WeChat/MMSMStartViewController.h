@interface MMSMStartViewController : MMSMBaseViewController <MMSafeModeMgrExt>
{
    UIImageView * m_logoView; // +0x20
}
- (id)init;
- (void)startupFirstRun;
- (void)layoutViews;
- (void)onNextButtonClicked:(id)arg1;
- (void)onReportAndUpdateConfigFinished;
- (void).cxx_destruct;
@end

