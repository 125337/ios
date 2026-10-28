@interface QReportCrashUserScene : NSObject
{
    NSString * _scene_name; // +0x8
    NSString * _session_uuid; // +0x10
    NSString * _user_id; // +0x18
    NSString * _device_id; // +0x20
    NSString * _map_key; // +0x28
    NSString * _nav_key; // +0x30
    NSString * _map_version; // +0x38
    NSString * _nav_version; // +0x40
}
- (id)scene_name;
- (void)setScene_name:(id)arg1;
- (id)session_uuid;
- (void)setSession_uuid:(id)arg1;
- (id)user_id;
- (void)setUser_id:(id)arg1;
- (id)device_id;
- (void)setDevice_id:(id)arg1;
- (id)map_key;
- (void)setMap_key:(id)arg1;
- (id)nav_key;
- (void)setNav_key:(id)arg1;
- (id)map_version;
- (void)setMap_version:(id)arg1;
- (id)nav_version;
- (void)setNav_version:(id)arg1;
- (void).cxx_destruct;
@end
