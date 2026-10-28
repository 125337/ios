@interface MMFinderLiveNoticeMoreCell : UITableViewCell <MMFinderLiveNoticeMoreViewItemDelegate>
{
    MMFinderLiveNoticeMoreViewItem * _viewItem; // +0x8
    MMUILabel * _tipsLabel; // +0x10
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x18
}
+ (id)defaultCellIdentifier;
+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)loadTipsLabel;
- (void)loadActivityIndicatorView;
- (void)setViewItem:(id)arg1;
- (void)updateAllValues;
- (void)layoutSubviews;
- (void)updateActivityIndicatorViewLoadingState;
- (void)moreViewItemDidUpdate:(id)arg1;
- (id)viewItem;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
