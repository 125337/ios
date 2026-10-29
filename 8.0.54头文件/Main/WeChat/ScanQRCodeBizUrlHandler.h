@interface ScanQRCodeBizUrlHandler : ScanQRCodeUrlPrefixHandler <WCBaseControlMgrExt, WCPayPayAuthNativeCgiDelegate, MMUseCaseCallback>
{
    unsigned int _m_sourceType; // +0x8
    NSString * _m_sourceInfo; // +0x10
    WCPayPayAuthNativeCgi * _m_payNativeCgi; // +0x18
}
- (void)dealloc;
- (void)reportCount;
- (void)handleUrl:(id)arg1;
- (void)call:(id)arg1;
- (id)matchingPrefix;
- (void)onWCPayPayAuthNativeCgiWithResp:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (char)QRCodeType;
- (unsigned int)m_sourceType;
- (void)setM_sourceType:(unsigned int)arg1;
- (id)m_sourceInfo;
- (void)setM_sourceInfo:(id)arg1;
- (id)m_payNativeCgi;
- (void)setM_payNativeCgi:(id)arg1;
- (void).cxx_destruct;
@end

