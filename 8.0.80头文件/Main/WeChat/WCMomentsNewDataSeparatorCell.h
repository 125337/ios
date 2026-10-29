@interface WCMomentsNewDataSeparatorCell : MMTableViewCell
{
    CGSize _lastLayoutedSize; // +0x8
    id <WCMomentsNewDataSeparatorCellDelegate> _delegate; // +0x18
    WCMomentsNewDataSeparatorViewModel * _viewModel; // +0x20
    MMUILabel * _tipsLabel; // +0x28
    WCMomentsFinderRecommendationButton * _finderRecommendationButton; // +0x30
}
+ (double)heightForWidth:(double)arg1 viewModel:(id)arg2;
+ (id)createTipsLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewModel:(id)arg1;
- (void)updateSubviews;
- (void)reloadTipsLabel;
- (void)reloadFinderRecommendationButton;
- (void)finderRecommendationButtonDidClick:(id)arg1;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)finderRecommendationButton;
- (void)setFinderRecommendationButton:(id)arg1;
- (void).cxx_destruct;
@end
