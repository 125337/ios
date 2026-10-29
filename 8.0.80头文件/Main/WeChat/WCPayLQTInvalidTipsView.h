@interface WCPayLQTInvalidTipsView : UIView <ILinkEventExt>
{
    UIImageView * _invalidIconView; // +0x8
    RichTextView * _richTextView; // +0x10
    NSString * _richTextContent; // +0x18
    id <WCPayLQTInvalidTipsViewDelegate> _delegate; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setContent:(id)arg1;
- (void)updateView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)invalidIconView;
- (void)setInvalidIconView:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)richTextContent;
- (void)setRichTextContent:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
