@interface VoiceTransQuickReplyView : UIView <VoiceTransEmojiContentViewDelegate>
{
    BOOL _highlighted; // +0x8
    BOOL _loading; // +0x9
    VoiceTransEmojiContentView * _emojiView; // +0x10
    UIView * _loadingContainerView; // +0x18
    SightIconView * _loadingIndicator; // +0x20
    UILabel * _titleLabel; // +0x28
}
+ (CGSize)preferredSize;
- (id)init;
- (void)enterLoading;
- (id)emojiInfo;
- (void)configureWithEmojiInfo:(id)arg1;
- (void)showEmoji;
- (void)voiceTransEmojiContentViewDidRefresh:(id)arg1;
- (void)voiceTransEmojiContentViewDidFailDownload:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (BOOL)isLoading;
- (void)setLoading:(BOOL)arg1;
- (id)emojiView;
- (void)setEmojiView:(id)arg1;
- (id)loadingContainerView;
- (void)setLoadingContainerView:(id)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
