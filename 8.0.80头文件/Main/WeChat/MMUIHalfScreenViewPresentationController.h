@interface MMUIHalfScreenViewPresentationController : UIPresentationController
{
    BOOL _isHideBackgroupMask; // +0x8
    BOOL _isResetPresentedViewFrame; // +0x9
    double _presentedHeight; // +0x10
    double _presentedWidth; // +0x18
    double _presentedLeft; // +0x20
    UIView * _coverView; // +0x28
}
- (void)containerViewWillLayoutSubviews;
- (id)coverView;
- (void)coverViewClick;
- (double)presentedHeight;
- (void)setPresentedHeight:(double)arg1;
- (double)presentedWidth;
- (void)setPresentedWidth:(double)arg1;
- (double)presentedLeft;
- (void)setPresentedLeft:(double)arg1;
- (void)setCoverView:(id)arg1;
- (BOOL)isHideBackgroupMask;
- (void)setIsHideBackgroupMask:(BOOL)arg1;
- (BOOL)isResetPresentedViewFrame;
- (void)setIsResetPresentedViewFrame:(BOOL)arg1;
- (void).cxx_destruct;
@end
