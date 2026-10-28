@interface MBEventHandler_makePhoneCall : MBEventHandlerBaseAsync <WCActionSheetDelegate>
{
    NSString * _number; // +0x8
}
- (id)apiName;
- (void)invoke:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)number;
- (void)setNumber:(id)arg1;
- (void).cxx_destruct;
@end
