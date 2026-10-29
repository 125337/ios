@interface WCFinderPanelHotCommentView : UIView <RichTextLayoutDelegate>
{
    BOOL _forceBoldHotWord; // +0x8
    id <WCFinderPanelHotCommentViewDelegate> _delagate; // +0x10
    WCFinderComment * _comment; // +0x18
    UILabel * _hotWordLabel; // +0x20
    RichTextView * _textView; // +0x28
    UIView * _suffixView; // +0x30
    unsigned long long _suffixType; // +0x38
    double _textViewTruncatedFY; // +0x40
    UIImageView * _suffixIconImageView; // +0x48
    WCFinderDynamicRichTextView * _suffixDescLabel; // +0x50
    NSString * _content; // +0x58
}
+ (unsigned long long)commentPrefixTypeWithComment:(id)arg1;
+ (unsigned long long)commentOvertTypeWithComment:(id)arg1;
+ (id)reportKVDictWithComment:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateSubviewsStyle;
- (void)updateLayout;
- (void)updateWithCommentList:(id)arg1 width:(double)arg2;
- (void)updateAccessibility;
- (void)updateHotwordLabelWithComment:(id)arg1;
- (void)updateSuffixViewWithComment:(id)arg1;
- (void)updateSuffixViewWithLeftView:(id)arg1 iconName:(id)arg2 iconSize:(CGSize)arg3 labelText:(id)arg4 elementsMargin:(double)arg5;
- (void)onClickComment;
- (void)resetTextViewTruncatedState;
- (id)suffixLabelColor;
- (id)suffixIconColor;
- (double)originXForLineAtHeight:(double)arg1 richTextView:(id)arg2;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (id)textView;
- (id)hotWordLabel;
- (id)suffixIconImageView;
- (id)suffixDescLabel;
- (id)dynamicFontOfSize:(double)arg1;
- (id)delagate;
- (void)setDelagate:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (BOOL)forceBoldHotWord;
- (void)setForceBoldHotWord:(BOOL)arg1;
- (void)setHotWordLabel:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)suffixView;
- (void)setSuffixView:(id)arg1;
- (unsigned long long)suffixType;
- (void)setSuffixType:(unsigned long long)arg1;
- (double)textViewTruncatedFY;
- (void)setTextViewTruncatedFY:(double)arg1;
- (void)setSuffixIconImageView:(id)arg1;
- (void)setSuffixDescLabel:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end

