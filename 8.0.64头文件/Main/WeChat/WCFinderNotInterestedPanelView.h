@interface WCFinderNotInterestedPanelView : MMUIView
{
    BOOL _highLight; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _tipsLabel; // +0x18
    UIView * _containerView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupSubViewsAndLayout;
- (void)updateView;
- (id)getTipsLabelText;
- (void)setHighLight:(BOOL)arg1;
- (void)setMoveOffset:(double)arg1;
- (BOOL)isHighLight;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
