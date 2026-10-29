@interface OMJHandleBoxShadowView : UIView
{
    UIColor * _borderColor; // +0x8
    double _borderWidth; // +0x10
    double _borderCornerRadius; // +0x18
    double _modelScale; // +0x20
    double _modelRotation; // +0x28
    double _presentationScale; // +0x30
    double _presentationRotation; // +0x38
    CALayer * _borderLayer; // +0x40
    CGPoint _modelPosition; // +0x48
    CGPoint _presentationPosition; // +0x58
    CGSize _presentationSize; // +0x68
    CGSize _size; // +0x78
    UIEdgeInsets _presentationEdgeInsets; // +0x88
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setupBorderLayer;
- (void)layoutSubviews;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setBorderCornerRadius:(double)arg1;
- (void)updatePresentationWithPosition:(CGPoint)arg1 size:(CGSize)arg2 scale:(double)arg3 rotation:(double)arg4 edgeInsets:(UIEdgeInsets)arg5;
- (void)setPresentationScale:(double)arg1;
- (void)setPresentationRotation:(double)arg1;
- (void)setPresentationPosition:(CGPoint)arg1;
- (void)setPresentationSize:(CGSize)arg1;
- (void)setPresentationEdgeInsets:(UIEdgeInsets)arg1;
- (void)updateTransform;
- (id)borderColor;
- (double)borderWidth;
- (double)borderCornerRadius;
- (double)modelScale;
- (void)setModelScale:(double)arg1;
- (double)modelRotation;
- (void)setModelRotation:(double)arg1;
- (CGPoint)modelPosition;
- (void)setModelPosition:(CGPoint)arg1;
- (double)presentationScale;
- (double)presentationRotation;
- (CGPoint)presentationPosition;
- (CGSize)presentationSize;
- (UIEdgeInsets)presentationEdgeInsets;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (id)borderLayer;
- (void)setBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end

