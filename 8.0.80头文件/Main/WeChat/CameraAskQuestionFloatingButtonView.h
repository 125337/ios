@interface CameraAskQuestionFloatingButtonView : UIView <PAGViewListener>
{
    BOOL _hasAppliedViewModel; // +0x8
    BOOL _appliedShowNew; // +0x9
    BOOL _appliedGetAnimationAlwaysEnabled; // +0xa
    BOOL _lookupAnimationActive; // +0xb
    BOOL _getAnimationActive; // +0xc
    BOOL _hasStartedGetAnimation; // +0xd
    BOOL _pendingGetAnimationForIntentResult; // +0xe
    UIButton * _topButton; // +0x10
    UIView * _blurView; // +0x18
    UIImageView * _opIconView; // +0x20
    MMUILabel * _introLbl; // +0x28
    MMUILabel * _subtitleLbl; // +0x30
    UIView * _highlightMaskView; // +0x38
    CameraAskQuestionFloatingButtonViewModel * _viewModel; // +0x40
    double _maxWidth; // +0x48
    double _fixedWidth; // +0x50
    PAGView * _lookupPAGView; // +0x58
    PAGView * _getPAGView; // +0x60
    MMBadgeView * _badgeNewView; // +0x68
    long long _appliedIntentType; // +0x70
    double _appliedGetAnimationInitialPlayDelay; // +0x78
    unsigned long long _lookupAnimationCompletedCount; // +0x80
    unsigned long long _lookupAnimationGeneration; // +0x88
    unsigned long long _getAnimationGeneration; // +0x90
    double _getAnimationInitialPlayDeadline; // +0x98
    id /* block */ _getAnimationPlayAllowedBlock; // +0xa0
}
+ (CGSize)defaultSize;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setOpIcon:(id)arg1;
- (void)setLookupPAGView:(id)arg1 getPAGView:(id)arg2;
- (void)preparePAGView:(id)arg1;
- (void)cleanUpPAGView:(id)arg1;
- (void)setIntroText:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setSubtitleText:(id)arg1 style:(unsigned long long)arg2;
- (void)setMaxWidth:(double)arg1;
- (void)setFixedWidth:(double)arg1;
- (void)fixButtonWidth;
- (void)updateAccessibilityLabel;
- (id)currentIconView;
- (void)initHighlightedBlock;
- (void)setViewModel:(id)arg1;
- (void)setShowNew:(BOOL)arg1;
- (void)setIntentType:(long long)arg1;
- (void)setGetAnimationAlwaysEnabled:(BOOL)arg1 initialPlayDelay:(double)arg2;
- (void)addGetAnimationPlayAllowedBlock:(id /* block */)arg1;
- (void)updateUIStateWithViewModel;
- (void)startLookupAnimationFlow;
- (void)playLookupAnimationForGeneration:(unsigned long long)arg1;
- (void)finishLookupAnimationFlow;
- (void)restartGetAnimationFlowForCurrentIntent;
- (void)startGetAnimationForIntentResult;
- (void)stopGetAnimationFlow;
- (void)playGetAnimationForGeneration:(unsigned long long)arg1;
- (void)showLookupPAGView;
- (void)showGetPAGView;
- (void)setDisplayedPAGView:(id)arg1;
- (void)invalidatePAGAnimationFlows;
- (void)onAnimationEnd:(id)arg1;
- (void)handleLookupAnimationEnd;
- (void)handleGetAnimationEnd;
- (void)scheduleGetAnimationForGeneration:(unsigned long long)arg1;
- (void)ensureBadgeNewViewIfNeeded;
- (void)dealloc;
- (id)topButton;
- (void)setTopButton:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)opIconView;
- (void)setOpIconView:(id)arg1;
- (id)introLbl;
- (void)setIntroLbl:(id)arg1;
- (id)subtitleLbl;
- (void)setSubtitleLbl:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (id)viewModel;
- (double)maxWidth;
- (double)fixedWidth;
- (id)lookupPAGView;
- (void)setLookupPAGView:(id)arg1;
- (id)getPAGView;
- (void)setGetPAGView:(id)arg1;
- (id)badgeNewView;
- (void)setBadgeNewView:(id)arg1;
- (BOOL)hasAppliedViewModel;
- (void)setHasAppliedViewModel:(BOOL)arg1;
- (long long)appliedIntentType;
- (void)setAppliedIntentType:(long long)arg1;
- (BOOL)appliedShowNew;
- (void)setAppliedShowNew:(BOOL)arg1;
- (BOOL)appliedGetAnimationAlwaysEnabled;
- (void)setAppliedGetAnimationAlwaysEnabled:(BOOL)arg1;
- (double)appliedGetAnimationInitialPlayDelay;
- (void)setAppliedGetAnimationInitialPlayDelay:(double)arg1;
- (BOOL)lookupAnimationActive;
- (void)setLookupAnimationActive:(BOOL)arg1;
- (unsigned long long)lookupAnimationCompletedCount;
- (void)setLookupAnimationCompletedCount:(unsigned long long)arg1;
- (unsigned long long)lookupAnimationGeneration;
- (void)setLookupAnimationGeneration:(unsigned long long)arg1;
- (BOOL)getAnimationActive;
- (void)setGetAnimationActive:(BOOL)arg1;
- (unsigned long long)getAnimationGeneration;
- (void)setGetAnimationGeneration:(unsigned long long)arg1;
- (double)getAnimationInitialPlayDeadline;
- (void)setGetAnimationInitialPlayDeadline:(double)arg1;
- (BOOL)hasStartedGetAnimation;
- (void)setHasStartedGetAnimation:(BOOL)arg1;
- (BOOL)pendingGetAnimationForIntentResult;
- (void)setPendingGetAnimationForIntentResult:(BOOL)arg1;
- (id /* block */)getAnimationPlayAllowedBlock;
- (void)setGetAnimationPlayAllowedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
