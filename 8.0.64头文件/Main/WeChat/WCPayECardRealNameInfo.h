@interface WCPayECardRealNameInfo : NSObject
{
    BOOL _show_check_box; // +0x8
    BOOL _check_box_selected; // +0x9
    BOOL _is_upload_credid; // +0xa
    NSString * _ecard_open_scene; // +0x10
    NSString * _ecard_type; // +0x18
    NSString * _check_box_left_wording; // +0x20
    NSString * _check_box_right_wording; // +0x28
    NSString * _check_box_url; // +0x30
    NSString * _upload_credit_url; // +0x38
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)ecard_open_scene;
- (void)setEcard_open_scene:(id)arg1;
- (id)ecard_type;
- (void)setEcard_type:(id)arg1;
- (BOOL)show_check_box;
- (void)setShow_check_box:(BOOL)arg1;
- (BOOL)check_box_selected;
- (void)setCheck_box_selected:(BOOL)arg1;
- (id)check_box_left_wording;
- (void)setCheck_box_left_wording:(id)arg1;
- (id)check_box_right_wording;
- (void)setCheck_box_right_wording:(id)arg1;
- (id)check_box_url;
- (void)setCheck_box_url:(id)arg1;
- (BOOL)is_upload_credid;
- (void)setIs_upload_credid:(BOOL)arg1;
- (id)upload_credit_url;
- (void)setUpload_credit_url:(id)arg1;
- (void).cxx_destruct;
@end
