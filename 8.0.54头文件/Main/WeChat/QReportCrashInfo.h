@interface QReportCrashInfo : NSObject
{
    int _source; // +0x8
    int _crash_category; // +0xc
    int _crash_type; // +0x10
    NSString * _package_name; // +0x18
    NSString * _process; // +0x20
    NSString * _thread; // +0x28
    NSString * _message; // +0x30
    NSString * _crash_address; // +0x38
    NSException * _stack_trace; // +0x40
    NSString * _extra_message; // +0x48
    NSString * _crash_sub_type; // +0x50
    NSString * _module_name; // +0x58
    NSString * _scene; // +0x60
    long long _duration; // +0x68
    long long _crash_time; // +0x70
    NSString * _crash_uuid; // +0x78
    NSString * _user_id; // +0x80
    NSString * _device_id; // +0x88
    NSString * _map_key; // +0x90
    NSString * _nav_key; // +0x98
    NSString * _map_version; // +0xa0
    NSString * _nav_version; // +0xa8
    NSString * _ext; // +0xb0
    NSString * _session_uuid; // +0xb8
    NSString * _os_version; // +0xc0
}
- (int)source;
- (void)setSource:(int)arg1;
- (id)package_name;
- (void)setPackage_name:(id)arg1;
- (id)process;
- (void)setProcess:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)crash_address;
- (void)setCrash_address:(id)arg1;
- (id)stack_trace;
- (void)setStack_trace:(id)arg1;
- (id)extra_message;
- (void)setExtra_message:(id)arg1;
- (int)crash_category;
- (void)setCrash_category:(int)arg1;
- (int)crash_type;
- (void)setCrash_type:(int)arg1;
- (id)crash_sub_type;
- (void)setCrash_sub_type:(id)arg1;
- (id)module_name;
- (void)setModule_name:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (long long)crash_time;
- (void)setCrash_time:(long long)arg1;
- (id)crash_uuid;
- (void)setCrash_uuid:(id)arg1;
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
- (id)ext;
- (void)setExt:(id)arg1;
- (id)session_uuid;
- (void)setSession_uuid:(id)arg1;
- (id)os_version;
- (void)setOs_version:(id)arg1;
- (void).cxx_destruct;
@end

