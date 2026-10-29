@interface BrandTemplateMsgAuthConfigModel : MMObject
{
    BOOL _isHasGlobalSwitchFooter; // +0x8
    BOOL _isHasB2CAuthList; // +0x9
    unsigned long long _enterScene; // +0x10
}
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (BOOL)isHasGlobalSwitchFooter;
- (void)setIsHasGlobalSwitchFooter:(BOOL)arg1;
- (BOOL)isHasB2CAuthList;
- (void)setIsHasB2CAuthList:(BOOL)arg1;
@end
