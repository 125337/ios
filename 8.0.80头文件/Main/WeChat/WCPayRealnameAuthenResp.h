@interface WCPayRealnameAuthenResp : NSObject
{
    BOOL _is_need_bind; // +0x8
    BOOL _is_need_face; // +0x9
    BOOL _is_need_Laund; // +0xa
    unsigned int _scene; // +0xc
    NSString * _token; // +0x10
    NSString * _laundh5; // +0x18
    NSString * _error_detail_url; // +0x20
    NSString * _package; // +0x28
    NSString * _packagesign; // +0x30
    UnderAgeDialog * _under_age_dialog; // +0x38
    RealnameHalfPageDialog * _under_age_mid_dialog; // +0x40
    NSString * _under_age_session_id; // +0x48
    NSString * _underage_msg_preview; // +0x50
    NSString * _addbankword; // +0x58
}
- (id)token;
- (void)setToken:(id)arg1;
- (BOOL)is_need_bind;
- (void)setIs_need_bind:(BOOL)arg1;
- (BOOL)is_need_face;
- (void)setIs_need_face:(BOOL)arg1;
- (BOOL)is_need_Laund;
- (void)setIs_need_Laund:(BOOL)arg1;
- (id)laundh5;
- (void)setLaundh5:(id)arg1;
- (id)error_detail_url;
- (void)setError_detail_url:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (id)packagesign;
- (void)setPackagesign:(id)arg1;
- (id)under_age_dialog;
- (void)setUnder_age_dialog:(id)arg1;
- (id)under_age_mid_dialog;
- (void)setUnder_age_mid_dialog:(id)arg1;
- (id)under_age_session_id;
- (void)setUnder_age_session_id:(id)arg1;
- (id)underage_msg_preview;
- (void)setUnderage_msg_preview:(id)arg1;
- (id)addbankword;
- (void)setAddbankword:(id)arg1;
- (void).cxx_destruct;
@end
