@interface TAVMediaMetalView : UIView <TAVMediaViewProtocol>
{
    BOOL _shouldAnimation; // +0x8
    BOOL _readyForDisplay; // +0x9
    unsigned long long _fillMode; // +0x10
    AVPlayer * _player; // +0x18
    MTKView * _mtkView; // +0x20
    NSLayoutConstraint * _widthConstraint; // +0x28
    NSLayoutConstraint * _heightConstraint; // +0x30
    NSLayoutConstraint * _centerXConstraint; // +0x38
    NSLayoutConstraint * _centerYConstraint; // +0x40
    CGSize _nextMTKViewSize; // +0x48
    CGRect _videoRect; // +0x58
}
+ (BOOL)requiresConstraintBasedLayout;
- (id)initWithFrame:(CGRect)arg1;
- (void)setNextMTKViewSize:(CGSize)arg1;
- (void)updateConstraintsAnimation;
- (void)updateInputTextureSize:(CGSize)arg1;
- (void)updateConstraints;
- (void)setPaused:(BOOL)arg1;
- (BOOL)isPaused;
- (void)refreshView;
- (unsigned long long)fillMode;
- (void)setFillMode:(unsigned long long)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (BOOL)shouldAnimation;
- (void)setShouldAnimation:(BOOL)arg1;
- (id)mtkView;
- (void)setMtkView:(id)arg1;
- (BOOL)isReadyForDisplay;
- (void)setReadyForDisplay:(BOOL)arg1;
- (id)widthConstraint;
- (void)setWidthConstraint:(id)arg1;
- (id)heightConstraint;
- (void)setHeightConstraint:(id)arg1;
- (id)centerXConstraint;
- (void)setCenterXConstraint:(id)arg1;
- (id)centerYConstraint;
- (void)setCenterYConstraint:(id)arg1;
- (CGSize)nextMTKViewSize;
- (CGRect)videoRect;
- (void)setVideoRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
