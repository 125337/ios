@interface WAOpenSDKJSEventHandlerContext : NSObject
{
    BOOL _disableAutoCloseWebviewForQRCode; // +0x8
    unsigned int _sourceDebugMode; // +0xc
    WAContact * _contact; // +0x10
    NSString * _sourceUserName; // +0x18
    NSString * _appId; // +0x20
    NSString * _sourcePagePath; // +0x28
    unsigned long long _sourceScene; // +0x30
    NSString * _sourceSceneNote; // +0x38
    UIViewController<MMUIViewControllerDelegate> * _sourceViewController; // +0x40
    NSString * _sourceOpenSDKAppId; // +0x48
    NSString * _sourceOpenSDKUniversalLink; // +0x50
    NSString * _sourceInstanceId; // +0x58
    NSString * _sourceSessionId; // +0x60
    unsigned long long _sourceVersion; // +0x68
    NSString * _sourceTitle; // +0x70
    id /* block */ _eventCompletionBlock; // +0x78
    NSString * _qrCodeUuid; // +0x80
    NSString * _ticket; // +0x88
    NSString * _jsapiType; // +0x90
    id <WAOpenSDKQRCodeHandlerDelegate> _openSDKQRCodeDelegate; // +0x98
    WAOpenSDKTransferContext * _transferContext; // +0xa0
}
- (id)init;
- (id)transferContext;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)sourceUserName;
- (void)setSourceUserName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)sourcePagePath;
- (void)setSourcePagePath:(id)arg1;
- (unsigned long long)sourceScene;
- (void)setSourceScene:(unsigned long long)arg1;
- (id)sourceSceneNote;
- (void)setSourceSceneNote:(id)arg1;
- (id)sourceViewController;
- (void)setSourceViewController:(id)arg1;
- (id)sourceOpenSDKAppId;
- (void)setSourceOpenSDKAppId:(id)arg1;
- (id)sourceOpenSDKUniversalLink;
- (void)setSourceOpenSDKUniversalLink:(id)arg1;
- (id)sourceInstanceId;
- (void)setSourceInstanceId:(id)arg1;
- (id)sourceSessionId;
- (void)setSourceSessionId:(id)arg1;
- (unsigned long long)sourceVersion;
- (void)setSourceVersion:(unsigned long long)arg1;
- (unsigned int)sourceDebugMode;
- (void)setSourceDebugMode:(unsigned int)arg1;
- (id)sourceTitle;
- (void)setSourceTitle:(id)arg1;
- (id /* block */)eventCompletionBlock;
- (void)setEventCompletionBlock:(id /* block */)arg1;
- (id)qrCodeUuid;
- (void)setQrCodeUuid:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)jsapiType;
- (void)setJsapiType:(id)arg1;
- (BOOL)disableAutoCloseWebviewForQRCode;
- (void)setDisableAutoCloseWebviewForQRCode:(BOOL)arg1;
- (id)openSDKQRCodeDelegate;
- (void)setOpenSDKQRCodeDelegate:(id)arg1;
- (void)setTransferContext:(id)arg1;
- (void).cxx_destruct;
@end
