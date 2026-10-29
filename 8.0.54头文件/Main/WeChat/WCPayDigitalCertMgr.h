@interface WCPayDigitalCertMgr : MMUserService <MMServiceProtocol>
{
    NSString * _m_digitalCertNo; // +0x8
    DigitalCertLocalConfig * _digitalCertLocalConfig; // +0x10
}
- (void)dealloc;
- (void)onServiceInit;
- (int)getError;
- (id)getDigitalCertNo;
- (id)updateCurrentDeviceCertNoWithInfo:(id)arg1;
- (void)updateWithTenPayResponseDic:(id)arg1;
- (void)clearDigitalCert;
- (void)delCurrentDigitalCert;
- (void)clearDigitalCertLocalConfig;
- (int)currentType;
- (void)loadDigitalCertFromDisk;
- (void)updateDigitalLocalCertConfig:(id)arg1 cert:(id)arg2 encryptType:(int)arg3;
- (id)makeCsr:(id)arg1 commonName:(id)arg2 encryptType:(int)arg3 csrType:(int)arg4;
- (BOOL)importCert:(id)arg1 certId:(id)arg2 encryptType:(int)arg3;
- (id)certSign:(id)arg1 message:(id)arg2;
- (id)getUserIdData;
- (id)certDecrypt:(id)arg1 cipher:(id)arg2;
- (void)delCert:(id)arg1;
- (BOOL)hasCert:(id)arg1;
- (id)m_digitalCertNo;
- (void)setM_digitalCertNo:(id)arg1;
- (id)digitalCertLocalConfig;
- (void)setDigitalCertLocalConfig:(id)arg1;
- (void).cxx_destruct;
@end

