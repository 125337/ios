@interface WCTogetherFeedHeaderView : WCTogetherReusableView
{
    UILabel * _yearTextLabel; // +0x8
    UILabel * _dayTextLabel; // +0x10
}
+ (id)reusableViewIdentifier;
+ (double)heightForViewSection:(id)arg1 inTableView:(id)arg2;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)yearTextLabel;
- (void)setYearTextLabel:(id)arg1;
- (id)dayTextLabel;
- (void)setDayTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

