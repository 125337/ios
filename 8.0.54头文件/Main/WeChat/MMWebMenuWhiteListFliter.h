@interface MMWebMenuWhiteListFliter : MMObject <MMWebViewPresetMenuItemFliter>
{
    NSMutableSet * _setAllowMenuItems; // +0x8
}
+ (id)baseFunctionMenuFliter;
- (id)init;
- (void)appendAllowBaseMenuItem:(unsigned long long)arg1;
- (BOOL)isMenuItemFliteredToHide:(id)arg1;
- (id)setAllowMenuItems;
- (void)setSetAllowMenuItems:(id)arg1;
- (void).cxx_destruct;
@end

