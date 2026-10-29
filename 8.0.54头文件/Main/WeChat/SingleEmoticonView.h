@interface SingleEmoticonView : UIControl
{
    EmojiInfoObj * _emojiInfoObj; // +0x8
    MMWebImageView * _thumbView; // +0x10
    MMUILabel * _descLabel; // +0x18
    UIView * _maskView; // +0x20
}
+ (CGSize)sizeWithSideLength:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setEmojiInfoObj:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)emojiInfoObj;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (void).cxx_destruct;
@end

