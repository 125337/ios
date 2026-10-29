@interface WCListYearCellView : MMTableViewCell
{
    UILabel * _yearLabel; // +0x8
}
+ (double)heightOfCellWithYear:(long long)arg1 width:(double)arg2;
- (id)init;
- (void)layoutSubviews;
- (void)configureWithYear:(long long)arg1;
- (id)yearLabel;
- (void)setYearLabel:(id)arg1;
- (void).cxx_destruct;
@end
