@interface MMLongImageCropSliderBarView : UIControl
{
    BOOL _onTopEdgeActive; // +0x8
    BOOL _onBottomEdgeActive; // +0x9
    UIImageView * _imageView; // +0x10
    id <MMLongImageCropSliderBarViewDelegate> _delegate; // +0x18
    UIImage * _image; // +0x20
    UIView * _topEdgeView; // +0x28
    UIImageView * _topIconFlagView; // +0x30
    UIView * _bottomEdgeView; // +0x38
    UIImageView * _bottomIconFlagView; // +0x40
    double _topCroppedRatio; // +0x48
    double _bottomCroppedRatio; // +0x50
    UIView * _sliderView; // +0x58
    UITapGestureRecognizer * _tapGest; // +0x60
    CGSize _sliderFrameMaxSize; // +0x68
}
+ (CGSize)calContentSizeWithBarSize:(CGSize)arg1;
+ (CGSize)calBarSizeWithContentSize:(CGSize)arg1;
- (id)initWithImage:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)barSizeWithFixWidth:(double)arg1 flexHeight:(double)arg2;
- (void)initSubviews;
- (void)setSliderCurAspectRatio:(double)arg1 maxAspectRatio:(double)arg2;
- (void)updateCropStateWithTopRatio:(double)arg1 bottomRatio:(double)arg2;
- (void)resetCropStateWithImage:(id)arg1;
- (CGRect)getImgaeCropFrame;
- (CGRect)getImageCropFrameToWindow;
- (void)setTopCroppedRatio:(double)arg1;
- (void)setBottomCroppedRatio:(double)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)resetCropState;
- (void)addCornerToView:(id)arg1 corners:(unsigned long long)arg2 radii:(double)arg3;
- (void)drawRect:(CGRect)arg1;
- (void)updatePreviewFrameByCropRectUpdate:(unsigned int)arg1;
- (void)updateFrameHeightWithCropRect:(CGRect)arg1;
- (void)handlePreviewFramePan:(id)arg1;
- (void)onTapAction:(id)arg1;
- (void)updatePreviewFrameWithTouchCenterY:(double)arg1 actionType:(unsigned int)arg2;
- (BOOL)checkPreviewFrameOriginYValid:(double)arg1;
- (void)resetPreviewFramePos;
- (void)callbackPreviewPosChangeWithActionType:(unsigned int)arg1;
- (CGRect)imageViewFrame;
- (CGRect)getImageCropRect;
- (double)calTopCroppedRatio;
- (double)calBottomCroppedRatio;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setOnTopEdgeActive:(BOOL)arg1;
- (void)setOnBottomEdgeActive:(BOOL)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)topEdgeView;
- (void)setTopEdgeView:(id)arg1;
- (id)topIconFlagView;
- (void)setTopIconFlagView:(id)arg1;
- (id)bottomEdgeView;
- (void)setBottomEdgeView:(id)arg1;
- (id)bottomIconFlagView;
- (void)setBottomIconFlagView:(id)arg1;
- (BOOL)onTopEdgeActive;
- (BOOL)onBottomEdgeActive;
- (double)topCroppedRatio;
- (double)bottomCroppedRatio;
- (id)sliderView;
- (void)setSliderView:(id)arg1;
- (CGSize)sliderFrameMaxSize;
- (void)setSliderFrameMaxSize:(CGSize)arg1;
- (id)tapGest;
- (void)setTapGest:(id)arg1;
- (void).cxx_destruct;
@end

