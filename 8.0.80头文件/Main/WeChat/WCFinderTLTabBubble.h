@interface WCFinderTLTabBubble : UIView
{
    BOOL _localBusinessBubble; // +0x8
    NSArray * _iconViews; // +0x10
    RichTextView * _textView; // +0x18
    long long _bubbleType; // +0x20
    unsigned long long _token; // +0x28
    WCFinderTimelineRedDotBubbleDisplayInfo * _redDotDisplayInfo; // +0x30
    double _displayDuration; // +0x38
    long long _style; // +0x40
    unsigned long long _displayStyle; // +0x48
    double _beginExposeTime; // +0x50
}
+ (BOOL)isValidDSLRenderTmpl:(id)arg1;
+ (void)enumerateDSLRenderTmpl:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)iconViews;
- (id)textView;
- (void)setDisplayDuration:(double)arg1;
- (void)updateMask:(double)arg1;
- (void)prepareForReuse;
- (BOOL)isNetworkTipsDisplayStyle;
- (BOOL)isNetworkToastDisplayStyle;
- (void)resetLayerForRedDotStyle;
- (void)updateLayerForNetworkTipStyle;
- (CGSize)networkTipSizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1 adjustElementSize:(BOOL)arg2;
- (void)layoutSubviews;
- (void)adjustArrowForAnchor:(double)arg1;
- (void)updateIconUrls:(id)arg1 withText:(id)arg2 style:(long long)arg3 darkBG:(BOOL)arg4;
- (void)updateNetworkTipWithText:(id)arg1 style:(unsigned long long)arg2 maxWidth:(double)arg3;
- (void)updateDSLRedDotInfo:(id)arg1 darkBG:(BOOL)arg2;
- (void)setIconViews:(id)arg1;
- (void)setTextView:(id)arg1;
- (long long)bubbleType;
- (void)setBubbleType:(long long)arg1;
- (unsigned long long)token;
- (void)setToken:(unsigned long long)arg1;
- (id)redDotDisplayInfo;
- (void)setRedDotDisplayInfo:(id)arg1;
- (double)displayDuration;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (unsigned long long)displayStyle;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (double)beginExposeTime;
- (void)setBeginExposeTime:(double)arg1;
- (BOOL)localBusinessBubble;
- (void)setLocalBusinessBubble:(BOOL)arg1;
- (void).cxx_destruct;
@end
