@interface ChatBotVOIPBoardViewWeAppProcessTitleView : UIView <ILinkEventExt>
{
    UIImageView * _completeImg; // +0x8
    RichTextView * _richTextView; // +0x10
    MMLoadingIndicatorView * _indicatorView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 text:(id)arg2;
- (void)layoutViewsWithText:(id)arg1;
- (void)complete;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)completeImg;
- (void)setCompleteImg:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
