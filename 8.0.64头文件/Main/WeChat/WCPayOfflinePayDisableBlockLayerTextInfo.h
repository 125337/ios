@interface WCPayOfflinePayDisableBlockLayerTextInfo : NSObject <PBCoding>
{
    NSString * _main_wording; // +0x8
    NSString * _reminder_content; // +0x10
    NSString * _action_btn_text; // +0x18
    NSString * _language; // +0x20
}
+ (void)PBArrayAdd_main_wording;
+ (void)PBArrayAdd_reminder_content;
+ (void)PBArrayAdd_action_btn_text;
+ (void)PBArrayAdd_language;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)main_wording;
- (void)setMain_wording:(id)arg1;
- (id)reminder_content;
- (void)setReminder_content:(id)arg1;
- (id)action_btn_text;
- (void)setAction_btn_text:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (void).cxx_destruct;
@end
