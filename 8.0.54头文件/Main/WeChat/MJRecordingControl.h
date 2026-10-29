@interface MJRecordingControl : UIControl
{
    id <MJRecordingControlDelegate> _delegate; // +0x8
    UIImage * _initialIcon; // +0x10
    UIImage * _recordingIcon; // +0x18
    UIImage * _cancelIcon; // +0x20
    NSString * _initialTitle; // +0x28
    NSString * _initialTips; // +0x30
    NSString * _recordingTitle; // +0x38
    NSString * _cancelTitle; // +0x40
    unsigned long long _recordingControlState; // +0x48
    MJGradientView * _recordingBackgroundView; // +0x50
    unsigned long long _options; // +0x58
    UIImageView * _recordingIconView; // +0x60
    UIView * _recordingShadowView; // +0x68
    MJGradientView * _cancelBackgroundView; // +0x70
    UIImageView * _cancelIconView; // +0x78
    UIView * _cancelShadowView; // +0x80
    UILabel * _initialTitleLabel; // +0x88
    UILabel * _initialTipsLabel; // +0x90
    UILabel * _recordingTitleLabel; // +0x98
    UILabel * _cancelTitleLabel; // +0xa0
    UIImpactFeedbackGenerator * _feedback; // +0xa8
}
- (id)initWithOptions:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)commonLayout;
- (void)resetToInitialState;
- (void)impactFeedback;
- (void)updateLevelMeterWithPeakPower:(float)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)_beginWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_continueWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_endWithPoint:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_cancel;
- (BOOL)_touchInsideRecording:(id)arg1 withEvent:(id)arg2;
- (BOOL)_touchInsideCancel:(id)arg1 withEvent:(id)arg2;
- (void)setInitialIcon:(id)arg1;
- (void)setRecordingIcon:(id)arg1;
- (void)setCancelIcon:(id)arg1;
- (void)setInitialTitle:(id)arg1;
- (void)setInitialTips:(id)arg1;
- (void)setRecordingTitle:(id)arg1;
- (void)setCancelTitle:(id)arg1;
- (void)_updateIcons;
- (void)_setupAllToInitialState;
- (void)_updateRecordingControlState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)_updateRecordingControlFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)_setupRecordingViewsToInitial;
- (void)_setupRecordingViewsToHold;
- (void)_setupRecordingViewsToCancel;
- (void)_setupCancelViewsToInitial;
- (void)_setupCancelViewsToHold;
- (void)_setupCancelViewsToHidden;
- (void)forceStopRecordingManually;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initialIcon;
- (id)recordingIcon;
- (id)cancelIcon;
- (id)initialTitle;
- (id)initialTips;
- (id)recordingTitle;
- (id)cancelTitle;
- (unsigned long long)recordingControlState;
- (id)recordingBackgroundView;
- (void)setRecordingBackgroundView:(id)arg1;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (id)recordingIconView;
- (void)setRecordingIconView:(id)arg1;
- (id)recordingShadowView;
- (void)setRecordingShadowView:(id)arg1;
- (id)cancelBackgroundView;
- (void)setCancelBackgroundView:(id)arg1;
- (id)cancelIconView;
- (void)setCancelIconView:(id)arg1;
- (id)cancelShadowView;
- (void)setCancelShadowView:(id)arg1;
- (id)initialTitleLabel;
- (void)setInitialTitleLabel:(id)arg1;
- (id)initialTipsLabel;
- (void)setInitialTipsLabel:(id)arg1;
- (id)recordingTitleLabel;
- (void)setRecordingTitleLabel:(id)arg1;
- (id)cancelTitleLabel;
- (void)setCancelTitleLabel:(id)arg1;
- (id)feedback;
- (void)setFeedback:(id)arg1;
- (void).cxx_destruct;
@end

