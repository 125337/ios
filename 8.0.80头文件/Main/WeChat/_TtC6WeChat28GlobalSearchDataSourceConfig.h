@interface _TtC6WeChat28GlobalSearchDataSourceConfig : NSObject
{
    BOOL enableOnlyWebSearch; // +0x8
    BOOL enableWeAppSearch; // +0x9
    BOOL enableWebSearch; // +0xa
    BOOL enableSetting; // +0xb
    BOOL enableMemorySearchTop; // +0xc
}
- (BOOL)enableOnlyWebSearch;
- (void)setEnableOnlyWebSearch:(BOOL)arg1;
- (BOOL)enableWeAppSearch;
- (void)setEnableWeAppSearch:(BOOL)arg1;
- (BOOL)enableWebSearch;
- (void)setEnableWebSearch:(BOOL)arg1;
- (BOOL)enableFeature;
- (BOOL)enableFav;
- (BOOL)enableSetting;
- (void)setEnableSetting:(BOOL)arg1;
- (BOOL)enableMemorySearchTop;
- (void)setEnableMemorySearchTop:(BOOL)arg1;
- (id)init;
@end
