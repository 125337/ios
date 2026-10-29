@interface WCFinderFittingWidthRichView : UIView <ILinkEventExt>
{
    BOOL _expandOnce; // +0x8
    BOOL _currentExpanded; // +0x9
    id <WCFinderFittingWidthRichViewDelegate> _delegate; // +0x10
    RichTextView * _textView; // +0x18
    long long _lineNumber; // +0x20
    long long _expandLimitNumber; // +0x28
    NSString * _content; // +0x30
    id /* block */ _onClickUrl; // +0x38
    long long _contentLineNumber; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setContent:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (BOOL)displayExpand;
- (void)setExpanded:(BOOL)arg1;
- (BOOL)expanded;
- (void)configExpandable;
- (long long)displayLineNumber;
- (id)generateDisplayedIntroductionContent;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (long long)lineNumberCountForStyleArr:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onCopy:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (long long)lineNumber;
- (void)setLineNumber:(long long)arg1;
- (long long)expandLimitNumber;
- (void)setExpandLimitNumber:(long long)arg1;
- (id)content;
- (BOOL)expandOnce;
- (void)setExpandOnce:(BOOL)arg1;
- (id /* block */)onClickUrl;
- (void)setOnClickUrl:(id /* block */)arg1;
- (long long)contentLineNumber;
- (void)setContentLineNumber:(long long)arg1;
- (BOOL)currentExpanded;
- (void)setCurrentExpanded:(BOOL)arg1;
- (void).cxx_destruct;
@end

