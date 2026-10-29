@interface LiteAppJsApiEmoticonStartSelect : LiteAppJsApi <BaseEmoticonViewDelegate, EmoticonBoardViewDelegate, EmoticonSearchViewControllerDelegate>
{
    LiteAppJsApiCallback * _callBack; // +0x20
    UIViewController * _controller; // +0x28
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)presentEmoticonPanelModal:(id)arg1;
- (id)createEmoticonPanel:(id)arg1;
- (id)getEmoticonPanel;
- (void)showEmoticonPanel:(id)arg1;
- (void)removeEmoticonPanel;
- (void)onBackgroundTapped;
- (void)didSelectorEmoticon:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onSendButtonClicked;
- (void)onEmoticonSearchIconClicked;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void).cxx_destruct;
@end
