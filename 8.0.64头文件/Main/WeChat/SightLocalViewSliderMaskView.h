@interface SightLocalViewSliderMaskView : UIControl
{
    BOOL _isDurationMarkerEnabled; // +0x8
    BOOL _isStartTimeMarkerEnabled; // +0x9
    BOOL _isHighlightMaskEnabled; // +0xa
    BOOL _startFlagOnTouch; // +0xb
    BOOL _endFlagOnTouch; // +0xc
    BOOL _isInLargeMode; // +0xd
    id <SightLocalViewSliderMaskViewDelegate> _delegate; // +0x10
    double _totalDuration; // +0x18
    double _maxDuration; // +0x20
    double _minDuration; // +0x28
    long long _sideFlagStyle; // +0x30
    double _startTimeMarkerKeepTimeSec; // +0x38
    double _maskRectRadius; // +0x40
    UIColor * _customLineSliderBorderColor; // +0x48
    UIColor * _customHightlightMaskShadowColor; // +0x50
    UIColor * _customDurationMarkerViewColor; // +0x58
    UIColor * _customDurationMarkerLabelColor; // +0x60
    UIImageView * _startFlag; // +0x68
    UIImageView * _endFlag; // +0x70
    UIView * _playFlag; // +0x78
    UIColor * _lineColor; // +0x80
    UIView * _durationMarkerView; // +0x88
    UILabel * _durationMarkerLabel; // +0x90
    UIView * _startTimeMarkerView; // +0x98
    UILabel * _startTimeMarkerLabel; // +0xa0
    UIView * _highlightMaskLeftShadow; // +0xa8
    UIView * _highlightMaskRightShadow; // +0xb0
    WCVideoCropImageSliderTouch * _lastTouch; // +0xb8
    CGRect _validFrame; // +0xc0
}
- (void)setValidFrame:(CGRect)arg1;
- (void)_initViewIfNeeded;
- (void)_initStartFlagIfNeeded;
- (void)_initPlayFlagIfNeeded;
- (void)_initEndFlagIfNeeded;
- (void)_initDurationMarkerViewIfNeeded;
- (void)_relayoutDurationMarkerViewTimeSec:(double)arg1;
- (void)_initStartTimeMarkerViewIfNeeded;
- (void)_relayoutStartTimeMarkerViewTimeSec:(double)arg1;
- (void)_showStartTimeMarkerViewIfNeeded;
- (void)_hideStartTimeMarkerView;
- (void)_initHighlightMaskIfNeeded;
- (void)_relayoutHighlightMaskWithThumbListContentMinX:(double)arg1 thumbListContentMaxX:(double)arg2;
- (void)drawRect:(CGRect)arg1;
- (void)setTotalDuration:(double)arg1;
- (void)setMinDuration:(double)arg1;
- (void)setMaxDuration:(double)arg1;
- (double)minimumRange;
- (double)maxRange;
- (double)positionOfStartFlag;
- (double)positionOfPlayFlag;
- (double)positionOfEndFlag;
- (double)leftOfStartFlag;
- (double)rightOfEndFlag;
- (void)movePlayFlagFromPosition:(double)arg1 toPosition:(double)arg2 withinTime:(double)arg3;
- (void)stopMovingPlayFlag;
- (void)setStartFlagPosition:(double)arg1 andEndFlagPosition:(double)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (CGRect)extendedFrame:(CGRect)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)switchToLargeMode:(BOOL)arg1;
- (void)positionOfPlayFlagDidChange;
- (void)playFlagDidStopMovingAtStartFlag:(BOOL)arg1;
- (void)refreshThumbImagesCollectionViewContentInset;
- (double)_getSideFlagWidth;
- (id)_getSideFlagImage;
- (long long)_getSideFlagImageContentMode;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)validFrame;
- (double)totalDuration;
- (double)maxDuration;
- (double)minDuration;
- (long long)sideFlagStyle;
- (void)setSideFlagStyle:(long long)arg1;
- (BOOL)isDurationMarkerEnabled;
- (void)setIsDurationMarkerEnabled:(BOOL)arg1;
- (BOOL)isStartTimeMarkerEnabled;
- (void)setIsStartTimeMarkerEnabled:(BOOL)arg1;
- (double)startTimeMarkerKeepTimeSec;
- (void)setStartTimeMarkerKeepTimeSec:(double)arg1;
- (BOOL)isHighlightMaskEnabled;
- (void)setIsHighlightMaskEnabled:(BOOL)arg1;
- (double)maskRectRadius;
- (void)setMaskRectRadius:(double)arg1;
- (id)customLineSliderBorderColor;
- (void)setCustomLineSliderBorderColor:(id)arg1;
- (id)customHightlightMaskShadowColor;
- (void)setCustomHightlightMaskShadowColor:(id)arg1;
- (id)customDurationMarkerViewColor;
- (void)setCustomDurationMarkerViewColor:(id)arg1;
- (id)customDurationMarkerLabelColor;
- (void)setCustomDurationMarkerLabelColor:(id)arg1;
- (id)startFlag;
- (void)setStartFlag:(id)arg1;
- (id)endFlag;
- (void)setEndFlag:(id)arg1;
- (id)playFlag;
- (void)setPlayFlag:(id)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (id)durationMarkerView;
- (void)setDurationMarkerView:(id)arg1;
- (id)durationMarkerLabel;
- (void)setDurationMarkerLabel:(id)arg1;
- (id)startTimeMarkerView;
- (void)setStartTimeMarkerView:(id)arg1;
- (id)startTimeMarkerLabel;
- (void)setStartTimeMarkerLabel:(id)arg1;
- (id)highlightMaskLeftShadow;
- (void)setHighlightMaskLeftShadow:(id)arg1;
- (id)highlightMaskRightShadow;
- (void)setHighlightMaskRightShadow:(id)arg1;
- (BOOL)isStartFlagOnTouch;
- (void)setStartFlagOnTouch:(BOOL)arg1;
- (BOOL)isEndFlagOnTouch;
- (void)setEndFlagOnTouch:(BOOL)arg1;
- (id)lastTouch;
- (void)setLastTouch:(id)arg1;
- (BOOL)isInLargeMode;
- (void)setIsInLargeMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
