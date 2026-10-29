@interface QQEmojiViewWithPreview : MMUIView
{
    BOOL _needReloadPreview; // +0x8
    UIImageView * _m_emojiImageView; // +0x10
    UILabel * _m_emojiLabel; // +0x18
    UIImageView * _m_emojiPreviewBackView; // +0x20
    UILabel * _m_emojiDescriptionLabel; // +0x28
    UIButton * _m_emojiPreviewView; // +0x30
    NSString * _m_emojiKey; // +0x38
}
- (BOOL)changeKey:(id)arg1 needSyncLoad:(BOOL)arg2;
- (void)updateEmojiImageViewWithImage:(id)arg1;
- (void)showEmojiLabel;
- (void)showPreview;
- (void)hidePreview;
- (void)reloadPreview;
- (CGRect)accessibilityFrame;
- (BOOL)isAccessibilityElement;
- (id)m_emojiImageView;
- (void)setM_emojiImageView:(id)arg1;
- (id)m_emojiLabel;
- (void)setM_emojiLabel:(id)arg1;
- (id)m_emojiPreviewBackView;
- (void)setM_emojiPreviewBackView:(id)arg1;
- (id)m_emojiDescriptionLabel;
- (void)setM_emojiDescriptionLabel:(id)arg1;
- (id)m_emojiPreviewView;
- (void)setM_emojiPreviewView:(id)arg1;
- (id)m_emojiKey;
- (void)setM_emojiKey:(id)arg1;
- (BOOL)needReloadPreview;
- (void)setNeedReloadPreview:(BOOL)arg1;
- (void).cxx_destruct;
@end

