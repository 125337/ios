@interface WCPaySendBindCardAwardCgiRequest : NSObject
{
    unsigned int _send_record_id; // +0x8
    unsigned int _user_record_id; // +0xc
    unsigned int _bindbankscene; // +0x10
    unsigned int _realname_scene; // +0x14
    unsigned long long _activity_id; // +0x18
    unsigned long long _activity_type; // +0x20
    unsigned long long _award_id; // +0x28
    unsigned long long _activity_mch_id; // +0x30
    NSString * _bank_type; // +0x38
    NSString * _bank_serial; // +0x40
}
- (id)queryDictionary;
- (unsigned long long)activity_id;
- (void)setActivity_id:(unsigned long long)arg1;
- (unsigned long long)activity_type;
- (void)setActivity_type:(unsigned long long)arg1;
- (unsigned long long)award_id;
- (void)setAward_id:(unsigned long long)arg1;
- (unsigned int)send_record_id;
- (void)setSend_record_id:(unsigned int)arg1;
- (unsigned int)user_record_id;
- (void)setUser_record_id:(unsigned int)arg1;
- (unsigned long long)activity_mch_id;
- (void)setActivity_mch_id:(unsigned long long)arg1;
- (id)bank_type;
- (void)setBank_type:(id)arg1;
- (id)bank_serial;
- (void)setBank_serial:(id)arg1;
- (unsigned int)bindbankscene;
- (void)setBindbankscene:(unsigned int)arg1;
- (unsigned int)realname_scene;
- (void)setRealname_scene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

