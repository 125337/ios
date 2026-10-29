@interface LiteAppJsApiEmoticonOpenHalfScreenSendView : LiteAppJsApi <EmoticonHalfScreenSendViewDelegate>
{
    BOOL _showEntry; // +0x20
    long long _emoticonScene; // +0x28
    long long _addEmoticonSource; // +0x30
    EmojiInfoObj * _emojiInfoObj; // +0x38
    NSString * _sdkRequestId; // +0x40
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)openHalfScreen;
- (id)getViewController;
- (void)endWithOK;
- (long long)emoticonScene;
- (void)setEmoticonScene:(long long)arg1;
- (long long)addEmoticonSource;
- (void)setAddEmoticonSource:(long long)arg1;
- (BOOL)showEntry;
- (void)setShowEntry:(BOOL)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (id)sdkRequestId;
- (void)setSdkRequestId:(id)arg1;
- (void).cxx_destruct;
@end

