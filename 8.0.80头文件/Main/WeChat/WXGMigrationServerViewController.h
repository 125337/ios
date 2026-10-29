@interface WXGMigrationServerViewController : MMUIViewController <IChatMigrationServerExt, CNetworkStatusExt, IChatLogDataMgrExt>
{
    UIImageView * m_qrCodeImageView; // +0x70
    UILabel * m_qrCodeTipLabel; // +0x78
    MMUIActivityIndicatorView * m_qrCodeLoadingView; // +0x80
    UIImage * m_qrcodeImage; // +0x88
    int m_retryGetQRCodeTimes; // +0x90
    BOOL _isMigrationAllAndNeedWaitLoad; // +0x94
    BOOL _isSessionDataLoadFinish; // +0x95
    MMUIActivityIndicatorView * _dataLoadingIndicator; // +0x98
    MMUILabel * _descriptionLabel; // +0xa0
    MMUILabel * _loadingLabel; // +0xa8
}
- (void)viewDidLoad;
- (void)refreshView;
- (void)registerLoadSessionExtension;
- (void)onPressLeftNavigationButton;
- (void)p_makeQRCodeState;
- (void)p_makeQRCodeLoadingState;
- (void)p_makeQRCodeImageFinishState:(id)arg1 withText:(id)arg2;
- (void)p_makeQRCodeImageFailureFinishState;
- (void)p_setQRCodeTipLabelWithText:(id)arg1;
- (void)loadSessionArrayFinishAndShowQRCode;
- (void)p_makeLoadingDataState;
- (void)p_removeLoadingDataState;
- (void)resetLoadingTip:(id)arg1;
- (void)onChatLogDataLoadFinished;
- (void)onLoadingCurrentSession:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)onMigrationServerGetQRCodeImg:(id)arg1;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationServerCloseEntryView;
- (void)ReachabilityChange:(unsigned int)arg1;
- (BOOL)isMigrationAllAndNeedWaitLoad;
- (void)setIsMigrationAllAndNeedWaitLoad:(BOOL)arg1;
- (BOOL)isSessionDataLoadFinish;
- (void)setIsSessionDataLoadFinish:(BOOL)arg1;
- (id)dataLoadingIndicator;
- (void)setDataLoadingIndicator:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (void).cxx_destruct;
@end
