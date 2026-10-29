@interface ShakeMainView : MMUIScrollView
{
    BOOL m_bAnimating; // +0x8
    id <ShakeMainFrameDelegate> m_delegate; // +0x10
    double m_middleY; // +0x18
    UIImageView * _imageViewUp; // +0x20
    UIImageView * _imageViewDown; // +0x28
    UIView * _bkgViewUp; // +0x30
    UIView * _bkgViewDown; // +0x38
    UIImageView * _defaultImageView; // +0x40
    CirclesView * _circlesView; // +0x48
    MMUILabel * _stateLabel; // +0x50
}
- (void)setM_Delegate:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateViewForNormal;
- (void)updateViewForLoading;
- (void)setErrorMsg:(id)arg1;
- (id)defaultImageView;
- (id)circlesView;
- (id)bkgViewUp;
- (id)bkgViewDown;
- (id)imageViewUp;
- (id)imageViewDown;
- (id)stateLabel;
- (void)stopAllAnimation;
- (void)startAnimationSplit;
- (void)onSplitAnimationEnd;
- (void)startAnimationMerge:(id /* block */)arg1;
- (void)startBackgroundAnimate;
- (void)stopBackgroundAnimate;
- (BOOL)bIsAnimating;
- (void)setImageViewUp:(id)arg1;
- (void)setImageViewDown:(id)arg1;
- (void)setBkgViewUp:(id)arg1;
- (void)setBkgViewDown:(id)arg1;
- (void)setDefaultImageView:(id)arg1;
- (void)setCirclesView:(id)arg1;
- (void)setStateLabel:(id)arg1;
- (void).cxx_destruct;
@end
