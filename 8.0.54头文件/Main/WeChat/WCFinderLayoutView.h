@interface WCFinderLayoutView : UIView
{
    BOOL _addTopBottomSperator; // +0x8
    long long _axis; // +0x10
    double _spacing; // +0x18
    UIColor * _speratorLineColor; // +0x20
    NSMutableDictionary * _arrangeViews; // +0x28
    CGSize _contentSize; // +0x30
    CGSize _preSize; // +0x40
    UIEdgeInsets _seperatorInset; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)layoutAllViews;
- (void)addArrangedSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1 priority:(long long)arg2;
- (id)getArrangeSubviewByPriority:(long long)arg1;
- (void)removeAllArrangeSubviews;
- (void)layout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)arrangeSubViews;
- (long long)axis;
- (void)setAxis:(long long)arg1;
- (UIEdgeInsets)seperatorInset;
- (void)setSeperatorInset:(UIEdgeInsets)arg1;
- (double)spacing;
- (void)setSpacing:(double)arg1;
- (id)speratorLineColor;
- (void)setSperatorLineColor:(id)arg1;
- (BOOL)addTopBottomSperator;
- (void)setAddTopBottomSperator:(BOOL)arg1;
- (id)arrangeViews;
- (void)setArrangeViews:(id)arg1;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (CGSize)preSize;
- (void)setPreSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

