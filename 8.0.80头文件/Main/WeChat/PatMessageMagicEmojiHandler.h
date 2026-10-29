@interface PatMessageMagicEmojiHandler : NSObject <_TtP6WeChat10IMEHandler_>
{
    AppPatMessageViewModel * _viewModel; // +0x8
    PatWrap * _patWrap; // +0x10
    NSString * _chatUserName; // +0x18
    NSString * _emojiKey; // +0x20
    NSString * _emojiName; // +0x28
    _NSRange _range; // +0x30
}
- (id)onGetMetaWithID:(id)arg1 needFrame:(BOOL)arg2;
- (BOOL)isValid;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)patWrap;
- (void)setPatWrap:(id)arg1;
- (id)chatUserName;
- (void)setChatUserName:(id)arg1;
- (id)emojiKey;
- (void)setEmojiKey:(id)arg1;
- (id)emojiName;
- (void)setEmojiName:(id)arg1;
- (_NSRange)range;
- (void)setRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end
