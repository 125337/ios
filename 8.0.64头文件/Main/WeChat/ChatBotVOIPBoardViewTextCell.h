@interface ChatBotVOIPBoardViewTextCell : ChatBotVOIPBoardViewBaseCell <ILinkEventExt>
{
    RichTextView * _richTextView; // +0x8
    NSString * _content; // +0x10
}
- (id)initWithMessage:(id)arg1;
- (void)updateReportData:(id)arg1;
- (double)setupViewWithWidth:(double)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
