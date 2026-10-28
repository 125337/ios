@interface LiteAppJsApiAdRequestPhoneNumber : LiteAppJsApiAdBase <WCAdConfirmHalfScreenAdapterDelegate>
{
    NSString * _requestIcon; // +0x20
    NSString * _requestName; // +0x28
    WCAdConfirmHalfScreenAdapter * _phoneNumAdapter; // +0x30
}
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)dealloc;
- (void)showAppointmentPhoneNumberRequestView;
- (void)confirmAdapterClosedWithResult:(long long)arg1 extInfo:(id)arg2;
- (id)requestIcon;
- (void)setRequestIcon:(id)arg1;
- (id)requestName;
- (void)setRequestName:(id)arg1;
- (id)phoneNumAdapter;
- (void)setPhoneNumAdapter:(id)arg1;
- (void).cxx_destruct;
@end
