@interface BizRecentReadTipsBar : UIView
{
    MMUILabel * _dateLabel; // +0x8
    UIView * _bottomLine; // +0x10
}
- (id)init;
- (void)configureLayout;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)updateDateText:(id)arg1;
- (id)dateLabel;
- (id)bottomLine;
- (void)setDateLabel:(id)arg1;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end
