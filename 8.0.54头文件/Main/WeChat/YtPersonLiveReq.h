@interface YtPersonLiveReq : JSONModel
{
    int _live_type; // +0x8
    NSString * _app_id; // +0x10
    NSString * _business_name; // +0x18
    NSString * _person_id; // +0x20
    YtPersonLive * _livedata; // +0x28
    NSString * _req_type; // +0x30
    NSString * _person_type; // +0x38
    NSString * _mp_business_buffer; // +0x40
    NSString * _request_id; // +0x48
    YtImageInfo * _extra_best_image; // +0x50
}
- (id)app_id;
- (void)setApp_id:(id)arg1;
- (id)business_name;
- (void)setBusiness_name:(id)arg1;
- (id)person_id;
- (void)setPerson_id:(id)arg1;
- (id)livedata;
- (void)setLivedata:(id)arg1;
- (int)live_type;
- (void)setLive_type:(int)arg1;
- (id)req_type;
- (void)setReq_type:(id)arg1;
- (id)person_type;
- (void)setPerson_type:(id)arg1;
- (id)mp_business_buffer;
- (void)setMp_business_buffer:(id)arg1;
- (id)request_id;
- (void)setRequest_id:(id)arg1;
- (id)extra_best_image;
- (void)setExtra_best_image:(id)arg1;
- (void).cxx_destruct;
@end

