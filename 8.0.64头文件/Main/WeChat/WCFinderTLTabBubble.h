@interface WCFinderTLTabBubble : UIView
{
    NSArray * _iconViews; // +0x8
    RichTextView * _textView; // +0x10
    long long _tabType; // +0x18
    unsigned long long _token; // +0x20
    WCFinderTimelineRedDotBubbleDisplayInfo * _redDotDisplayInfo; // +0x28
    double _displayDuration; // +0x30
    long long _style; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)iconViews;
- (id)textView;
- (void)setDisplayDuration:(double)arg1;
- (void)updateMask:(double)arg1;
- (void)prepareForReuse;
- (void)sizeToFit;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1 adjustElementSize:(BOOL)arg2;
- (void)layoutSubviews;
- (void)adjustArrowForAnchor:(double)arg1;
- (void)updateIconUrls:(id)arg1 withText:(id)arg2 style:(long long)arg3;
- (void)updateDSLRedDotInfo:(id)arg1;
- (void)setIconViews:(id)arg1;
- (void)setTextView:(id)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (unsigned long long)token;
- (void)setToken:(unsigned long long)arg1;
- (id)redDotDisplayInfo;
- (void)setRedDotDisplayInfo:(id)arg1;
- (double)displayDuration;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (void).cxx_destruct;
@end
