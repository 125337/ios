@interface YtGetLiveTypeReq : JSONModel
{
    int _platform; // +0x8
    NSString * _app_id; // +0x10
    NSString * _business_id; // +0x18
    NSString * _person_id; // +0x20
    NSString * _session_id; // +0x28
    NSDictionary * _select_data; // +0x30
}
- (id)app_id;
- (void)setApp_id:(id)arg1;
- (id)business_id;
- (void)setBusiness_id:(id)arg1;
- (id)person_id;
- (void)setPerson_id:(id)arg1;
- (id)session_id;
- (void)setSession_id:(id)arg1;
- (int)platform;
- (void)setPlatform:(int)arg1;
- (id)select_data;
- (void)setSelect_data:(id)arg1;
- (void).cxx_destruct;
@end

