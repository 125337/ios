@interface WCFinderPostWeComAttachConfig : NSObject
{
    unsigned int _position; // +0x8
    unsigned int _native_type; // +0xc
    NSString * _icon_url; // +0x10
    NSString * _wording; // +0x18
    long long _business_type; // +0x20
    long long _jump_type; // +0x28
    long long _screen_type; // +0x30
    NSString * _native_necessaryParams; // +0x38
    NSString * _ext_info; // +0x40
}
- (id)toJsonStr;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (id)description;
- (id)genWeComJumpInfo;
- (id)icon_url;
- (void)setIcon_url:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (unsigned int)position;
- (void)setPosition:(unsigned int)arg1;
- (long long)business_type;
- (void)setBusiness_type:(long long)arg1;
- (long long)jump_type;
- (void)setJump_type:(long long)arg1;
- (long long)screen_type;
- (void)setScreen_type:(long long)arg1;
- (unsigned int)native_type;
- (void)setNative_type:(unsigned int)arg1;
- (id)native_necessaryParams;
- (void)setNative_necessaryParams:(id)arg1;
- (id)ext_info;
- (void)setExt_info:(id)arg1;
- (void).cxx_destruct;
@end
