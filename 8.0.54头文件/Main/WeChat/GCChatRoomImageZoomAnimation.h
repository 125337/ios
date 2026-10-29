@interface GCChatRoomImageZoomAnimation : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIImage * _image; // +0x8
    UIImage * _blurImage; // +0x10
    long long _operation; // +0x18
    NSString * _sourcePosIdentifier; // +0x20
    id <GCChatRoomImageZoomAnimationDelegate> _zoomAnimationDelegate; // +0x28
    CGRect _imgViewFrame; // +0x30
}
- (double)transitionDuration:(id)arg1;
- (BOOL)isPushInAnimation;
- (id)getImgCopy:(id)arg1 frame:(CGRect)arg2 containerView:(id)arg3;
- (double)getMaxScaleFromSrcFrame:(CGRect)arg1 targetFrame:(CGRect)arg2;
- (void)animateTransition:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)blurImage;
- (void)setBlurImage:(id)arg1;
- (CGRect)imgViewFrame;
- (void)setImgViewFrame:(CGRect)arg1;
- (long long)operation;
- (void)setOperation:(long long)arg1;
- (id)sourcePosIdentifier;
- (void)setSourcePosIdentifier:(id)arg1;
- (id)zoomAnimationDelegate;
- (void)setZoomAnimationDelegate:(id)arg1;
- (void).cxx_destruct;
@end

