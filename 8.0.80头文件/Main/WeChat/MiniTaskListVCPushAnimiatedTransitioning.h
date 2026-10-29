@interface MiniTaskListVCPushAnimiatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting; // +0x8
    BOOL _isPresent; // +0x9
    unsigned int _animationType; // +0xc
    UIViewController * animatedTransitionRespondViewController; // +0x10
    UIView * _backgroundView; // +0x18
    UIImageView * _fakeSnapshot; // +0x20
    UIView * _fakeSnapshotMask; // +0x28
    MinimizeTaskData * _launchTaskData; // +0x30
    id <MiniTaskTransitionAnimationDelegate> _delegate; // +0x38
    UIView * _fakeSnapshotShadowView; // +0x40
    UIView * _educationLabel; // +0x48
    UIView * _exitButton; // +0x50
    double _fakeSnapshotWidth; // +0x58
    UIImage * _guideContextfakeSnapshotImage; // +0x60
    UILabel * _guideContextEducationLabel; // +0x68
    UIImage * _presetSnapshotImage; // +0x70
    double _pageRegionCornerRadius; // +0x78
    UIView * _pageRegionCoverView; // +0x80
    UIEdgeInsets _pageRegionInsets; // +0x88
}
- (id)initWithViewController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (BOOL)isPresent;
- (void)setIsPresent:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)fakeSnapshot;
- (void)setFakeSnapshot:(id)arg1;
- (id)fakeSnapshotMask;
- (void)setFakeSnapshotMask:(id)arg1;
- (id)launchTaskData;
- (void)setLaunchTaskData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)animationType;
- (void)setAnimationType:(unsigned int)arg1;
- (id)fakeSnapshotShadowView;
- (void)setFakeSnapshotShadowView:(id)arg1;
- (id)educationLabel;
- (void)setEducationLabel:(id)arg1;
- (id)exitButton;
- (void)setExitButton:(id)arg1;
- (double)fakeSnapshotWidth;
- (void)setFakeSnapshotWidth:(double)arg1;
- (id)guideContextfakeSnapshotImage;
- (void)setGuideContextfakeSnapshotImage:(id)arg1;
- (id)guideContextEducationLabel;
- (void)setGuideContextEducationLabel:(id)arg1;
- (id)presetSnapshotImage;
- (void)setPresetSnapshotImage:(id)arg1;
- (UIEdgeInsets)pageRegionInsets;
- (void)setPageRegionInsets:(UIEdgeInsets)arg1;
- (double)pageRegionCornerRadius;
- (void)setPageRegionCornerRadius:(double)arg1;
- (id)pageRegionCoverView;
- (void)setPageRegionCoverView:(id)arg1;
- (void).cxx_destruct;
@end
