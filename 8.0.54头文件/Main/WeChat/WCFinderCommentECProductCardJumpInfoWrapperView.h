@interface WCFinderCommentECProductCardJumpInfoWrapperView : UIView <WCFinderJumpInfoViewProtocol, WCFinderJumpInfoInteractable>
{
    id <WCFinderJumpInfoInteractDelegate> _interactDelegate; // +0x8
    double _containerWidth; // +0x10
    WCFinderJumpInfo * _jumpInfo; // +0x18
    WCFinderCommentECProductCardView * _productCard; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupView;
- (void)_updateLayout;
- (void)didTapCard;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (int)showPosition;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (id)productCard;
- (id)interactDelegate;
- (void)setInteractDelegate:(id)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void)setProductCard:(id)arg1;
- (void).cxx_destruct;
@end

