@interface BizRecentReadNoMoreDataLabel : UIView
{
    UIView * _lineLeftView; // +0x8
    UIView * _lineRightView; // +0x10
    MMUILabel * _noMoreTipsLabel; // +0x18
}
- (id)init;
- (void)layoutSubviews;
- (void)configureLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (id)lineLeftView;
- (id)lineRightView;
- (id)noMoreTipsLabel;
- (void)setLineLeftView:(id)arg1;
- (void)setLineRightView:(id)arg1;
- (void)setNoMoreTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
