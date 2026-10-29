@interface LocalJSEventHandler_gotoEmoticonPad : LocalJSEventHandler_BaseEvent <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate>
{
    WSEmoticonPadViewController * _emoticonPad; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onSendButtonClicked;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)addDownloadTaskWith:(id)arg1;
- (id)emoticonPad;
- (void)setEmoticonPad:(id)arg1;
- (void).cxx_destruct;
@end

