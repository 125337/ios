@interface WAProfileEvaluateScoreCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>
{
    UILabel * _titleLabel; // +0x8
    WAProfileRatingView * _ratingView; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)ratingView;
- (void)setRatingView:(id)arg1;
- (void).cxx_destruct;
@end

