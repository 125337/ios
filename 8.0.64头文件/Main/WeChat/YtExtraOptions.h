@interface YtExtraOptions : NSObject
{
    NSString * _bussiness_id; // +0x8
    NSString * _person_id; // +0x10
    NSString * _person_type; // +0x18
    NSString * _req_type; // +0x20
    NSString * _mp_business_buffer; // +0x28
}
- (id)bussiness_id;
- (void)setBussiness_id:(id)arg1;
- (id)person_id;
- (void)setPerson_id:(id)arg1;
- (id)person_type;
- (void)setPerson_type:(id)arg1;
- (id)req_type;
- (void)setReq_type:(id)arg1;
- (id)mp_business_buffer;
- (void)setMp_business_buffer:(id)arg1;
- (void).cxx_destruct;
@end
