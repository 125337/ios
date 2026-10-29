@interface WCFinderTextStateInvalidView : UIView <TextStateBaseMediaView>
{
    id <TextStateBaseMediaViewDelegate> textStateDelegate; // +0x8
    UIImageView * _iconImageView; // +0x10
    WCFinderFeedDetailStatusView * _statusView; // +0x18
    double _transitionProgress; // +0x20
}
- (void)setInvalidText:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (double)mediaAspectRatio;
- (void)startPlayMedia;
- (void)pausePlayMedia;
- (void)setTransitionProgress:(double)arg1;
- (id)textStateDelegate;
- (void)setTextStateDelegate:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (double)transitionProgress;
- (void).cxx_destruct;
@end
