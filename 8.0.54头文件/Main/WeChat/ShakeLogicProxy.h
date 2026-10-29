@interface ShakeLogicProxy : MMObject <ShakeMgrExt>
{
    long long m_logicType; // +0x8
    id <ShakeLogicProxyDelegate> m_delegate; // +0x10
    ShakePeopleLogicController * m_shakePeopleLogic; // +0x18
    ShakeMusicLogicController * m_shakeMusicLogic; // +0x20
}
- (long long)GetLogicTypeFromStatus;
- (void)onShakePeopleStorageChanged;
- (void)onShakeStatusChanged;
- (void)onShakePageStorageChanged;
- (void)OnShakeShareCountChanged;
- (void)onShakeMusicStorageChanged;
- (id)initWithDelegate:(id)arg1;
- (long long)getShakeLogicType;
- (BOOL)shakeReport;
- (void)shakeStop;
- (void)shakeReset;
- (void)shakeTerminate;
- (BOOL)isShowBannerView;
- (id)getMsgForState:(unsigned int)arg1;
- (void)updateShakeLocation;
- (void)SetShakeList:(id)arg1 andScene:(unsigned int)arg2;
- (void).cxx_destruct;
@end

