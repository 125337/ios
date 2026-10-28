@interface WCFinderTimelineJumpView : UIView <WCFinderFeedImageCDNViewDelegate>
{
    id <WCFinderTimelineJumpViewDelegate> _delegate; // +0x8
    UIImageView * _arrowImageView; // +0x10
    UILabel * _tipsLabel; // +0x18
    WCFinderFeedImageCDNView * _thumbImageView; // +0x20
    UIView * _containerView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)arrowImageView;
- (id)tipsLabel;
- (id)thumbImageView;
- (id)containerView;
- (void)setupSubviews;
- (void)updateWithDataItem:(id)arg1 tips:(id)arg2;
- (void)onClickAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setThumbImageView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
