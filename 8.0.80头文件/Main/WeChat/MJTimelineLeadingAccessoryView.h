@interface MJTimelineLeadingAccessoryView : UICollectionReusableView <MJSegmentReusableView>
{
    id <MJSegmentReusableViewDelegate> _delegate; // +0x8
    MJPublisherButton * _volumeButton; // +0x10
    MJTimelineViewModel * _timelineVM; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setupViews;
- (void)volumeButtonTouchUpInside:(id)arg1;
- (void)prepareForReuse;
- (void)willDisplay;
- (void)didEndDisplaying;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)volumeButton;
- (void)setVolumeButton:(id)arg1;
- (id)timelineVM;
- (void)setTimelineVM:(id)arg1;
- (void).cxx_destruct;
@end
