@interface WCNativeAlbumTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    id <UIViewControllerContextTransitioning> _context; // +0x8
    UIViewPropertyAnimator * _navigationAnimator; // +0x10
    UIView * _fromView; // +0x18
    UIView * _toView; // +0x20
    UIView * _mediaView; // +0x28
    UIView * _thumbnail; // +0x30
    UIView * _overlay; // +0x38
    UIView * _hero; // +0x40
    UIColor * _fromBackgroundColor; // +0x48
    double _fromAlpha; // +0x50
    double _toAlpha; // +0x58
    BOOL _fromClipsToBounds; // +0x60
    BOOL _mediaWasHidden; // +0x61
    BOOL _thumbnailWasHidden; // +0x62
    BOOL _completed; // +0x63
    long long _decision; // +0x68
    double _progress; // +0x70
    BOOL _presenting; // +0x78
    BOOL _interactive; // +0x79
    BOOL _settling; // +0x7a
    UIViewController * _animatedTransitionRespondViewController; // +0x80
    WCNativeAlbumTitleTransition * _titleTransition; // +0x88
    id /* block */ _thumbnailProvider; // +0x90
    id /* block */ _mediaViewProvider; // +0x98
    id /* block */ _mediaImageProvider; // +0xa0
    id /* block */ _presentationOverlayHostProvider; // +0xa8
    id /* block */ _completionHandler; // +0xb0
}
- (double)transitionDuration:(id)arg1;
- (void)prepareTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animatePresentationTransition:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)updateProgress:(double)arg1;
- (BOOL)isUsableRect:(CGRect)arg1;
- (void)complete:(BOOL)arg1;
- (void)finish;
- (void)cancel;
- (void)containerGeometryDidChange;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)presenting;
- (void)setPresenting:(BOOL)arg1;
- (BOOL)interactive;
- (void)setInteractive:(BOOL)arg1;
- (BOOL)settling;
- (id)titleTransition;
- (void)setTitleTransition:(id)arg1;
- (id /* block */)thumbnailProvider;
- (void)setThumbnailProvider:(id /* block */)arg1;
- (id /* block */)mediaViewProvider;
- (void)setMediaViewProvider:(id /* block */)arg1;
- (id /* block */)mediaImageProvider;
- (void)setMediaImageProvider:(id /* block */)arg1;
- (id /* block */)presentationOverlayHostProvider;
- (void)setPresentationOverlayHostProvider:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
