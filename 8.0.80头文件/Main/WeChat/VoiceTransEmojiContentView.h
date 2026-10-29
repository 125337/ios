@interface VoiceTransEmojiContentView : UIView <IStoreEmotionSingleDownloadMgrExt>
{
    id <VoiceTransEmojiContentViewDelegate> _delegate; // +0x8
    double _emoticonCornerRadius; // +0x10
    EmojiInfo * _emojiInfo; // +0x18
    MMEmoticonView * _emoticonView; // +0x20
}
+ (double)emojiContentSize;
- (BOOL)emojiReady;
- (id)initWithFrame:(CGRect)arg1;
- (void)setEmoticonCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (void)centerEmoticonView;
- (void)renderEmoticonWithObj:(id)arg1;
- (void)dealloc;
- (void)configureWithEmojiInfo:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)emoticonCornerRadius;
- (id)emojiInfo;
- (void)setEmojiInfo:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (void).cxx_destruct;
@end
