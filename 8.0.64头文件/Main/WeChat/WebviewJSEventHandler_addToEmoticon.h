@interface WebviewJSEventHandler_addToEmoticon : WebviewJSEventHandlerBase <MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate, MMImageLoaderObserver>
{
    NSString * m_activityId; // +0x8
    EmoticonCustomManageAddLogic * _emoticonAddLogic; // +0x10
    NSString * _currentUrl; // +0x18
    NSString * _currentThumbUrl; // +0x20
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)addToEmoticonWithData:(id)arg1;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(BOOL)arg2;
- (id)getViewController;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)emoticonAddLogic;
- (void)setEmoticonAddLogic:(id)arg1;
- (id)currentUrl;
- (void)setCurrentUrl:(id)arg1;
- (id)currentThumbUrl;
- (void)setCurrentThumbUrl:(id)arg1;
- (void).cxx_destruct;
@end
