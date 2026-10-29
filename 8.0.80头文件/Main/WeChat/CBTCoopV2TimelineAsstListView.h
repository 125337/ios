@interface CBTCoopV2TimelineAsstListView : UIView <UITableViewDataSource, UITableViewDelegate, CBTCoopV2TimelineAsstCellViewDelegate>
{
    BOOL _isMarkdownStyle; // +0x8
    id /* block */ _onFeedSelected; // +0x10
    id /* block */ _onFeedLongPressed; // +0x18
    double _itemHighlightHorizontalOutset; // +0x20
    CBTAsstBoardBaseViewModel * _hostViewModel; // +0x28
    UITableView * _tableView; // +0x30
    NSArray * _dataItems; // +0x38
    NSDictionary * _itemHeights; // +0x40
    NSMutableSet * _reportedFeedIds; // +0x48
}
+ (double)rowHeightForItemHeight:(double)arg1 showsSeparator:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)ensureTableView;
- (void)layoutSubviews;
- (void)updateWithDataItems:(id)arg1 itemHeights:(id)arg2;
- (double)resolvedHeightForDataItem:(id)arg1 width:(double)arg2;
- (double)contentHeight;
- (double)rowHeightForIndexPath:(id)arg1 tableViewWidth:(double)arg2;
- (double)separatorOriginYForItemHeight:(double)arg1;
- (double)separatorWidthForTableViewWidth:(double)arg1;
- (CGRect)separatorFrameForTableViewWidth:(double)arg1 itemHeight:(double)arg2;
- (CGRect)itemFrameForTableViewWidth:(double)arg1 itemHeight:(double)arg2;
- (id)separatorViewForTableViewWidth:(double)arg1 itemHeight:(double)arg2;
- (void)configureItemView:(id)arg1 dataItem:(id)arg2;
- (void)configureCell:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)timelineCellView:(id)arg1 didTapActionForDataItem:(id)arg2;
- (void)timelineCellViewDidLongPress:(id)arg1;
- (void)handleFeedSelection:(id)arg1;
- (void)reportFeedEvent:(id)arg1 dataItem:(id)arg2 index:(long long)arg3 target:(id)arg4;
- (id /* block */)onFeedSelected;
- (void)setOnFeedSelected:(id /* block */)arg1;
- (id /* block */)onFeedLongPressed;
- (void)setOnFeedLongPressed:(id /* block */)arg1;
- (BOOL)isMarkdownStyle;
- (void)setIsMarkdownStyle:(BOOL)arg1;
- (double)itemHighlightHorizontalOutset;
- (void)setItemHighlightHorizontalOutset:(double)arg1;
- (id)hostViewModel;
- (void)setHostViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (id)itemHeights;
- (void)setItemHeights:(id)arg1;
- (id)reportedFeedIds;
- (void)setReportedFeedIds:(id)arg1;
- (void).cxx_destruct;
@end
