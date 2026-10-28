@interface WCTBaseMenuModel : WCTBaseSettingModel
{
    BOOL _showArrow; // +0x8
    UIImage * _icon; // +0x10
}
+ (id)createWithIcon:(id)arg1 title:(id)arg2;
- (id)init;
- (id)icon;
- (void)setIcon:(id)arg1;
- (BOOL)showArrow;
- (void)setShowArrow:(BOOL)arg1;
- (void).cxx_destruct;
@end
