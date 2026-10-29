@interface WCPayRealnameRegResp : NSObject
{
    int _passport_page_style; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _page; // +0x20
    NSString * _err_jump_page; // +0x28
    NSString * _confirm_btn_title; // +0x30
    NSString * _confirm_btn_url; // +0x38
    NSString * _cancel_btn_title; // +0x40
    NSString * _bottom_wording; // +0x48
    NSString * _bottom_url; // +0x50
    NSString * _bottom_username; // +0x58
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)err_jump_page;
- (void)setErr_jump_page:(id)arg1;
- (int)passport_page_style;
- (void)setPassport_page_style:(int)arg1;
- (id)confirm_btn_title;
- (void)setConfirm_btn_title:(id)arg1;
- (id)confirm_btn_url;
- (void)setConfirm_btn_url:(id)arg1;
- (id)cancel_btn_title;
- (void)setCancel_btn_title:(id)arg1;
- (id)bottom_wording;
- (void)setBottom_wording:(id)arg1;
- (id)bottom_url;
- (void)setBottom_url:(id)arg1;
- (id)bottom_username;
- (void)setBottom_username:(id)arg1;
- (void).cxx_destruct;
@end

