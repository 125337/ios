@interface CellSourceView : UIView
{
    BOOL _hideSepLine; // +0x8
    unsigned long long _bubbleType; // +0x10
    UIColor * _fixedBackgroundColor; // +0x18
    UIView * _separatorLineView; // +0x20
    double _horizontalPadding; // +0x28
    double _separatorLineHeight; // +0x30
}
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 fixedBackgroundColor:(id)arg2 bubbleType:(unsigned long long)arg3 separatorColor:(id)arg4;
- (id)initWithFrame:(CGRect)arg1 fixedBackgroundColor:(id)arg2 bubbleType:(unsigned long long)arg3 separatorColor:(id)arg4 horizontalPadding:(double)arg5 separatorLineHeight:(double)arg6 hideSepLine:(BOOL)arg7;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)shouldShowSeparator;
- (id)separatorColor;
- (unsigned long long)bubbleType;
- (void)setBubbleType:(unsigned long long)arg1;
- (id)fixedBackgroundColor;
- (void)setFixedBackgroundColor:(id)arg1;
- (id)separatorLineView;
- (void)setSeparatorLineView:(id)arg1;
- (double)horizontalPadding;
- (void)setHorizontalPadding:(double)arg1;
- (double)separatorLineHeight;
- (void)setSeparatorLineHeight:(double)arg1;
- (BOOL)hideSepLine;
- (void)setHideSepLine:(BOOL)arg1;
- (void).cxx_destruct;
@end
