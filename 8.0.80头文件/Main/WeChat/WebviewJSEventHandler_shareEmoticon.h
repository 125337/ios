@interface WebviewJSEventHandler_shareEmoticon : WebviewJSEventHandlerBase <ForwardMessageLogicDelegate, MMImageLoaderObserver>
{
    NSString * m_activityId; // +0x8
    ForwardMessageLogicController * _forwardLogicController; // +0x10
    NSString * _currentUrl; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)shareEmoticonWithData:(id)arg1;
- (BOOL)showForwardMsgView:(id)arg1 Image:(id)arg2 ErrorMsg:(id *)arg3;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)forwardLogicController;
- (void)setForwardLogicController:(id)arg1;
- (id)currentUrl;
- (void)setCurrentUrl:(id)arg1;
- (void).cxx_destruct;
@end
