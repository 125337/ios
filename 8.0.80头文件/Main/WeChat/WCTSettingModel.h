@interface WCTSettingModel : WCTBaseSettingModel
{
    BOOL _showArrow; // +0x8
    NSString * _subTitle; // +0x10
}
+ (id)createWithTitle:(id)arg1 subTitle:(id)arg2;
+ (id)createWithTitle:(id)arg1 subTitle:(id)arg2 showArrow:(BOOL)arg3;
- (id)init;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (BOOL)showArrow;
- (void)setShowArrow:(BOOL)arg1;
- (void).cxx_destruct;
@end
