@interface PaySecurityResp : NSObject
{
    int _cert_encrypt_type; // +0x8
    NSString * _wx_security_title; // +0x10
    NSString * _more_security_title; // +0x18
    BasicSecurityInfo * _basic_security_item; // +0x20
    WCPayDigitalCertPayManageResp * _cert_info; // +0x28
    WalletLockInfo * _wallet_lock_info; // +0x30
    PropertySecurityInfo * _property_security_info; // +0x38
    PaySecurityDialogInfo * _dialog_info; // +0x40
    WCPayBalancePrivacyInfo * _balance_privacy_info; // +0x48
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)wx_security_title;
- (void)setWx_security_title:(id)arg1;
- (id)more_security_title;
- (void)setMore_security_title:(id)arg1;
- (id)basic_security_item;
- (void)setBasic_security_item:(id)arg1;
- (id)cert_info;
- (void)setCert_info:(id)arg1;
- (id)wallet_lock_info;
- (void)setWallet_lock_info:(id)arg1;
- (id)property_security_info;
- (void)setProperty_security_info:(id)arg1;
- (id)dialog_info;
- (void)setDialog_info:(id)arg1;
- (id)balance_privacy_info;
- (void)setBalance_privacy_info:(id)arg1;
- (int)cert_encrypt_type;
- (void)setCert_encrypt_type:(int)arg1;
- (void).cxx_destruct;
@end

