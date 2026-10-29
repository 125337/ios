@interface WCPayOfflinePayGuideBar : NSObject <PBCoding>
{
    unsigned int _guide_type; // +0x8
    unsigned int _is_show_guide; // +0xc
    unsigned int _btn_jump_mode; // +0x10
    WCPayOfflinePayGuideData * _guide_data; // +0x18
    NSString * _guide_content; // +0x20
    NSString * _guide_content_color; // +0x28
    NSString * _guide_btn_text; // +0x30
    NSString * _guide_btn_text_color; // +0x38
    NSString * _guide_btn_bg_color; // +0x40
    NSString * _guide_logo; // +0x48
    NSString * _background_color; // +0x50
    NSString * _attach_info_left_wording; // +0x58
    NSString * _attach_info_right_wording; // +0x60
    NSString * _btn_jump_h5; // +0x68
    NSString * _btn_jump_tinyapp_username; // +0x70
    NSString * _btn_jump_tinyapp_path; // +0x78
    NSString * _dark_guide_btn_text_color; // +0x80
    NSString * _dark_guide_btn_bg_color; // +0x88
    NSString * _dark_background_color; // +0x90
}
+ (void)PBArrayAdd_guide_type;
+ (void)PBArrayAdd_guide_data;
+ (void)PBArrayAdd_is_show_guide;
+ (void)PBArrayAdd_guide_content;
+ (void)PBArrayAdd_guide_content_color;
+ (void)PBArrayAdd_guide_btn_text;
+ (void)PBArrayAdd_guide_btn_text_color;
+ (void)PBArrayAdd_guide_btn_bg_color;
+ (void)PBArrayAdd_guide_logo;
+ (void)PBArrayAdd_background_color;
+ (void)PBArrayAdd_attach_info_left_wording;
+ (void)PBArrayAdd_attach_info_right_wording;
+ (void)PBArrayAdd_btn_jump_mode;
+ (void)PBArrayAdd_btn_jump_h5;
+ (void)PBArrayAdd_btn_jump_tinyapp_username;
+ (void)PBArrayAdd_btn_jump_tinyapp_path;
+ (void)PBArrayAdd_dark_guide_btn_text_color;
+ (void)PBArrayAdd_dark_guide_btn_bg_color;
+ (void)PBArrayAdd_dark_background_color;
+ (void)initialize;
+ (id)getLocalOfflinePayGuideBarData;
+ (BOOL)saveOfflinePayGuideBarData:(id)arg1;
+ (void)removeOfflinePayGuideBarData;
- (id)getPBPropertyTable;
- (unsigned int)guide_type;
- (void)setGuide_type:(unsigned int)arg1;
- (id)guide_data;
- (void)setGuide_data:(id)arg1;
- (unsigned int)is_show_guide;
- (void)setIs_show_guide:(unsigned int)arg1;
- (id)guide_content;
- (void)setGuide_content:(id)arg1;
- (id)guide_content_color;
- (void)setGuide_content_color:(id)arg1;
- (id)guide_btn_text;
- (void)setGuide_btn_text:(id)arg1;
- (id)guide_btn_text_color;
- (void)setGuide_btn_text_color:(id)arg1;
- (id)guide_btn_bg_color;
- (void)setGuide_btn_bg_color:(id)arg1;
- (id)guide_logo;
- (void)setGuide_logo:(id)arg1;
- (id)background_color;
- (void)setBackground_color:(id)arg1;
- (id)attach_info_left_wording;
- (void)setAttach_info_left_wording:(id)arg1;
- (id)attach_info_right_wording;
- (void)setAttach_info_right_wording:(id)arg1;
- (unsigned int)btn_jump_mode;
- (void)setBtn_jump_mode:(unsigned int)arg1;
- (id)btn_jump_h5;
- (void)setBtn_jump_h5:(id)arg1;
- (id)btn_jump_tinyapp_username;
- (void)setBtn_jump_tinyapp_username:(id)arg1;
- (id)btn_jump_tinyapp_path;
- (void)setBtn_jump_tinyapp_path:(id)arg1;
- (id)dark_guide_btn_text_color;
- (void)setDark_guide_btn_text_color:(id)arg1;
- (id)dark_guide_btn_bg_color;
- (void)setDark_guide_btn_bg_color:(id)arg1;
- (id)dark_background_color;
- (void)setDark_background_color:(id)arg1;
- (void).cxx_destruct;
@end
