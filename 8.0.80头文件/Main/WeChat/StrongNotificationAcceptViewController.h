@interface StrongNotificationAcceptViewController : MMWindowViewController <IStrongNotificationMgrExt>
{
    UIImageView * m_logoView; // +0x80
    MMUILabel * m_titleView; // +0x88
    UILabel * m_contentView; // +0x90
    UIButton * m_iAcceptBtn; // +0x98
    UIButton * m_iCancelBtn; // +0xa0
    WeToast * toastVC; // +0xa8
    MMUIButton * m_iCloseBtn; // +0xb0
    UIView * m_backgroundView; // +0xb8
    NSString * m_strongNotificationContent; // +0xc0
    NSString * m_strongNotificationQRCode; // +0xc8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutView;
- (void)layoutBackgroundView;
- (void)layoutCloseButton;
- (void)layoutHeadView;
- (void)layoutICancelBtn;
- (void)layoutIAcceptBtn;
- (void)doIAccept;
- (void)onCancelBtnClicked:(id)arg1;
- (void)onAcceptWeAppStrongNotification:(id)arg1 resultFlag:(BOOL)arg2 errorMsg:(id)arg3;
- (id)m_strongNotificationContent;
- (void)setM_strongNotificationContent:(id)arg1;
- (id)m_strongNotificationQRCode;
- (void)setM_strongNotificationQRCode:(id)arg1;
- (void).cxx_destruct;
@end
