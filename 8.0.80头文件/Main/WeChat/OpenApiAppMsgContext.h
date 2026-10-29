@interface OpenApiAppMsgContext : NSObject
{
    BOOL _appBrandWithShareTicket; // +0x8
    CMessageWrap * _msgWrap; // +0x10
    CContact * _contact; // +0x18
    WXMediaInternalMessage * _mediaMessage; // +0x20
    NSString * _fromAppId; // +0x28
    id /* block */ _handleCallback; // +0x30
    id /* block */ _genCallback; // +0x38
}
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)mediaMessage;
- (void)setMediaMessage:(id)arg1;
- (id)fromAppId;
- (void)setFromAppId:(id)arg1;
- (id /* block */)handleCallback;
- (void)setHandleCallback:(id /* block */)arg1;
- (id /* block */)genCallback;
- (void)setGenCallback:(id /* block */)arg1;
- (BOOL)appBrandWithShareTicket;
- (void)setAppBrandWithShareTicket:(BOOL)arg1;
- (void).cxx_destruct;
@end
