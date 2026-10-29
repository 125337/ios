@interface WAMainFrameAIUseWeAppASRBoard : MMWindowViewController
{
    BOOL _lastNotifiedVisibility; // +0x7c
    BOOL _micConnected; // +0x7d
    long long _state; // +0x80
    id /* block */ _onBoardVisibilityChanged; // +0x88
    id /* block */ _onChatBotSessionStarted; // +0x90
    id /* block */ _onChatBotPresentHalfScreenDone; // +0x98
    id /* block */ _onChatBotSessionEnded; // +0xa0
    id /* block */ _srcInfoParamsProvider; // +0xa8
    NSString * _chatBotSessionEndErrorMsg; // +0xb0
    long long _chatBotSessionEndDecision; // +0xb8
    double _longPressBeginY; // +0xc0
    double _pressBeganMediaTime; // +0xc8
    unsigned long long _dismissGeneration; // +0xd0
    WAMainFrameChatBot * _chatBot; // +0xd8
    UIImpactFeedbackGenerator * _hapticGenerator; // +0xe0
    CAShapeLayer * _arcLayer; // +0xe8
    WCRecordFeedbackView * _feedbackView; // +0xf0
    UILabel * _hintLabel; // +0xf8
    MMUIActivityIndicatorView * _indicatorView; // +0x100
    MMTimer * _renderTimer; // +0x108
}
+ (id)greenArcColor;
+ (id)grayArcColor;
+ (id)redArcColor;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupViews;
- (void)layoutBoardSubviews;
- (void)handleLongPressGesture:(id)arg1;
- (id)chatBot;
- (void)setArcFillColor:(id)arg1;
- (void)updateState:(long long)arg1;
- (void)showBoard;
- (void)dismissBoard;
- (void)fadeOutBoardForHalfScreen;
- (void)dismissBoardWithFadeOut;
- (void)notifyBoardVisibilityChanged:(BOOL)arg1;
- (void)startRenderTimer;
- (void)onRenderTimer:(id)arg1;
- (void)stopRenderTimer;
- (long long)state;
- (void)setState:(long long)arg1;
- (id /* block */)onBoardVisibilityChanged;
- (void)setOnBoardVisibilityChanged:(id /* block */)arg1;
- (id /* block */)onChatBotSessionStarted;
- (void)setOnChatBotSessionStarted:(id /* block */)arg1;
- (id /* block */)onChatBotPresentHalfScreenDone;
- (void)setOnChatBotPresentHalfScreenDone:(id /* block */)arg1;
- (id /* block */)onChatBotSessionEnded;
- (void)setOnChatBotSessionEnded:(id /* block */)arg1;
- (id /* block */)srcInfoParamsProvider;
- (void)setSrcInfoParamsProvider:(id /* block */)arg1;
- (id)chatBotSessionEndErrorMsg;
- (void)setChatBotSessionEndErrorMsg:(id)arg1;
- (long long)chatBotSessionEndDecision;
- (void)setChatBotSessionEndDecision:(long long)arg1;
- (double)longPressBeginY;
- (void)setLongPressBeginY:(double)arg1;
- (double)pressBeganMediaTime;
- (void)setPressBeganMediaTime:(double)arg1;
- (BOOL)lastNotifiedVisibility;
- (void)setLastNotifiedVisibility:(BOOL)arg1;
- (BOOL)micConnected;
- (void)setMicConnected:(BOOL)arg1;
- (unsigned long long)dismissGeneration;
- (void)setDismissGeneration:(unsigned long long)arg1;
- (void)setChatBot:(id)arg1;
- (id)hapticGenerator;
- (void)setHapticGenerator:(id)arg1;
- (id)arcLayer;
- (void)setArcLayer:(id)arg1;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)renderTimer;
- (void)setRenderTimer:(id)arg1;
- (void).cxx_destruct;
@end
