@interface DeviceProfileButton : MMObject <PBCoding>
{
    NSString * _uiTitle; // +0x8
    NSString * _nsUrl; // +0x10
    NSString * _uiIcon; // +0x18
}
+ (void)PBArrayAdd_uiIcon;
+ (void)PBArrayAdd_uiTitle;
+ (void)PBArrayAdd_nsUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)uiTitle;
- (void)setUiTitle:(id)arg1;
- (id)nsUrl;
- (void)setNsUrl:(id)arg1;
- (id)uiIcon;
- (void)setUiIcon:(id)arg1;
- (void).cxx_destruct;
@end

