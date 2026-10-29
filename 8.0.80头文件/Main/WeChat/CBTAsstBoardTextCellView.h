@interface CBTAsstBoardTextCellView : CBTAsstBoardBaseCellView <ILinkEventExt>
{
    RichTextView * _textView; // +0x8
}
- (BOOL)needsBubbleBackground;
- (double)contentTextWidth;
- (void)setupCellWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)setupUI;
- (void)layoutSubviews;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)textView;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end
