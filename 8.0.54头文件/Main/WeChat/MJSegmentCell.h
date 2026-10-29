@interface MJSegmentCell : UICollectionViewCell <MJSegmentReusableView>
{
    id <MJSegmentReusableViewDelegate> _delegate; // +0x8
    MJSegmentViewModel * _viewModel; // +0x10
    UIColor * _contentBackgroundColor; // +0x18
    MJSegmentCellBorderView * _borderView; // +0x20
    UIStackView * _segmentInfoOverlayContainer; // +0x28
    MJSegmentDurationInfoOverlay * _durationInfoOverlay; // +0x30
    MJSegmentMuteInfoOverlay * _muteInfoOverlay; // +0x38
    UIView * _contentBackgroundView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)setupWithSegmentViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)syncWithSegmentUIState;
- (void)syncWithMutation;
- (void)setContentBackgroundColor:(id)arg1;
- (void)showBorderViewAnimated:(BOOL)arg1;
- (void)hideBorderViewAnimated:(BOOL)arg1;
- (id)durationInfoOverlay;
- (id)muteInfoOverlay;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (id)contentBackgroundColor;
- (id)borderView;
- (id)segmentInfoOverlayContainer;
- (void)setSegmentInfoOverlayContainer:(id)arg1;
- (void)setDurationInfoOverlay:(id)arg1;
- (void)setMuteInfoOverlay:(id)arg1;
- (id)contentBackgroundView;
- (void)setContentBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end

