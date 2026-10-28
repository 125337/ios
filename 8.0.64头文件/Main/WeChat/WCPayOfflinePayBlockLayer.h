@interface WCPayOfflinePayBlockLayer : NSObject
{
    unsigned int _view_id; // +0x8
    unsigned int _is_show_block_layer; // +0xc
    unsigned int _waiting_time; // +0x10
    NSString * _main_wording; // +0x18
    NSString * _reminder_content; // +0x20
    NSString * _repayment_tiny_app_username; // +0x28
    NSString * _repayment_tiny_app_path; // +0x30
}
- (unsigned int)view_id;
- (void)setView_id:(unsigned int)arg1;
- (unsigned int)is_show_block_layer;
- (void)setIs_show_block_layer:(unsigned int)arg1;
- (unsigned int)waiting_time;
- (void)setWaiting_time:(unsigned int)arg1;
- (id)main_wording;
- (void)setMain_wording:(id)arg1;
- (id)reminder_content;
- (void)setReminder_content:(id)arg1;
- (id)repayment_tiny_app_username;
- (void)setRepayment_tiny_app_username:(id)arg1;
- (id)repayment_tiny_app_path;
- (void)setRepayment_tiny_app_path:(id)arg1;
- (void).cxx_destruct;
@end
