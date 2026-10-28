@interface MMFinderLiveNoticeInfoCell : UITableViewCell <MMFinderLiveNoticeInfoViewItemDelegate, WCFinderLiveNoticeViewDelegate>
{
    id <MMFinderLiveNoticeInfoCellDelegate> _delegate; // +0x8
    MMFinderLiveNoticeInfoViewItem * _viewItem; // +0x10
    WCFinderLiveNoticeView * _noticeView; // +0x18
    long long _indexInList; // +0x20
    UIView * _topLine; // +0x28
    UIView * _bottomLine; // +0x30
}
+ (id)defaultCellIdentifier;
+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)loadNoticeView;
- (void)setViewItem:(id)arg1;
- (void)setDisplayTopLine:(BOOL)arg1;
- (BOOL)displayTopLine;
- (void)updateAllValues;
- (void)layoutSubviews;
- (void)noticeInfoViewItemDidUpdate:(id)arg1;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(id)arg1;
- (void)onLiveNoticeViewActionButtonClicked:(id)arg1;
- (void)onLiveNoticeViewTopNoticeButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewItem;
- (id)noticeView;
- (void)setNoticeView:(id)arg1;
- (long long)indexInList;
- (void)setIndexInList:(long long)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end
