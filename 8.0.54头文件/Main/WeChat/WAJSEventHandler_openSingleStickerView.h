@interface WAJSEventHandler_openSingleStickerView : WAJSEventHandler_BaseEvent <EmoticonHalfScreenSendViewDelegate>
{
    BOOL _showEntry; // +0x8
    long long _emoticonScene; // +0x10
    long long _addEmoticonSource; // +0x18
    EmojiInfoObj * _emojiInfoObj; // +0x20
}
- (void)handleJSEvent:(id)arg1;
- (void)openHalfScreen;
- (long long)emoticonScene;
- (void)setEmoticonScene:(long long)arg1;
- (long long)addEmoticonSource;
- (void)setAddEmoticonSource:(long long)arg1;
- (BOOL)showEntry;
- (void)setShowEntry:(BOOL)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (void).cxx_destruct;
@end

