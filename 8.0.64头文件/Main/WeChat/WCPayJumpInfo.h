@interface WCPayJumpInfo : NSObject
{
    unsigned int _type; // +0x8
    NSString * _url; // +0x10
    NSString * _username; // +0x18
    NSString * _appid; // +0x20
    NSString * _pagepath; // +0x28
    NSString * _query; // +0x30
    NSString * _minVersion; // +0x38
}
+ (id)genFromUnion:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)pagepath;
- (void)setPagepath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (void).cxx_destruct;
@end
