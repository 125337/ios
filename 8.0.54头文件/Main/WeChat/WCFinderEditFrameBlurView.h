@interface WCFinderEditFrameBlurView : UIView
{
    BOOL _forbiddenFrameCrop; // +0x8
    MMUIButton * _cropFrameDownButton; // +0x10
    id <WCFinderEditFrameBlurViewDelegate> _delegate; // +0x18
    MMUIButton * _headBlurView; // +0x20
    MMUIButton * _bottomBlurView; // +0x28
    MMUIButton * _cropFrameUpButton; // +0x30
    CGRect _visibleFrame; // +0x38
    CGRect _initialRect; // +0x58
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 visibleFrame:(CGRect)arg2;
- (id)initWithFrame:(CGRect)arg1 visibleFrame:(CGRect)arg2 forbiddenFrameCrop:(BOOL)arg3;
- (void)setup;
- (void)setupSubViews;
- (void)layoutSubviews;
- (id)cropFrameUpButton;
- (id)cropFrameDownButton;
- (void)onTap;
- (id)createBlurView;
- (CGRect)getCurrentCropRect;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setCropFrameButtonHidden:(BOOL)arg1;
- (void)panCropFrameButton:(id)arg1;
- (void)updateScrollViewLayoutViews;
- (id)headBlurView;
- (id)bottomBlurView;
- (void)setCropFrameDownButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)visibleFrame;
- (void)setVisibleFrame:(CGRect)arg1;
- (void)setHeadBlurView:(id)arg1;
- (void)setBottomBlurView:(id)arg1;
- (void)setCropFrameUpButton:(id)arg1;
- (CGRect)initialRect;
- (void)setInitialRect:(CGRect)arg1;
- (BOOL)forbiddenFrameCrop;
- (void)setForbiddenFrameCrop:(BOOL)arg1;
- (void).cxx_destruct;
@end

