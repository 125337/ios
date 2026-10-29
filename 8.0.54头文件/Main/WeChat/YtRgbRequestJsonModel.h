@interface YtRgbRequestJsonModel : JSONModel
{
    int _platform; // +0x8
    NSString * _app_id; // +0x10
    NSString * _session_id; // +0x18
    NSString * _machine; // +0x20
    NSString * _systemName; // +0x28
    NSString * _systemVersion; // +0x30
}
- (id)app_id;
- (void)setApp_id:(id)arg1;
- (int)platform;
- (void)setPlatform:(int)arg1;
- (id)session_id;
- (void)setSession_id:(id)arg1;
- (id)machine;
- (void)setMachine:(id)arg1;
- (id)systemName;
- (void)setSystemName:(id)arg1;
- (id)systemVersion;
- (void)setSystemVersion:(id)arg1;
- (void).cxx_destruct;
@end

