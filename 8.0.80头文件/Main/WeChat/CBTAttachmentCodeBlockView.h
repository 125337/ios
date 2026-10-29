@interface CBTAttachmentCodeBlockView : CBTAttachmentBaseView <CBTShadowTextProvider, UIScrollViewDelegate, CBTStreamMDFeederDelegate>
{
    BOOL _highlighted; // +0x8
    CBTStreamTextView * _langTextView; // +0x10
    UIScrollView * _scrollView; // +0x18
    CBTStreamTextView * _codeTextView; // +0x20
    MMUIButton * _cpBtn; // +0x28
    CAGradientLayer * _fadeGradientMask; // +0x30
    UIView * _topSeparator; // +0x38
    UIView * _bottomSeparator; // +0x40
    CBTStreamMDFeeder * _subFeeder; // +0x48
    unsigned long long _highlightVersion; // +0x50
}
+ (double)calculateTotalHeightForContent:(id)arg1 language:(id)arg2 config:(id)arg3;
- (_NSRange)preferredSelectionLocalRangeForSpan:(id)arg1 localOffset:(unsigned long long)arg2;
- (unsigned long long)cbt_semanticSafeOffsetForText:(id)arg1 localOffset:(unsigned long long)arg2;
- (id)cbt_autoScroller;
- (void)beginAutoScrollWithPointInAttachment:(CGPoint)arg1 callback:(id /* block */)arg2;
- (void)stopAutoScroll;
- (void)dumpShadowTextIntoBuilder:(id)arg1 physicalLocation:(unsigned long long)arg2;
- (id)rectsInAttachmentSpaceForSpan:(id)arg1 localSubRange:(_NSRange)arg2;
- (id)cbt_rectsForLangSpan:(id)arg1 localSubRange:(_NSRange)arg2;
- (id)cbt_rectsForCodeSpan:(id)arg1 localSubRange:(_NSRange)arg2;
- (BOOL)locateShadowPointInAttachment:(CGPoint)arg1 outUserInfo:(id *)arg2 outLocalOffset:(unsigned long long *)arg3;
- (id)initWithAttachment:(id)arg1;
- (void)dealloc;
- (BOOL)enableCopyBtn;
- (BOOL)canCopy;
- (void)setupViews;
- (void)setupGradientMasks;
- (void)onCopy;
- (void)applyContent;
- (void)applyCodeHighlight;
- (void)setupSubFeeder;
- (void)onFeederDidOutputNewLine:(double)arg1;
- (void)onFeederDidFinish;
- (void)updateFrameLayoutForStreaming:(BOOL)arg1;
- (BOOL)streaming;
- (void)layoutView;
- (void)updateGradientMasks;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (id)langTextView;
- (void)setLangTextView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)codeTextView;
- (void)setCodeTextView:(id)arg1;
- (id)cpBtn;
- (void)setCpBtn:(id)arg1;
- (id)fadeGradientMask;
- (void)setFadeGradientMask:(id)arg1;
- (id)topSeparator;
- (void)setTopSeparator:(id)arg1;
- (id)bottomSeparator;
- (void)setBottomSeparator:(id)arg1;
- (id)subFeeder;
- (void)setSubFeeder:(id)arg1;
- (unsigned long long)highlightVersion;
- (void)setHighlightVersion:(unsigned long long)arg1;
- (BOOL)highlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void).cxx_destruct;
@end
