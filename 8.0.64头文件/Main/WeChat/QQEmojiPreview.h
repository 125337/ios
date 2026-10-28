@interface QQEmojiPreview : MMUIView
{
    UIImageView * _backgroundView; // +0x8
    UIButton * _previewView; // +0x10
    UILabel * _descriptionLabel; // +0x18
    NSString * _emojiKey; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)showWithEmojiKey:(id)arg1 hideDesc:(BOOL)arg2;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)emojiKey;
- (void)setEmojiKey:(id)arg1;
- (void).cxx_destruct;
@end
