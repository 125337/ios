@interface WCAdInteractionCoverView : UIView <WCAdInteractionDeviceMotionContainerDelegate>
{
    BOOL _isAnimating; // +0x8
    id <WCAdInteractionCoverViewDelegate> _delegate; // +0x10
    WCAdInteractionCoverInfo * _coverInfo; // +0x18
    UIView * _backgroundCircleView; // +0x20
    PAGView * _iconPAGView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _descLabel; // +0x38
    long long _viewState; // +0x40
    WCAdInteractionDeviceMotionContainer * _deviceMotionContainer; // +0x48
    NSNumber * _maxAccelerationInfo; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 coverInfo:(id)arg2;
- (void)buildContentViews;
- (void)generateDeviceMotionContainer;
- (void)activeCoverView;
- (void)suspendCoverView;
- (void)terminateCoverView;
- (void)resetCoverView;
- (id)backgroundCircleView;
- (id)iconPAGView;
- (id)titleLabel;
- (id)descLabel;
- (void)updateContentViewsWithState:(long long)arg1 animated:(BOOL)arg2;
- (void)updateContentViewsWithState:(long long)arg1;
- (void)updateIconAnimationWithState:(long long)arg1;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (BOOL)isPlayerPlaying;
- (void)updateMaxAccelerationWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)fetchMaxAccelerationInfo;
- (void)deviceMotionAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg1;
- (void)setBackgroundCircleView:(id)arg1;
- (void)setIconPAGView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (long long)viewState;
- (void)setViewState:(long long)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)deviceMotionContainer;
- (void)setDeviceMotionContainer:(id)arg1;
- (id)maxAccelerationInfo;
- (void)setMaxAccelerationInfo:(id)arg1;
- (void).cxx_destruct;
@end

