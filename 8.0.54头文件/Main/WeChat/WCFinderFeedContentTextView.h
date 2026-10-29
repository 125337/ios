@interface WCFinderFeedContentTextView : UIView <ILinkEventExt, RichTextLayoutDelegate>
{
    BOOL _enableTouchExpand; // +0x8
    BOOL _enableLongPress; // +0x9
    BOOL _isRichTextLinkClickHandled; // +0xa
    BOOL _isEnableReadMoreAction; // +0xb
    BOOL _needExtraLine; // +0xc
    id <WCFinderFeedContentTextClickActionDelegate> _delegate; // +0x10
    id <WCFinderFeedContentTextViewLayoutDelegate> _layoutDelegate; // +0x18
    RichTextView * _contentView; // +0x20
    WCFinderFeedContentTextViewConfig * _config; // +0x28
    UILabel * _prefixLabel; // +0x30
    UIView * _prefixContainer; // +0x38
    RichTextView * _preContentView; // +0x40
    UIView * _suffixView; // +0x48
    UIView * _clipArrowView; // +0x50
    MMBarItemCustomView * _suffixMaskView; // +0x58
    YYLabel * _actionLabel; // +0x60
    long long _contentLine; // +0x68
}
+ (BOOL)isInvisibleLinesAreLinkStyleForContent:(id)arg1 width:(double)arg2 font:(id)arg3 unExpandLineNum:(unsigned long long)arg4 lineSpacing:(double)arg5 rightIconPadding:(double)arg6;
+ (id)contentTextViewWithConfig:(id)arg1;
+ (double)textHeightWithConfig:(id)arg1;
+ (CGSize)textSizeWithConfig:(id)arg1;
- (void)clipArrowViewAction;
- (void)textExpandAction;
- (void)onExpandAction:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (id)displayLinks;
- (void)delayedTouchesEnded;
- (void)setUp;
- (void)updateConfig;
- (void)updateContentView:(id)arg1;
- (void)preCalContentView;
- (void)updateSuffixView;
- (void)updateSuffixViewFrame;
- (void)updatePrefix;
- (void)updateCustomPrefixView;
- (void)updateContent:(id)arg1;
- (unsigned long long)getCurrentLines;
- (void)forceForbidSuffixClipping;
- (void)clearSuffixView;
- (void)resetPrefixView;
- (void)enableHeightText;
- (void)dismissHighLightText;
- (void)enableTextClick;
- (void)prepareForReuse;
- (BOOL)isActionLabelHidden;
- (BOOL)isContentTruncated;
- (BOOL)isEnableResponseReadMoreAction;
- (void)setTextFont:(id)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setActionLabelTextColor:(id)arg1;
- (void)setEnableLongPress:(BOOL)arg1;
- (void)setEnableTouchExpand:(BOOL)arg1;
- (void)setLinkShadowColor:(id)arg1;
- (void)setLinkShadowOffset:(CGSize)arg1;
- (id)config;
- (id)prefixContainer;
- (id)suffixView;
- (id)clipArrowView;
- (id)suffixMaskView;
- (id)prefixLabel;
- (id)preContentView;
- (id)contentView;
- (id)actionLabel;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)richTextView:(id)arg1 updateTruncatedTrailing:(BOOL)arg2 truncatedViewframe:(CGRect)arg3 lastStyleViewFrame:(CGRect)arg4;
- (double)originXForLineAtHeight:(double)arg1 richTextView:(id)arg2;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (BOOL)enableTouchExpand;
- (BOOL)enableLongPress;
- (BOOL)isRichTextLinkClickHandled;
- (void)setIsRichTextLinkClickHandled:(BOOL)arg1;
- (void)setConfig:(id)arg1;
- (void)setPrefixLabel:(id)arg1;
- (void)setPrefixContainer:(id)arg1;
- (void)setPreContentView:(id)arg1;
- (void)setSuffixView:(id)arg1;
- (void)setClipArrowView:(id)arg1;
- (void)setSuffixMaskView:(id)arg1;
- (void)setActionLabel:(id)arg1;
- (BOOL)isEnableReadMoreAction;
- (void)setIsEnableReadMoreAction:(BOOL)arg1;
- (long long)contentLine;
- (void)setContentLine:(long long)arg1;
- (BOOL)needExtraLine;
- (void)setNeedExtraLine:(BOOL)arg1;
- (void).cxx_destruct;
@end

