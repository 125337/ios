@interface WAJSEventHandler_getIPAddress : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)getAddressAndNetmask:(const ifaddrs *)arg1 ip:(id *)arg2 netmask:(id *)arg3;
@end
