@interface UniversalExplainSheetView : MMPageSheetBaseView <IVOIPWindowExt>
{
    UIButton * _settingButton; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
}
- (id)initWithTitle:(id)arg1 desc:(id)arg2;
- (void)initPageSheet;
- (void)initView;
- (void)onTapSettingRing;
- (id)settingButton;
- (void)setSettingButton:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end
