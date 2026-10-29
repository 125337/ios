@interface MJTimelineTrimViewController : UIViewController
{
    BOOL _hasChanges; // +0x8
    MJTimelineViewController * _timelineVC; // +0x10
    MJPublisherButton * _quickAdjustButton; // +0x18
    struct _initialTimeRange; // +0x20
}
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;
- (void)viewDidLoad;
- (void)setupViews;
- (void)layoutViews;
- (void)quickAdjustTouchUpInside:(id)arg1;
- (void)quickAdjustTimeRangeToTimeline;
- (void)quickAdjustTimeRangeToSegment;
- (BOOL)hasChanges;
- (id)timelineVC;
- (void)setTimelineVC:(id)arg1;
- (id)quickAdjustButton;
- (void)setQuickAdjustButton:(id)arg1;
- (struct)initialTimeRange;
- (void)setInitialTimeRange:(struct)arg1;
- (void).cxx_destruct;
@end

