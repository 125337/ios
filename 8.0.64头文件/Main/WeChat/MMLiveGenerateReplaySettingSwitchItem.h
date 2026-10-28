@interface MMLiveGenerateReplaySettingSwitchItem : NSObject
{
    BOOL _isMainSwitch; // +0x8
    BOOL _isEnabled; // +0x9
    NSString * _titleText; // +0x10
    NSString * _descText; // +0x18
}
- (BOOL)isMainSwitch;
- (void)setIsMainSwitch:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (void).cxx_destruct;
@end
