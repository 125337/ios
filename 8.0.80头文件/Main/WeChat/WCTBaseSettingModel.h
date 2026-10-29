@interface WCTBaseSettingModel : NSObject
{
    BOOL _disableSelect; // +0x8
    NSString * _title; // +0x10
    id _userInfo; // +0x18
    long long _tag; // +0x20
    unsigned long long _accessibilityTraits; // +0x28
}
+ (id)createWithTitle:(id)arg1;
- (id)init;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)disableSelect;
- (void)setDisableSelect:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (long long)tag;
- (void)setTag:(long long)arg1;
- (unsigned long long)accessibilityTraits;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
