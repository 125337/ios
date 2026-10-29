@interface PreEnterShowPolicyListConfig : NSObject
{
    BOOL _hideclosebtn; // +0x8
    NSString * _policylist_url; // +0x10
    NSString * _policylist_list; // +0x18
    NSString * _policylist_ticket; // +0x20
    NSString * _deviceid; // +0x28
    NSString * _doublecheck_content; // +0x30
    NSString * _doublecheck_cancel; // +0x38
    NSString * _doublecheck_ok; // +0x40
}
- (id)policylist_url;
- (void)setPolicylist_url:(id)arg1;
- (id)policylist_list;
- (void)setPolicylist_list:(id)arg1;
- (id)policylist_ticket;
- (void)setPolicylist_ticket:(id)arg1;
- (id)deviceid;
- (void)setDeviceid:(id)arg1;
- (id)doublecheck_content;
- (void)setDoublecheck_content:(id)arg1;
- (id)doublecheck_cancel;
- (void)setDoublecheck_cancel:(id)arg1;
- (id)doublecheck_ok;
- (void)setDoublecheck_ok:(id)arg1;
- (BOOL)hideclosebtn;
- (void)setHideclosebtn:(BOOL)arg1;
- (void).cxx_destruct;
@end

