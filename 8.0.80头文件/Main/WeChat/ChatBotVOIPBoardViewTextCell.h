@interface ChatBotVOIPBoardViewTextCell : ChatBotVOIPBoardViewBaseCell <ILinkEventExt>
{
    RichTextView * _richTextView; // +0x8
    NSString * _content; // +0x10
}
- (id)initWithMessage:(id)arg1 openScene:(int)arg2;
- (double)setupViewWithWidth:(double)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)updateBaseReportDataPB:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
