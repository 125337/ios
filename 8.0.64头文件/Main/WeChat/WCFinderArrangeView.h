@interface WCFinderArrangeView : WCFinderObseverViewHiddenView
{
    BOOL _horizontal; // +0x10
    BOOL _showSeparator; // +0x11
    BOOL _isDirty; // +0x12
    double _padding; // +0x18
    UIColor * _separatorColor; // +0x20
    double _separatorPaddingStart; // +0x28
    double _separatorPaddingEnd; // +0x30
    NSMutableArray * _lineViews; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)ignoreView:(id)arg1;
- (void)onSubviewHiddenChanged:(id)arg1;
- (void)layoutDelay;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (void)setShowSeparator:(BOOL)arg1;
- (CGRect)bounds;
- (void)doLayout;
- (void)ensureLineView:(long long)arg1;
- (id)separatorColor;
- (void)layoutSubviews;
- (void)doLayoutSubviews;
- (double)padding;
- (void)setPadding:(double)arg1;
- (BOOL)horizontal;
- (void)setHorizontal:(BOOL)arg1;
- (BOOL)showSeparator;
- (void)setSeparatorColor:(id)arg1;
- (double)separatorPaddingStart;
- (void)setSeparatorPaddingStart:(double)arg1;
- (double)separatorPaddingEnd;
- (void)setSeparatorPaddingEnd:(double)arg1;
- (id)lineViews;
- (void)setLineViews:(id)arg1;
- (BOOL)isDirty;
- (void)setIsDirty:(BOOL)arg1;
- (void).cxx_destruct;
@end
