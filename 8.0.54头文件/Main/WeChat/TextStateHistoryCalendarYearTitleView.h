@interface TextStateHistoryCalendarYearTitleView : UICollectionReusableView
{
    unsigned long long _year; // +0x8
    MMUILabel * _yearLabel; // +0x10
}
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setYear:(unsigned long long)arg1;
- (unsigned long long)year;
- (id)yearLabel;
- (void)setYearLabel:(id)arg1;
- (void).cxx_destruct;
@end

