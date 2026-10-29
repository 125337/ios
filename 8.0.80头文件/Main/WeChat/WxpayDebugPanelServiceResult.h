@interface WxpayDebugPanelServiceResult : NSObject
{
    WxpayStatus * _status; // +0x8
    WxpayDebugPanelConfig * _config; // +0x10
}
- (id)status;
- (void)setStatus:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
