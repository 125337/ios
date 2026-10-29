@interface WCFinderLiveCompleteLiveVideoContentView : UIView
{
    BOOL _isLayoutFeeds; // +0x8
    id <WCFinderLiveCompleteLiveVideoContentViewDelegate> _delegate; // +0x10
    double _containerViewHeight; // +0x18
    UIView * _videoContainerView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _timeLabel; // +0x30
    MMUIButton * _actionButton; // +0x38
    double _itemBottom; // +0x40
}
- (id)init;
- (void)layoutSubviews;
- (double)widthAndHeightScale;
- (double)itemMargin;
- (double)videoContainerViewPadding;
- (double)containerViewHeight;
- (void)layoutCardItem:(id)arg1;
- (void)updateVideoContainerViewHeight;
- (void)actionButtonClick:(id)arg1;
- (id)titleLabel;
- (id)videoContainerView;
- (id)actionButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContainerViewHeight:(double)arg1;
- (void)setVideoContainerView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (double)itemBottom;
- (void)setItemBottom:(double)arg1;
- (BOOL)isLayoutFeeds;
- (void)setIsLayoutFeeds:(BOOL)arg1;
- (void).cxx_destruct;
@end
