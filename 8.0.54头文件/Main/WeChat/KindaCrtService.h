@interface KindaCrtService : NSObject <WCPayGenDigitalCertCgiDelegate, WCPayDeleteDigitalCertCgiDelegate, MMKCrtService>
{
    WCPayGenDigitalCertCgi * _m_genDigitalCertCgi; // +0x8
    MMVoidCallback * _m_successCallback; // +0x10
    MMVoidStringCallback * _m_failCallback; // +0x18
    WCPayDeleteDigitalCertCgi * _m_deleteCertCgi; // +0x20
    MMVoidCallback * _m_deleteSuccessCallback; // +0x28
    MMVoidStringCallback * _m_deleteFailCallBack; // +0x30
}
- (id)updateCurrentDeviceCertNoWithInfo:(id)arg1;
- (BOOL)hasCrt;
- (BOOL)isCrtExist:(id)arg1;
- (id)getCrtNo;
- (id)sign:(id)arg1 data:(id)arg2;
- (void)startGenDigitalCrtImpl:(id)arg1 successCallback:(id)arg2 failCallback:(id)arg3;
- (void)startDeleteDigitalCrtImpl:(id)arg1 successCallback:(id)arg2 failCallback:(id)arg3;
- (void)delCert;
- (void)sendDeleteCertCgi:(id)arg1;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)arg1;
- (void)onWCPayDeleteDigitalCertCgiWithResp:(id)arg1;
- (void)reportSignError:(int)arg1;
- (id)m_genDigitalCertCgi;
- (void)setM_genDigitalCertCgi:(id)arg1;
- (id)m_successCallback;
- (void)setM_successCallback:(id)arg1;
- (id)m_failCallback;
- (void)setM_failCallback:(id)arg1;
- (id)m_deleteCertCgi;
- (void)setM_deleteCertCgi:(id)arg1;
- (id)m_deleteSuccessCallback;
- (void)setM_deleteSuccessCallback:(id)arg1;
- (id)m_deleteFailCallBack;
- (void)setM_deleteFailCallBack:(id)arg1;
- (void).cxx_destruct;
@end

