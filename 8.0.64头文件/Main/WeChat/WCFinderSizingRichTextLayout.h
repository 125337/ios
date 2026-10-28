@interface WCFinderSizingRichTextLayout : NSObject <RichTextLayoutDelegate>
{
    BOOL _showExpand; // +0x8
    BOOL _trimContent; // +0x9
    BOOL _alwaysDisplayExpand; // +0xa
    BOOL _isExpanded; // +0xb
    id <WCFinderSizingRichTextDelegate> _delegate; // +0x10
    NSString * _content; // +0x18
    NSString * _closureContent; // +0x20
    NSString * _trailingLinkColor; // +0x28
    long long _lineNumber; // +0x30
    long long _expandLimitNumber; // +0x38
    RichTextViewConfig * _config; // +0x40
    NSString * _expandWording; // +0x48
    NSString * _expandedSuffix; // +0x50
    RichTextViewConfig * _suffixConfig; // +0x58
    double _expandedSuffixPadding; // +0x60
    WCFinderSizingRichTextView * _attachedView; // +0x68
    unsigned long long _contentHash; // +0x70
    WCFinderRichTextStyleGroup * _sizedStyle; // +0x78
    WCFinderRichTextStyleGroup * _unboundedStyle; // +0x80
}
- (id)init;
- (BOOL)showExpandClosure;
- (void)setParserType:(long long)arg1;
- (long long)parserType;
- (void)setLineSpacing:(double)arg1;
- (double)lineSpacing;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setFont:(id)arg1;
- (id)font;
- (void)updateTextConfig:(id /* block */)arg1;
- (void)updateSuffixTextConfig:(id /* block */)arg1;
- (void)_onAttrsChanged:(id)arg1 changes:(id)arg2;
- (void)_updateContentHash;
- (id)styleForWidth:(double)arg1;
- (id)_trimText:(id)arg1;
- (void)applyWidth:(double)arg1;
- (CGSize)intrinsicContentSize;
- (id)trailLinkColorXML;
- (void)_onClickExpand;
- (void)_onClickClosure;
- (void)_checkHeightChange:(id /* block */)arg1;
- (id)displayText;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (BOOL)showExpand;
- (void)setShowExpand:(BOOL)arg1;
- (BOOL)trimContent;
- (void)setTrimContent:(BOOL)arg1;
- (id)closureContent;
- (void)setClosureContent:(id)arg1;
- (BOOL)alwaysDisplayExpand;
- (void)setAlwaysDisplayExpand:(BOOL)arg1;
- (id)trailingLinkColor;
- (void)setTrailingLinkColor:(id)arg1;
- (long long)lineNumber;
- (void)setLineNumber:(long long)arg1;
- (long long)expandLimitNumber;
- (void)setExpandLimitNumber:(long long)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)expandWording;
- (void)setExpandWording:(id)arg1;
- (id)expandedSuffix;
- (void)setExpandedSuffix:(id)arg1;
- (id)suffixConfig;
- (void)setSuffixConfig:(id)arg1;
- (double)expandedSuffixPadding;
- (void)setExpandedSuffixPadding:(double)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (id)attachedView;
- (void)setAttachedView:(id)arg1;
- (unsigned long long)contentHash;
- (void)setContentHash:(unsigned long long)arg1;
- (id)sizedStyle;
- (void)setSizedStyle:(id)arg1;
- (id)unboundedStyle;
- (void)setUnboundedStyle:(id)arg1;
- (void).cxx_destruct;
@end
