@interface WCFinderLiveShareCellFullStatusView : UIView
{
    double _middleSpacing; // +0x8
    UIColor * _textColor; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _label; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)labelText;
- (void)setLabelText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (BOOL)enableMultiline;
- (void)setEnableMultiline:(BOOL)arg1;
- (void)setMiddleSpacing:(double)arg1;
- (void)prepareForReuse;
- (void)startLiveAnimation;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)getLabel;
- (double)middleSpacing;
- (id)textColor;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end

