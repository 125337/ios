@interface WxpayDebugPanelScene : NSObject
{
    unsigned int _appUuid; // +0x8
    NSString * _appId; // +0x10
    NSString * _packageType; // +0x18
    WxpayRenderView * _view; // +0x20
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (id)packageType;
- (void)setPackageType:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (void).cxx_destruct;
@end
