@interface WCPayOfflinePayTsmLogicMgr : MMUserService <MMServiceProtocol>
{
    WxSmCertUtil * _smCertUtil; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reloadOfflineTsmCertObj;
- (id)smCertUtil;
- (BOOL)isOfflinePayCertExists:(id)arg1;
- (id)getTokenPrefix;
- (id)getTsmCertSign:(id)arg1 message:(id)arg2;
- (id)getTsmToken:(id)arg1;
- (void)cleanTsmToken:(id)arg1;
- (BOOL)deleteTsmCert:(id)arg1;
- (int)getRemainTsmTokenCount:(id)arg1;
- (BOOL)setTsmTokenCode:(id)arg1 certId:(id)arg2;
- (id)getTsmCSR:(id)arg1;
- (BOOL)importTsmCert:(id)arg1 crt:(id)arg2;
- (id)decryptByTsmCert:(id)arg1 message:(id)arg2;
- (id)getTsmCertCAVersion;
- (void)updateTsmCertWithCAVersion:(id)arg1 rootCaChains:(id)arg2;
- (id)getTsmSignUserId;
- (void)setSmCertUtil:(id)arg1;
- (void).cxx_destruct;
@end
