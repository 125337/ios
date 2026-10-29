@interface WCAdDraggableImageView : MMUIView
{
    BOOL _bOutFrameMode; // +0x8
    BOOL _isAnimating; // +0x9
    id <WCAdDraggableImageViewDelegate> _delegate; // +0x10
    WCAdFullCardDragImageGestureInfo * _dragImageInfo; // +0x18
    WCAdURLImageView * _imageView; // +0x20
    UIPanGestureRecognizer * _panImageGesture; // +0x28
    AdExposureTimerHelper * _dragImageTimer; // +0x30
    CGPoint _initialCenter; // +0x38
    CGRect _srcHitRect; // +0x48
    CGRect _destHitRect; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 dragImageInfo:(id)arg2;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)updateRectInfosWithSuperview:(id)arg1;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDraggable:(BOOL)arg1;
- (void)resetDraggableView:(BOOL)arg1;
- (void)addPanImageGesture;
- (void)removePanImageGesture;
- (CGRect)fetchConvertedRectFor:(CGRect)arg1 toView:(id)arg2;
- (void)setCenter:(CGPoint)arg1;
- (id)imageView;
- (id)dragImageTimer;
- (void)handlePanImageGesture:(id)arg1;
- (void)onPanGestureRecognizerDidEnd;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bOutFrameMode;
- (void)setBOutFrameMode:(BOOL)arg1;
- (id)dragImageInfo;
- (void)setDragImageInfo:(id)arg1;
- (void)setImageView:(id)arg1;
- (id)panImageGesture;
- (void)setPanImageGesture:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (CGPoint)initialCenter;
- (void)setInitialCenter:(CGPoint)arg1;
- (CGRect)srcHitRect;
- (void)setSrcHitRect:(CGRect)arg1;
- (CGRect)destHitRect;
- (void)setDestHitRect:(CGRect)arg1;
- (void)setDragImageTimer:(id)arg1;
- (void).cxx_destruct;
@end

