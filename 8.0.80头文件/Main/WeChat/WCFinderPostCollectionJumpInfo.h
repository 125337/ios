@interface WCFinderPostCollectionJumpInfo : NSObject
{
    int _jumpinfo_type; // +0x8
    int _business_type; // +0xc
    int _native_type; // +0x10
    int _show_position; // +0x14
    int _show_screen; // +0x18
    NSString * _icon_url; // +0x20
    NSString * _wording; // +0x28
    NSString * _native_necessary_params; // +0x30
}
- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (id)genJumpInfo;
- (int)jumpinfo_type;
- (void)setJumpinfo_type:(int)arg1;
- (int)business_type;
- (void)setBusiness_type:(int)arg1;
- (id)icon_url;
- (void)setIcon_url:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (int)native_type;
- (void)setNative_type:(int)arg1;
- (id)native_necessary_params;
- (void)setNative_necessary_params:(id)arg1;
- (int)show_position;
- (void)setShow_position:(int)arg1;
- (int)show_screen;
- (void)setShow_screen:(int)arg1;
- (void).cxx_destruct;
@end
