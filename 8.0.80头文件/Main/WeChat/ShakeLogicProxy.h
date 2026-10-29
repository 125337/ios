@interface ShakeLogicProxy : MMObject
{
    id <ShakeLogicProxyDelegate> m_delegate; // +0x8
    ShakeMusicLogicController * m_shakeMusicLogic; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (BOOL)shakeReport;
- (void)shakeStop;
- (void)shakeReset;
- (void)shakeTerminate;
- (BOOL)isShowBannerView;
- (id)getMsgForState:(unsigned int)arg1;
- (void).cxx_destruct;
@end
