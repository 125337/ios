@interface BizRecentReadDateCellView : MMTableViewCell
{
    MMUILabel * _dateLabel; // +0x8
    long long _paddingTop; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)applyData:(id)arg1 atIndex:(long long)arg2 withAnimation:(BOOL)arg3;
- (void)configureLayout;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (id)getDateLabelText;
- (id)dateLabel;
- (void)setDateLabel:(id)arg1;
- (long long)paddingTop;
- (void)setPaddingTop:(long long)arg1;
- (void).cxx_destruct;
@end

