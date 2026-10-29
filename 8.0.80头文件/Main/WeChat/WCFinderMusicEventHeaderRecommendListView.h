@interface WCFinderMusicEventHeaderRecommendListView : MMUIView <UITableViewDelegate, WCFinderMusicEventHeadTableViewCellDelegate>
{
    id <WCFinderMusicEventHeaderRecommendListViewDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    UITableView * _tableView; // +0x18
    UITableViewDiffableDataSource * _diffDataSource; // +0x20
    WCFinderMusicEventHeaderRecommendListVM * _viewModel; // +0x28
}
+ (double)tableViewHeightWithMusicTopicInfo:(id)arg1;
+ (double)heightWithMusicTopicInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViewModel;
- (void)setupSubViews;
- (void)setViewModel:(id)arg1;
- (void)applyDiffSnapshot;
- (void)updateWithMusicTopicInfo:(id)arg1;
- (void)onfinderMusicEventHeadTableViewCellClickActionButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)diffDataSource;
- (void)setDiffDataSource:(id)arg1;
- (id)viewModel;
- (void).cxx_destruct;
@end
