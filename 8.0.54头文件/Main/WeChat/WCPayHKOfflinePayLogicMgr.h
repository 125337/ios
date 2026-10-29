@interface WCPayHKOfflinePayLogicMgr : MMUserService <MMWebPageSheetDelegate, MMServiceProtocol>
{
    TenpayHKCertUtil * _hkCertUtil; // +0x8
    NSString * _mmkvID; // +0x10
    MMPageSheetAdapter * _webPageAdapter; // +0x18
    MMVoidBoolCallback * _webPageSheetCallback; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reloadOfflineCertObj;
- (id)hkCertUtil;
- (id)mmkvID;
- (id)getDeviceId;
- (BOOL)setDeviceId:(id)arg1;
- (id)getCertId;
- (BOOL)setCertId:(id)arg1;
- (void)removeCertId;
- (BOOL)isCertExists:(id)arg1;
- (id)getLastSelectedCardBindSerial;
- (void)setLastSelectedCardBindSerial:(id)arg1;
- (id)getLastSelectedCVItemId;
- (void)setLastSelectedCVItemId:(id)arg1;
- (void)setOfflinePayAckKey:(id)arg1;
- (id)getOfflinePayAckKey;
- (id)getCftCertSign:(id)arg1 message:(id)arg2;
- (BOOL)deleteCftCert:(id)arg1;
- (id)getCftCSR:(id)arg1;
- (BOOL)importCftCert:(id)arg1 crt:(id)arg2;
- (id)decryptByCftCert:(id)arg1 encstr:(id)arg2;
- (id)genAlgoToken:(id)arg1 type:(int)arg2 uid:(int)arg3 seed:(id)arg4 seedTime:(long long)arg5 currentTime:(long long)arg6 baseStep:(long long)arg7 timeStepSize:(int)arg8;
- (id)encryptByAes:(id)arg1 key:(id)arg2 iv:(id)arg3;
- (id)decryptByAes:(id)arg1 key:(id)arg2 iv:(id)arg3;
- (id)sha256Hex:(id)arg1;
- (void)openHalfPageWebViewImpl:(id)arg1 callback:(id)arg2;
- (void)webPageSheetWillDismiss:(id)arg1;
- (void)openScanQrCodeView;
- (void)openHKFacingReceiveView;
- (void)setHkCertUtil:(id)arg1;
- (void)setMmkvID:(id)arg1;
- (id)webPageAdapter;
- (void)setWebPageAdapter:(id)arg1;
- (id)webPageSheetCallback;
- (void)setWebPageSheetCallback:(id)arg1;
- (void).cxx_destruct;
@end

