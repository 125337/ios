@interface CBTASRBoard : MMWindowViewController
{
    BOOL _micConnected; // +0x7c
    BOOL _surfaceApplied; // +0x7d
    BOOL _appliedSurfaceIsDark; // +0x7e
    UIColor * _appliedMaskColor; // +0x80
    BOOL _pendingShowAnimation; // +0x88
    BOOL _hasLaidOutBoardSubviews; // +0x89
    CGPoint _arcCenterCache; // +0x90
    UIBezierPath * _arcFinalPathCache; // +0xa0
    UILongPressGestureRecognizer * _attachedLongPressGesture; // +0xa8
    BOOL _showLoadingIndicatorOnIdle; // +0xb0
    BOOL _lastNotifiedVisibility; // +0xb1
    BOOL _externalPeakPowerEnabled; // +0xb2
    long long _state; // +0xb8
    long long _colorMode; // +0xc0
    UIColor * _maskColor; // +0xc8
    UIColor * _recordingHintTextColor; // +0xd0
    double _boardHeight; // +0xd8
    double _arcTopOffsetFromBottom; // +0xe0
    NSString * _recordingHintText; // +0xe8
    NSString * _cancelHintText; // +0xf0
    id /* block */ _onBoardVisibilityChanged; // +0xf8
    id /* block */ _onSessionStartRequested; // +0x100
    id /* block */ _onVoiceSubmitRequested; // +0x108
    id /* block */ _onSessionCancelRequested; // +0x110
    NSString * _sessionID; // +0x118
    id /* block */ _onSessionStarted; // +0x120
    id /* block */ _optionsProvider; // +0x128
    double _longPressBeginY; // +0x130
    UIImpactFeedbackGenerator * _hapticGenerator; // +0x138
    CAShapeLayer * _arcLayer; // +0x140
    WCRecordFeedbackView * _feedbackView; // +0x148
    UIView * _waitingPillarsView; // +0x150
    NSArray * _waitingPillars; // +0x158
    UILabel * _hintLabel; // +0x160
    MMUIActivityIndicatorView * _indicatorView; // +0x168
    MMTimer * _renderTimer; // +0x170
    CGPoint _boardPosition; // +0x178
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)refreshBoardSurface;
- (void)setupViews;
- (CGRect)boardFrame;
- (void)layoutBoardSubviews;
- (void)setColorMode:(long long)arg1;
- (void)setMaskColor:(id)arg1;
- (void)setBoardPosition:(CGPoint)arg1;
- (void)setBoardHeight:(double)arg1;
- (void)setArcTopOffsetFromBottom:(double)arg1;
- (void)setRecordingHintText:(id)arg1;
- (void)setCancelHintText:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)attachLongPressToView:(id)arg1;
- (BOOL)micConnected;
- (void)setMicConnected:(BOOL)arg1;
- (void)enterProcessing;
- (void)setPeakPower:(float)arg1;
- (void)setArcFillColor:(id)arg1;
- (void)updateState:(long long)arg1;
- (BOOL)isEffectiveDarkMode;
- (id)greenArcColor;
- (id)grayArcColor;
- (id)redArcColor;
- (void)mm_onColorAppearanceDidChange;
- (void)showBoard;
- (void)startArcShowAnimation;
- (void)dismissBoard;
- (void)notifyBoardVisibilityChanged:(BOOL)arg1;
- (void)startRenderTimer;
- (void)onRenderTimer:(id)arg1;
- (void)stopRenderTimer;
- (long long)state;
- (void)setState:(long long)arg1;
- (long long)colorMode;
- (CGPoint)boardPosition;
- (id)maskColor;
- (id)recordingHintTextColor;
- (void)setRecordingHintTextColor:(id)arg1;
- (BOOL)showLoadingIndicatorOnIdle;
- (void)setShowLoadingIndicatorOnIdle:(BOOL)arg1;
- (double)boardHeight;
- (double)arcTopOffsetFromBottom;
- (id)recordingHintText;
- (id)cancelHintText;
- (id /* block */)onBoardVisibilityChanged;
- (void)setOnBoardVisibilityChanged:(id /* block */)arg1;
- (id /* block */)onSessionStartRequested;
- (void)setOnSessionStartRequested:(id /* block */)arg1;
- (id /* block */)onVoiceSubmitRequested;
- (void)setOnVoiceSubmitRequested:(id /* block */)arg1;
- (id /* block */)onSessionCancelRequested;
- (void)setOnSessionCancelRequested:(id /* block */)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id /* block */)onSessionStarted;
- (void)setOnSessionStarted:(id /* block */)arg1;
- (id /* block */)optionsProvider;
- (void)setOptionsProvider:(id /* block */)arg1;
- (double)longPressBeginY;
- (void)setLongPressBeginY:(double)arg1;
- (BOOL)lastNotifiedVisibility;
- (void)setLastNotifiedVisibility:(BOOL)arg1;
- (BOOL)externalPeakPowerEnabled;
- (void)setExternalPeakPowerEnabled:(BOOL)arg1;
- (id)hapticGenerator;
- (void)setHapticGenerator:(id)arg1;
- (id)arcLayer;
- (void)setArcLayer:(id)arg1;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg1;
- (id)waitingPillarsView;
- (void)setWaitingPillarsView:(id)arg1;
- (id)waitingPillars;
- (void)setWaitingPillars:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)renderTimer;
- (void)setRenderTimer:(id)arg1;
- (void).cxx_destruct;
@end
