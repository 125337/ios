@interface WXGMigrationServerEntryViewController : MMWindowViewController <IChatMigrationServerExt, CNetworkStatusExt>
{
    UIView * m_backgroundView; // +0x78
    UIButton * m_leftTopCornerButton; // +0x80
    UIImageView * m_iconImageView; // +0x88
    MMUIActivityIndicatorView * m_QRCLoadingView; // +0x90
    MMUILabel * m_tipsLabel; // +0x98
    MMUILabel * m_smallTipsLabel; // +0xa0
    UIButton * m_greenButton; // +0xa8
    unsigned long long m_notifyCode; // +0xb0
    unsigned long long m_childNotifyCode; // +0xb8
    WXGDotDotDotLabel * m_dotDotDotLabel; // +0xc0
    unsigned long long m_currentSessionCount; // +0xc8
    unsigned long long m_totalSessionCount; // +0xd0
    NSString * m_speedString; // +0xd8
    int m_retryGetQRCodeTimes; // +0xe0
    id <WXGMigrationServerEntryViewControllerDelegate> _delegate; // +0xe8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)p_setupView;
- (void)p_addBlurEffectForView;
- (void)p_addLeftCornerButton;
- (void)p_addIconImageView;
- (void)p_resetIconImageViewWithImage:(id)arg1;
- (void)p_addTipsLabel;
- (void)p_addSmallTipsLabel;
- (void)p_addGreenButton;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onMigrationServerTransferSpeed:(float)arg1;
- (void)onMigrationServerGetQRCodeImg:(id)arg1;
- (void)onMinimizeView;
- (void)onCloseView;
- (void)onAlertCancelTimeSelect;
- (void)onAlertCancelQuickMigration;
- (void)onAlertCancelQuickMigrationAndTimeSelect;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)p_refreshQRCode;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

