@interface CellSourceView : UIView
{
    unsigned long long _bubbleType; // +0x8
    UIColor * _fixedBackgroundColor; // +0x10
    UIView * _separatorLineView; // +0x18
}
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 fixedBackgroundColor:(id)arg2 bubbleType:(unsigned long long)arg3 separatorColor:(id)arg4;
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
- (void).cxx_destruct;
@end

