@interface WCPayDigitalCertPayManageResp : NSObject
{
    int _m_showCrtInfo; // +0x8
    int _m_isCrtInstall; // +0xc
    int _cert_encrypt_type; // +0x10
    NSMutableArray * _m_crtList; // +0x18
    NSString * _crt_entry_title; // +0x20
    NSString * _crt_entry_desc; // +0x28
    NSString * _crt_status_name; // +0x30
    NSString * _crt_item_logo_url; // +0x38
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (int)m_showCrtInfo;
- (void)setM_showCrtInfo:(int)arg1;
- (int)m_isCrtInstall;
- (void)setM_isCrtInstall:(int)arg1;
- (id)m_crtList;
- (void)setM_crtList:(id)arg1;
- (id)crt_entry_title;
- (void)setCrt_entry_title:(id)arg1;
- (id)crt_entry_desc;
- (void)setCrt_entry_desc:(id)arg1;
- (id)crt_status_name;
- (void)setCrt_status_name:(id)arg1;
- (id)crt_item_logo_url;
- (void)setCrt_item_logo_url:(id)arg1;
- (int)cert_encrypt_type;
- (void)setCert_encrypt_type:(int)arg1;
- (void).cxx_destruct;
@end

