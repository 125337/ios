@interface WCPayLQTPromptTipsView : UIView <ILinkEventExt>
{
    id <WCPayLQTPromptTipsViewDelegate> _delegate; // +0x8
    ComonPromptInfo * _infoData; // +0x10
    MMUILabel * _titleLabel; // +0x18
    RichTextView * _descTextView; // +0x20
    NSString * _accessibilityContent; // +0x28
}
- (id)initTipsViewWithDelegate:(id)arg1 containerWidth:(double)arg2;
- (void)setupContentWithTitle:(id)arg1 desc:(id)arg2 promptInfo:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)getTipsViewAccessibilityLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)infoData;
- (void)setInfoData:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (id)accessibilityContent;
- (void)setAccessibilityContent:(id)arg1;
- (void).cxx_destruct;
@end
