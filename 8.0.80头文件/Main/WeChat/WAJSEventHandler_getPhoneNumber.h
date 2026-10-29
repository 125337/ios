@interface WAJSEventHandler_getPhoneNumber : WAJSEventHandler_BaseEvent
{
    PhoneAuthGetPhoneNumberLogic * _getPhoneNumberLogic; // +0x8
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)newGetPhoneNumberLogic:(id)arg1;
- (id)getPhoneNumberLogic;
- (void)setGetPhoneNumberLogic:(id)arg1;
- (void).cxx_destruct;
@end
