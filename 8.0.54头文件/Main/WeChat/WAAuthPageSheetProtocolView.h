@interface WAAuthPageSheetProtocolView : WAAuthPageSheetBaseView <WARichTextViewHelperDelegate>
{
    UIButton * _checkButton; // +0x8
    id <IWARichTextViewHelper> _richTextHelper; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)showNeedAcceptProtocolAnimation;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)onLinkClicked:(id)arg1 linkRect:(CGRect)arg2;
- (id)checkButton;
- (void)setCheckButton:(id)arg1;
- (id)richTextHelper;
- (void)setRichTextHelper:(id)arg1;
- (void).cxx_destruct;
@end

