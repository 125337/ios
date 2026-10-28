@interface MMAssetUserActionTipsView : MMRectTriangleArrowView <UIGestureRecognizerDelegate>
{
    id /* block */ _clickBlock; // +0x8
    id /* block */ _closeBlock; // +0x10
    id /* block */ _displayTimeConsumeCompleteBlock; // +0x18
    double _displayDuration; // +0x20
    InteractionLabel * _tipsLabel; // +0x28
    MMUIButton * _closeButton; // +0x30
    MMTimer * _displayTimer; // +0x38
    UIImageView * _leftFireworksImageView; // +0x40
    UIImageView * _rightFireworksImageView; // +0x48
    CGSize _lastSize; // +0x50
}
- (id)init;
- (void)dealloc;
- (void)updateWithTips:(id)arg1;
- (void)didAppear;
- (void)didDisappear;
- (void)loadView;
- (void)loadFireworksImageView;
- (void)loadTipsLabel;
- (void)loadCloseButton;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (double)selfCornerRadius;
- (void)onClickTips;
- (void)onClickCloseButton;
- (void)onDisplayTimeConsumedComplete;
- (void)animationShowWithCompletionBlock:(id /* block */)arg1;
- (void)animationHideWithCompletionBlock:(id /* block */)arg1;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (id /* block */)displayTimeConsumeCompleteBlock;
- (void)setDisplayTimeConsumeCompleteBlock:(id /* block */)arg1;
- (double)displayDuration;
- (void)setDisplayDuration:(double)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)displayTimer;
- (void)setDisplayTimer:(id)arg1;
- (id)leftFireworksImageView;
- (void)setLeftFireworksImageView:(id)arg1;
- (id)rightFireworksImageView;
- (void)setRightFireworksImageView:(id)arg1;
- (CGSize)lastSize;
- (void)setLastSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
