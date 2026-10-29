@interface WCFinderLiveCompleteLiveReplayView : UIView <WCFinderFeedImageCDNViewDelegate>
{
    id /* block */ _liveReplayViewBlock; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    WCFinderFeedImageCDNView * _coverView; // +0x18
    MMUIButton * _actionButton; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _detailLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)finderFeedImageLoadFinish;
- (void)updateData:(id)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)liveReplayViewClick;
- (void)layoutUI;
- (id)coverView;
- (id)titleLabel;
- (id)actionButton;
- (id)detailLabel;
- (id /* block */)liveReplayViewBlock;
- (void)setLiveReplayViewBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void).cxx_destruct;
@end

