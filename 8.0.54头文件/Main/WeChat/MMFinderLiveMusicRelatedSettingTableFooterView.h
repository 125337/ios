@interface MMFinderLiveMusicRelatedSettingTableFooterView : UIView
{
    BOOL _enableDisplayEndState; // +0x8
    double _separatorLeftMargin; // +0x10
    UIView * _leftEndLine; // +0x18
    UIView * _rightEndLine; // +0x20
    UIImageView * _centerDot; // +0x28
    UIView * _customSeparatorView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCustomSeparatorView;
- (void)layoutCenterDot;
- (void)layoutLeftEndLine;
- (void)layoutRightEndLine;
- (void)displayEndState;
- (void)hideEndState;
- (void)setEnableDisplayEndState:(BOOL)arg1;
- (BOOL)enableDisplayEndState;
- (double)separatorLeftMargin;
- (void)setSeparatorLeftMargin:(double)arg1;
- (id)leftEndLine;
- (void)setLeftEndLine:(id)arg1;
- (id)rightEndLine;
- (void)setRightEndLine:(id)arg1;
- (id)centerDot;
- (void)setCenterDot:(id)arg1;
- (id)customSeparatorView;
- (void)setCustomSeparatorView:(id)arg1;
- (void).cxx_destruct;
@end

