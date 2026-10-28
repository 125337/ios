@interface WCFinderBuildLiteAppConfig : NSObject
{
    BOOL _is_transparent; // +0x8
    BOOL _is_forbid_rightgesture; // +0x9
    NSString * _app_id; // +0x10
    NSString * _path; // +0x18
    NSString * _query; // +0x20
    NSString * _default_url; // +0x28
    double _height_percent; // +0x30
    double _half_height; // +0x38
    long long _open_type; // +0x40
    NSData * _extraData; // +0x48
    NSString * _mini_version; // +0x50
    long long _position; // +0x58
}
- (id)toJsonStr;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (id)description;
- (id)app_id;
- (void)setApp_id:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)default_url;
- (void)setDefault_url:(id)arg1;
- (double)height_percent;
- (void)setHeight_percent:(double)arg1;
- (double)half_height;
- (void)setHalf_height:(double)arg1;
- (long long)open_type;
- (void)setOpen_type:(long long)arg1;
- (BOOL)is_transparent;
- (void)setIs_transparent:(BOOL)arg1;
- (BOOL)is_forbid_rightgesture;
- (void)setIs_forbid_rightgesture:(BOOL)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)mini_version;
- (void)setMini_version:(id)arg1;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (void).cxx_destruct;
@end
