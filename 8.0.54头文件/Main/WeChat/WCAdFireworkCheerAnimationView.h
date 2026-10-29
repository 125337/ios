@interface WCAdFireworkCheerAnimationView : MMUIWindow <PAGViewListener, CAAnimationDelegate>
{
    BOOL _isHideAnimating; // +0x8
    BOOL _closedFlag; // +0x9
    id <WCAdFireworkCheerAnimationViewDelegate> _delegate; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCAdPagInfo * _pagInfo; // +0x20
    unsigned long long _contentItemScene; // +0x28
    double _canCloseDelayTime; // +0x30
    double _vibrateDelayTime; // +0x38
    PAGView * _animationPagView; // +0x40
    UIButton * _maskButtonView; // +0x48
    unsigned long long _playStartTimestampMs; // +0x50
}
- (id)initWithPagInfo:(id)arg1 canCloseDelayTime:(double)arg2 vibrateDelayTime:(double)arg3 dataItem:(id)arg4 contentItemScene:(unsigned long long)arg5;
- (void)dealloc;
- (void)initRootViewController;
- (void)initView;
- (void)initAnimationPagView;
- (void)initMaskButtonView;
- (void)onClickMaskButton:(id)arg1;
- (void)tryToStartHideAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)playAnimation;
- (BOOL)isAnimationPlaying;
- (void)closeView;
- (void)fireworkCheerExplode;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)pagInfo;
- (void)setPagInfo:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (double)canCloseDelayTime;
- (void)setCanCloseDelayTime:(double)arg1;
- (double)vibrateDelayTime;
- (void)setVibrateDelayTime:(double)arg1;
- (id)animationPagView;
- (void)setAnimationPagView:(id)arg1;
- (id)maskButtonView;
- (void)setMaskButtonView:(id)arg1;
- (unsigned long long)playStartTimestampMs;
- (void)setPlayStartTimestampMs:(unsigned long long)arg1;
- (BOOL)isHideAnimating;
- (void)setIsHideAnimating:(BOOL)arg1;
- (BOOL)closedFlag;
- (void)setClosedFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

