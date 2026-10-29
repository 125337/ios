@interface WCPayRealnameAuthenReq : NSObject
{
    NSString * _true_name; // +0x8
    NSString * _cre_type; // +0x10
    NSString * _cre_name; // +0x18
    NSString * _identify_card; // +0x20
    NSString * _identify_card_origin; // +0x28
    NSString * _user_country; // +0x30
    NSString * _user_province; // +0x38
    NSString * _user_city; // +0x40
    NSString * _profession_name; // +0x48
    NSString * _profession_type; // +0x50
    NSString * _birth_date; // +0x58
    WCPaySelectDateItemData * _birth_date_origin; // +0x60
    NSString * _cre_expire_date; // +0x68
    WCPaySelectDateItemData * _cre_expire_date_origin; // +0x70
    NSString * _creid_renewal; // +0x78
    long long _creid_renewal_origin; // +0x80
    NSString * _nationality; // +0x88
    NSString * _countryCode; // +0x90
    NSString * _session_id; // +0x98
    NSString * _detail_address; // +0xa0
    NSString * _cre_effect_date; // +0xa8
    NSString * _cre_expire_date_plain; // +0xb0
    NSString * _sex; // +0xb8
    NSString * _is_close_marketing; // +0xc0
    NSString * _address; // +0xc8
    WCPaySelectDateItemData * _cre_effect_date_origin; // +0xd0
    NSString * _phone_no; // +0xd8
    NSString * _phone_no_origin; // +0xe0
    NSString * _encrypt_cre_effect_date; // +0xe8
    NSString * _cre_begin_date; // +0xf0
}
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)true_name;
- (void)setTrue_name:(id)arg1;
- (id)cre_type;
- (void)setCre_type:(id)arg1;
- (id)cre_name;
- (void)setCre_name:(id)arg1;
- (id)identify_card;
- (void)setIdentify_card:(id)arg1;
- (id)identify_card_origin;
- (void)setIdentify_card_origin:(id)arg1;
- (id)user_country;
- (void)setUser_country:(id)arg1;
- (id)user_province;
- (void)setUser_province:(id)arg1;
- (id)user_city;
- (void)setUser_city:(id)arg1;
- (id)profession_name;
- (void)setProfession_name:(id)arg1;
- (id)profession_type;
- (void)setProfession_type:(id)arg1;
- (id)birth_date;
- (void)setBirth_date:(id)arg1;
- (id)birth_date_origin;
- (void)setBirth_date_origin:(id)arg1;
- (id)cre_expire_date;
- (void)setCre_expire_date:(id)arg1;
- (id)cre_expire_date_origin;
- (void)setCre_expire_date_origin:(id)arg1;
- (id)creid_renewal;
- (void)setCreid_renewal:(id)arg1;
- (long long)creid_renewal_origin;
- (void)setCreid_renewal_origin:(long long)arg1;
- (id)nationality;
- (void)setNationality:(id)arg1;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (id)session_id;
- (void)setSession_id:(id)arg1;
- (id)detail_address;
- (void)setDetail_address:(id)arg1;
- (id)cre_effect_date;
- (void)setCre_effect_date:(id)arg1;
- (id)cre_expire_date_plain;
- (void)setCre_expire_date_plain:(id)arg1;
- (id)sex;
- (void)setSex:(id)arg1;
- (id)is_close_marketing;
- (void)setIs_close_marketing:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)cre_effect_date_origin;
- (void)setCre_effect_date_origin:(id)arg1;
- (id)phone_no;
- (void)setPhone_no:(id)arg1;
- (id)phone_no_origin;
- (void)setPhone_no_origin:(id)arg1;
- (id)encrypt_cre_effect_date;
- (void)setEncrypt_cre_effect_date:(id)arg1;
- (id)cre_begin_date;
- (void)setCre_begin_date:(id)arg1;
- (void).cxx_destruct;
@end

