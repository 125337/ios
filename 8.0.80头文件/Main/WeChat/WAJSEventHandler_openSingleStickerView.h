@interface WAJSEventHandler_openSingleStickerView : WAJSEventHandler_BaseEvent <EmoticonHalfScreenSendViewDelegate>
{
    BOOL _showEntry; // +0x8
    int _emoticonScene; // +0xc
    int _addEmoticonSource; // +0x10
    EmojiInfoObj * _emojiInfoObj; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (void)openHalfScreen;
- (int)emoticonScene;
- (void)setEmoticonScene:(int)arg1;
- (int)addEmoticonSource;
- (void)setAddEmoticonSource:(int)arg1;
- (BOOL)showEntry;
- (void)setShowEntry:(BOOL)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (void).cxx_destruct;
@end
