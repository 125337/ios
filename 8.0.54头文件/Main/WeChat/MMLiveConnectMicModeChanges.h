@interface MMLiveConnectMicModeChanges : NSObject
{
    BOOL _wasPaidMic; // +0x8
    BOOL _isPaidMic; // +0x9
    BOOL _wasConnectMic; // +0xa
    BOOL _isConnectMic; // +0xb
    BOOL _wasMicTalking; // +0xc
    BOOL _isMicTalking; // +0xd
    MicSetting_PurchaseMicSetting * _paidMicSettingOld; // +0x10
    MicSetting_PurchaseMicSetting * _paidMicSettingNew; // +0x18
}
- (BOOL)micModeChanged;
- (BOOL)wasPaidMic;
- (void)setWasPaidMic:(BOOL)arg1;
- (BOOL)isPaidMic;
- (void)setIsPaidMic:(BOOL)arg1;
- (BOOL)wasConnectMic;
- (void)setWasConnectMic:(BOOL)arg1;
- (BOOL)isConnectMic;
- (void)setIsConnectMic:(BOOL)arg1;
- (BOOL)wasMicTalking;
- (void)setWasMicTalking:(BOOL)arg1;
- (BOOL)isMicTalking;
- (void)setIsMicTalking:(BOOL)arg1;
- (id)paidMicSettingOld;
- (void)setPaidMicSettingOld:(id)arg1;
- (id)paidMicSettingNew;
- (void)setPaidMicSettingNew:(id)arg1;
- (void).cxx_destruct;
@end

