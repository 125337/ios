@interface MJPublisherPlaybackProgressSlider : MJPublisherSlider
{
    MJTimecodeView * _timeCodeView; // +0x8
    MMUIView * _expandedCircleView; // +0x10
    struct _time; // +0x18
    struct _duration; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setTime:(struct)arg1;
- (void)setDuration:(struct)arg1;
- (void)updateTimeCodeView;
- (void)updateThumbPosition:(BOOL)arg1;
- (void)showExpandedCircleAnimated:(BOOL)arg1;
- (void)showTimeCodeAnimated:(BOOL)arg1;
- (void)hideExpandedCircleAnimated:(BOOL)arg1;
- (void)hideTimeCodeAnimated:(BOOL)arg1;
- (struct)time;
- (struct)duration;
- (id)timeCodeView;
- (void)setTimeCodeView:(id)arg1;
- (id)expandedCircleView;
- (void)setExpandedCircleView:(id)arg1;
- (void).cxx_destruct;
@end
