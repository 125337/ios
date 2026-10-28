@interface MMFinderLiveNoticeNextLiveCell : UITableViewCell <MMFinderLiveNoticeNextLiveNoticeViewItemDelegate, WCFinderLiveNoticeViewDelegate>
{
    id <MMFinderLiveNoticeNextLiveCellDelegate> _delegate; // +0x8
    MMFinderLiveNoticeNextLiveNoticeViewItem * _viewItem; // +0x10
    WCFinderLiveNoticeView * _noticeView; // +0x18
}
+ (id)defaultCellIdentifier;
+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)loadNoticeView;
- (void)setViewItem:(id)arg1;
- (void)updateAllValues;
- (void)onLiveNoticeViewNextLiveNoticesButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewItem;
- (id)noticeView;
- (void)setNoticeView:(id)arg1;
- (void).cxx_destruct;
@end
