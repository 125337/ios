@interface MMLiveCustomTransition : NSObject
{
    id <MMLiveCustomTransitionDelegate> _delegate; // +0x8
}
- (long long)getCurrentTransitionState;
- (CGRect)getMinimizeFrame;
- (CGRect)getMinimizeLiveFrameInScreen;
- (long long)getPreviousOrientation;
- (id)getSnapShotImage;
- (CGRect)getMinimizeFromRect;
- (CGRect)getMaximizeToRect;
- (id)getExtendTransitionContainerBackView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

