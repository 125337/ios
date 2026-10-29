@interface WAJSEventHandler_makePhoneCall : WAJSEventHandler_BaseEvent <WCActionSheetDelegate>
{
    NSString * _number; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)number;
- (void)setNumber:(id)arg1;
- (void).cxx_destruct;
@end

