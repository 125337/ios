@interface MMGameLiveAccessoryTipView : MMUIView
{
    MMUILabel * _titleLabel; // +0x8
    RichTextView * _descLabel; // +0x10
    CGSize _selfSize; // +0x18
}
- (id)init;
- (void)layoutSubviews;
- (void)checkSelfSizeChanged;
- (void)createUI;
- (void)createTitleLabel;
- (void)createDescLabel;
- (void)updateTitleDescOrigin;
- (double)standardWidth;
- (double)currContentScale;
- (id)descTitle;
- (id)descContent;
- (double)lineSpace;
- (CGSize)selfSize;
- (void)setSelfSize:(CGSize)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

