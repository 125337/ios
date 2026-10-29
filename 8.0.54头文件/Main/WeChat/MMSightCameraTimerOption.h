@interface MMSightCameraTimerOption : NSObject <MMSightCameraOptionProtocol>
{
    long long _timerType; // +0x8
    UILabel * _counterLabel; // +0x10
    id <MMSightCameraTimerOptionDelegate> _delegate; // +0x18
    WCElasticLayoutView * _elasticLayoutView; // +0x20
    MMUIButton * _iconButton; // +0x28
    MMUIButton * _timerButton_None; // +0x30
    MMUIButton * _timerButton_3s; // +0x38
    MMUIButton * _timerButton_10s; // +0x40
    long long _currentOrientation; // +0x48
    CGRect _containerFrame; // +0x50
}
+ (long long)convertTimeSecFromTimerType:(long long)arg1;
- (id)initWithContainerFrame:(CGRect)arg1;
- (void)dealloc;
- (void)startTimer;
- (void)cancelTimer;
- (void)autoFitCounterLabelToWidth:(double)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)optionView;
- (void)rotateToOrientation:(long long)arg1;
- (void)_onClickIconView;
- (void)_onClickTimerButton_None;
- (void)_onClickTimerButton_3s;
- (void)_onClickTimerButton_10s;
- (void)_cancelTimer;
- (void)_countTimerAtTimeSecNum:(id)arg1;
- (void)_onTimerTypeChanged:(long long)arg1;
- (void)_transformViewsToIdentityAnimated:(BOOL)arg1;
- (void)_transformViewsToOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)_initViews;
- (void)_initCounterLabel;
- (long long)timerType;
- (void)setTimerType:(long long)arg1;
- (id)counterLabel;
- (void)setCounterLabel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (id)elasticLayoutView;
- (void)setElasticLayoutView:(id)arg1;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (id)timerButton_None;
- (void)setTimerButton_None:(id)arg1;
- (id)timerButton_3s;
- (void)setTimerButton_3s:(id)arg1;
- (id)timerButton_10s;
- (void)setTimerButton_10s:(id)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

