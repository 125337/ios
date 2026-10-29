@interface WCFinderLiveCompleteLiveAudienceSimpleCardView : UIView <WCFinderFeedImageCDNViewDelegate>
{
    id /* block */ _actionBlock; // +0x8
    WCFinderDataItem * _replayDataItem; // +0x10
    WCFinderFeedImageCDNView * _coverView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _detailLabel; // +0x28
    MMUIImageView * _arrowImageView; // +0x30
    MMUIButton * _actionButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)createUI;
- (void)updateWithReplayDataItem:(id)arg1;
- (void)finderFeedImageLoadFinish;
- (double)getHeightFromWidth:(double)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onCardTapped;
- (id)coverView;
- (id)titleLabel;
- (id)detailLabel;
- (id)arrowImageView;
- (id)actionButton;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)replayDataItem;
- (void)setReplayDataItem:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
