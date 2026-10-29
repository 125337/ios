@interface WCFinderLiveCompleteLiveVideoContentItem : UIView
{
    WCFinderDataItem * _dataItem; // +0x8
    WCFinderFeedStaticCoverView * _coverView; // +0x10
    id /* block */ _action; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateDataItem:(id)arg1;
- (void)onClickItem:(id)arg1;
- (id)coverView;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setCoverView:(id)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

