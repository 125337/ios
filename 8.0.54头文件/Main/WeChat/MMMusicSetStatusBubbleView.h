@interface MMMusicSetStatusBubbleView : MMUIView
{
    id <MMMusicSetStatusBubbleViewDelegate> _delegate; // +0x8
    MMUIButton * _setStatusContainerBtn; // +0x10
    MMUILabel * _prefixStatusLabel; // +0x18
    UIImageView * _statusLogoImageView; // +0x20
    MMUILabel * _suffixStatusLabel; // +0x28
    MMMusicSetStatusBubbleTriangleView * _triangleView; // +0x30
    CGRect _anchorRect; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)internalInit;
- (void)setTriangleAnchorRect:(CGRect)arg1;
- (id)setStatusContainerBtn;
- (id)prefixStatusLabel;
- (id)statusLogoImageView;
- (id)suffixStatusLabel;
- (id)triangleView;
- (void)layoutSubviews;
- (void)handleSetStatusContainerButtonClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setSetStatusContainerBtn:(id)arg1;
- (void)setPrefixStatusLabel:(id)arg1;
- (void)setStatusLogoImageView:(id)arg1;
- (void)setSuffixStatusLabel:(id)arg1;
- (void)setTriangleView:(id)arg1;
- (CGRect)anchorRect;
- (void)setAnchorRect:(CGRect)arg1;
- (void).cxx_destruct;
@end

