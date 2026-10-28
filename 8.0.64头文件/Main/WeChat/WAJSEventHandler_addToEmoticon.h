@interface WAJSEventHandler_addToEmoticon : WAJSEventHandler_BaseEvent <MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate, MMImageLoaderObserver>
{
    EmoticonCustomManageAddLogic * _emoticonAddLogic; // +0x8
    NSString * _currentUrl; // +0x10
    NSString * _currentMd5; // +0x18
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)addToEmoticonWithData:(id)arg1;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(BOOL)arg2;
- (id)getViewController;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)showFailTip;
- (id)emoticonAddLogic;
- (void)setEmoticonAddLogic:(id)arg1;
- (id)currentUrl;
- (void)setCurrentUrl:(id)arg1;
- (id)currentMd5;
- (void)setCurrentMd5:(id)arg1;
- (void).cxx_destruct;
@end
