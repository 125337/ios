@interface WCFinderLandScapePlayCompleteCoverInfoView : MMUIView <UIGestureRecognizerDelegate>
{
    id <WCFinderLandScapePlayCompleteCoverInfoViewDelegate> _delegate; // +0x8
    WCFinderFeedImageCDNView * _coverView; // +0x10
    UIView * _maskBGView; // +0x18
    UIImageView * _playView; // +0x20
    UITapGestureRecognizer * _tapGes; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupSubViews;
- (void)updateWithDataItem:(id)arg1;
- (CGSize)playViewSize;
- (void)layoutSubviews;
- (void)onTap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)maskBGView;
- (void)setMaskBGView:(id)arg1;
- (id)playView;
- (void)setPlayView:(id)arg1;
- (id)tapGes;
- (void)setTapGes:(id)arg1;
- (void).cxx_destruct;
@end
