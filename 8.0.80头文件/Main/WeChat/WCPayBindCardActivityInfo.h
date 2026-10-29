@interface WCPayBindCardActivityInfo : NSObject
{
    unsigned int _send_record_id; // +0x8
    unsigned int _user_record_id; // +0xc
    unsigned long long _activity_id; // +0x10
    unsigned long long _activity_type; // +0x18
    unsigned long long _award_id; // +0x20
    unsigned long long _activity_mch_id; // +0x28
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
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
@end
