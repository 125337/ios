@interface WCPayBindCardSuccessResponse : NSObject
{
    unsigned int _jump_type; // +0x8
    unsigned int _show_bind_succ_page; // +0xc
    long long _retcode; // +0x10
    NSString * _retmsg; // +0x18
    NSString * _bind_flag; // +0x20
    NSString * _bind_serial; // +0x28
    NSString * _bind_succ_btn_wording; // +0x30
    WCPayBindCardActivityInfo * _activity_info; // +0x38
    WCPayBindCardRecommendH5Info * _h5_info; // +0x40
    WCPayBindCardRecommendTinyAppInfo * _tinyapp_info; // +0x48
    WCPayBindCardRecommendNativeInfo * _native_info; // +0x50
    NSString * _bind_succ_remind_wording; // +0x58
    NSString * _title; // +0x60
    NSString * _desc; // +0x68
    NSString * _page; // +0x70
    NSString * _err_jump_page; // +0x78
    NSString * _action; // +0x80
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (long long)retcode;
- (void)setRetcode:(long long)arg1;
- (id)retmsg;
- (void)setRetmsg:(id)arg1;
- (id)bind_flag;
- (void)setBind_flag:(id)arg1;
- (id)bind_serial;
- (void)setBind_serial:(id)arg1;
- (id)bind_succ_btn_wording;
- (void)setBind_succ_btn_wording:(id)arg1;
- (unsigned int)jump_type;
- (void)setJump_type:(unsigned int)arg1;
- (unsigned int)show_bind_succ_page;
- (void)setShow_bind_succ_page:(unsigned int)arg1;
- (id)activity_info;
- (void)setActivity_info:(id)arg1;
- (id)h5_info;
- (void)setH5_info:(id)arg1;
- (id)tinyapp_info;
- (void)setTinyapp_info:(id)arg1;
- (id)native_info;
- (void)setNative_info:(id)arg1;
- (id)bind_succ_remind_wording;
- (void)setBind_succ_remind_wording:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)err_jump_page;
- (void)setErr_jump_page:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (void).cxx_destruct;
@end
