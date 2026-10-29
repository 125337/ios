@interface WCTSettingSelectModel : WCTBaseSettingModel
{
    BOOL _selected; // +0x8
}
+ (id)createWithTitle:(id)arg1 selected:(BOOL)arg2;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
@end

