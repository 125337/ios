@interface MMMusicMVEditorCardSlider : UIView
{
    BOOL _isSliding; // +0x8
    float _startTime; // +0xc
    float _endTime; // +0x10
    id <MMMusicMVEditorCardSliderDelegate> _delegate; // +0x18
    MMMusicMVEditorCardThickSlider * _slider; // +0x20
    UILabel * _curTimeLabel; // +0x28
    UILabel * _endTimeLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)handleSliderValueChanged:(id)arg1 forEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)trySetSliderValue:(float)arg1;
- (void)setStartTime:(float)arg1;
- (void)setEndTime:(float)arg1;
- (void)setLabelHidden:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (float)startTime;
- (float)endTime;
- (id)slider;
- (void)setSlider:(id)arg1;
- (id)curTimeLabel;
- (void)setCurTimeLabel:(id)arg1;
- (id)endTimeLabel;
- (void)setEndTimeLabel:(id)arg1;
- (BOOL)isSliding;
- (void)setIsSliding:(BOOL)arg1;
- (void).cxx_destruct;
@end
