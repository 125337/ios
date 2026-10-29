@interface WCFinderPanelHotCommentView : UIView <RichTextLayoutDelegate>
{
    BOOL _forceBoldHotWord; // +0x8
    int _carouselOptionFlag; // +0xc
    id <WCFinderPanelHotCommentViewDelegate> _delagate; // +0x10
    WCFinderComment * _comment; // +0x18
    UIView * _containerView; // +0x20
    UILabel * _hotWordLabel; // +0x28
    RichTextView * _textView; // +0x30
    UIView * _suffixView; // +0x38
    unsigned long long _suffixType; // +0x40
    double _textViewTruncatedFY; // +0x48
    UIImageView * _suffixIconImageView; // +0x50
    WCFinderSizingRichTextView * _suffixDescLabel; // +0x58
    NSString * _content; // +0x60
    WCFinderHotCommentStyleConfig * _styleConfig; // +0x68
}
+ (id)reportKVDictWithComment:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateSubviewsStyle;
- (void)updateLayout;
- (void)updateWithCommentList:(id)arg1 optionFlag:(int)arg2 width:(double)arg3;
- (void)updateAccessibility;
- (id)getContentWithComment:(id)arg1;
- (void)updateHotwordLabelWithComment:(id)arg1;
- (void)updateSuffixViewWithComment:(id)arg1;
- (void)updateSuffixViewWithLeftView:(id)arg1 iconName:(id)arg2 iconSize:(CGSize)arg3 labelText:(id)arg4 elementsMargin:(double)arg5;
- (void)onClickComment;
- (void)resetTextViewTruncatedState;
- (id)suffixLabelColor;
- (id)suffixIconColor;
- (void)configureTextViewWithWidth:(double)arg1;
- (void)setupTextViewContent;
- (void)layoutSuffixViewWithLeftMargin:(double)arg1 verticalPadding:(double)arg2 rightMargin:(double)arg3;
- (void)updateWithStyleConfig:(id)arg1;
- (void)updateSubviewsWithStyleConfig:(id)arg1;
- (void)layoutWithStyleConfig:(id)arg1;
- (double)originXForLineAtHeight:(double)arg1 richTextView:(id)arg2;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (id)textView;
- (id)hotWordLabel;
- (id)suffixIconImageView;
- (id)suffixDescLabel;
- (id)dynamicFontOfSize:(double)arg1;
- (id)getStyleConfig;
- (id)normalStyleConfig;
- (id)delagate;
- (void)setDelagate:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (BOOL)forceBoldHotWord;
- (void)setForceBoldHotWord:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
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
- (int)carouselOptionFlag;
- (void)setCarouselOptionFlag:(int)arg1;
- (id)styleConfig;
- (void)setStyleConfig:(id)arg1;
- (void).cxx_destruct;
@end
