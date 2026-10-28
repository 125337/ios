@interface LiteAppJsApiEmoticonOpenHalfScreenSendView : LiteAppJsApi <EmoticonHalfScreenSendViewDelegate>
{
    BOOL _showEntry; // +0x20
    int _emoticonScene; // +0x24
    int _addEmoticonSource; // +0x28
    unsigned long long _scene; // +0x30
    EmojiInfoObj * _emojiInfoObj; // +0x38
    NSString * _sdkRequestId; // +0x40
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)openHalfScreen;
- (id)getViewController;
- (void)endWithOK;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (int)emoticonScene;
- (void)setEmoticonScene:(int)arg1;
- (int)addEmoticonSource;
- (void)setAddEmoticonSource:(int)arg1;
- (BOOL)showEntry;
- (void)setShowEntry:(BOOL)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (id)sdkRequestId;
- (void)setSdkRequestId:(id)arg1;
- (void).cxx_destruct;
@end
