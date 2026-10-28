@interface WebviewJSEventHandler_checkPCWechatOnline : WebviewJSEventHandlerBase
{
    unsigned long long _targetDeviceType; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)isInLegalDeviceType:(id)arg1;
- (void)refreshTargetDeviceType:(id)arg1;
- (BOOL)canSendOpenCommandForTargetDevice;
- (BOOL)isInTargetDeviceType:(unsigned long long)arg1;
- (BOOL)isXwechatDeviceForDeviceType:(unsigned int)arg1;
- (BOOL)isXwechatDeviceSupportHandoffWithTargetDeviceType:(unsigned int)arg1 clientVersion:(unsigned int)arg2;
- (unsigned long long)targetDeviceType;
- (void)setTargetDeviceType:(unsigned long long)arg1;
@end
