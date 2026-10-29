@interface ChatBotAsstVoIPFlutterShell : NSObject
{
    BOOL _isAnimatingToFullScreen; // +0x8
    int _displayMode; // +0xc
    NSString * _callId; // +0x10
    ChatBotAsstVoIPShellWindow * _window; // +0x18
    UIView * _containerView; // +0x20
}
- (id)initWithCallId:(id)arg1 flutterVC:(id)arg2;
- (void)presentWithDisplayMode:(int)arg1;
- (void)expandToFullScreen;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (id)callId;
- (void)setCallId:(id)arg1;
- (int)displayMode;
- (void)setDisplayMode:(int)arg1;
- (BOOL)isAnimatingToFullScreen;
- (void)setIsAnimatingToFullScreen:(BOOL)arg1;
- (id)window;
- (void)setWindow:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
