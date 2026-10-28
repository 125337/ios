@interface WCFinderCommentFriendLikeListView : WCFinderCustomPanelSheet <UITableViewDelegate, WCFinderFansProfileViewControllerDelegate>
{
    UITableView * _tableView; // +0x70
    NSArray * _likeInfoArray; // +0x78
    NSDiffableDataSourceSnapshot * _snapShot; // +0x80
    UITableViewDiffableDataSource * _source; // +0x88
}
- (id)initWithContactArray:(id)arg1;
- (void)viewDidLoad;
- (BOOL)hideMaskBackGroundView;
- (id)loadContentView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)onClickMore;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)likeInfoArray;
- (void)setLikeInfoArray:(id)arg1;
- (id)snapShot;
- (void)setSnapShot:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (void).cxx_destruct;
@end
