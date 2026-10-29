@interface WCFinderShareCustomTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _willPresent; // +0x8
    id <WCFinderShareAbstractCell> _shareCell; // +0x10
    NSString * _shareCellIdentifier; // +0x18
    CGRect _toRect; // +0x20
}
+ (void)bindTransitionAnimatorFromCell:(id)arg1 fromFeedId:(id)arg2 fromVC:(id)arg3 toVC:(id)arg4;
+ (CGRect)transitionRectForFeedId:(id)arg1 image:(id)arg2 inNav:(id)arg3;
- (id)initWithShareCell:(id)arg1 toRect:(CGRect)arg2;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (CGRect)displayImageFrameForDismiss:(id)arg1;
- (void)updateToRect:(CGRect)arg1;
- (CGRect)toRect;
- (void)setToRect:(CGRect)arg1;
- (BOOL)willPresent;
- (void)setWillPresent:(BOOL)arg1;
- (id)shareCell;
- (void)setShareCell:(id)arg1;
- (id)shareCellIdentifier;
- (void)setShareCellIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
