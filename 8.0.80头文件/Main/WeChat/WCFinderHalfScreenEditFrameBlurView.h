@interface WCFinderHalfScreenEditFrameBlurView : UIView
{
    BOOL _hiddenCropGridView; // +0x8
    MMUIButton * _cropFrameDownButton; // +0x10
    id <WCFinderHalfScreenEditFrameBlurViewDelegate> _delegate; // +0x18
    MMUIView * _headBlurView; // +0x20
    MMUIView * _bottomBlurView; // +0x28
    EditImageCropGridView * _cropGridView; // +0x30
    CGSize _mediaSize; // +0x38
    CGRect _initialRect; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 mediaSize:(CGSize)arg2;
- (void)setupInitRectAndHiddenCropGridView:(CGSize)arg1;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)layoutViews;
- (id)cropGridView;
- (id)createBlurView;
- (CGRect)getCurrentCropRect;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)panCropFrameButton:(id)arg1;
- (void)updateScrollViewLayoutViews;
- (id)headBlurView;
- (id)bottomBlurView;
- (id)cropFrameDownButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setHeadBlurView:(id)arg1;
- (void)setBottomBlurView:(id)arg1;
- (CGRect)initialRect;
- (void)setInitialRect:(CGRect)arg1;
- (CGSize)mediaSize;
- (void)setMediaSize:(CGSize)arg1;
- (void)setCropGridView:(id)arg1;
- (BOOL)hiddenCropGridView;
- (void)setHiddenCropGridView:(BOOL)arg1;
- (void).cxx_destruct;
@end
