@interface WCTimelineTipCell : MMTableViewCell
{
    UIButton * _tipView; // +0x8
    double _minimumTipWidth; // +0x10
}
- (void)layoutSubviews;
- (void)layoutTipView;
- (id)tipView;
- (void)setTipView:(id)arg1;
- (double)minimumTipWidth;
- (void)setMinimumTipWidth:(double)arg1;
- (void).cxx_destruct;
@end
