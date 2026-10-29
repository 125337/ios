@interface TextStateHistoryCalendarDayCell : UICollectionViewCell
{
    TextStateHistoryCalendarItem * _item; // +0x8
    MMUILabel * _dayLabel; // +0x10
    NSMutableArray * _iconViewList; // +0x18
    unsigned long long _count; // +0x20
}
+ (double)iconLengthForCount:(unsigned long long)arg1;
+ (double)iconMarginForCount:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)setItem:(id)arg1;
- (id)item;
- (id)dayLabel;
- (void)setDayLabel:(id)arg1;
- (id)iconViewList;
- (void)setIconViewList:(id)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

