@interface StrongNotificationScanLogic : MMObject <PBMessageObserverDelegate>
{
    MMUIViewController * m_sourceViewController; // +0x8
}
- (BOOL)scanWeAppStrongNotificationWithQrcode:(id)arg1;
- (void)OnScanWeAppStrongNotificationResp:(id)arg1;
- (void)goToStrongNotificationAcceptViewControllerWithStrongNotificationContent:(id)arg1 qrCode:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_sourceViewController;
- (void)setM_sourceViewController:(id)arg1;
- (void).cxx_destruct;
@end

