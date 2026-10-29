@interface WAAppPageSystemMsgView : UIView <ILinkEventExt>
{
    UIImageView * m_bgImageView; // +0x8
    RichTextView * m_richTextView; // +0x10
    NSString * m_text; // +0x18
    BOOL _useLightStyle; // +0x20
    id <WAAppPageSystemMsgViewDelegate> _delegate; // +0x28
    double _textVerMargin; // +0x30
    double _textHorMargin; // +0x38
}
- (BOOL)needUpdateLightStyle;
- (void)layoutSubviews;
- (void)updateText:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)textVerMargin;
- (void)setTextVerMargin:(double)arg1;
- (double)textHorMargin;
- (void)setTextHorMargin:(double)arg1;
- (BOOL)useLightStyle;
- (void)setUseLightStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end

