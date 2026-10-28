@interface WCFinderFullScreenEditFrameBlurView : UIView
{
    BOOL _hiddenEditTipsRichTextView; // +0x8
    MMUIButton * _cropFrameDownButton; // +0x10
    id <WCFinderFullScreenEditFrameBlurViewDelegate> _delegate; // +0x18
    MMUIView * _headBlurView; // +0x20
    MMUIView * _bottomBlurView; // +0x28
    EditImageCropGridView * _cropGridView; // +0x30
    RichTextView * _editTipsRichTextView; // +0x38
    CGSize _mediaSize; // +0x40
    CGRect _initialRect; // +0x50
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 cropThumbSize:(CGSize)arg2 mediaSize:(CGSize)arg3 hiddenEditTipsRichTextView:(BOOL)arg4;
- (id)initWithFrame:(CGRect)arg1 cropGridViewFrame:(CGRect)arg2 mediaSize:(CGSize)arg3 hiddenEditTipsRichTextView:(BOOL)arg4;
- (void)setupSubViews;
- (void)updateEditTipsRichTextCenterY:(double)arg1 margin:(double)arg2 hidden:(BOOL)arg3;
- (id)cropGridView;
- (id)editTipsRichTextView;
- (id)createBlurView;
- (CGRect)getCurrentCropRectInScreen;
- (CGRect)getFullScreenCropRect;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)panCropFrameButton:(id)arg1;
- (void)updateScrollViewLayoutViews;
- (id)headBlurView;
- (id)bottomBlurView;
- (id)cropFrameDownButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)mediaSize;
- (void)setMediaSize:(CGSize)arg1;
- (void)setHeadBlurView:(id)arg1;
- (void)setBottomBlurView:(id)arg1;
- (CGRect)initialRect;
- (void)setInitialRect:(CGRect)arg1;
- (void)setCropGridView:(id)arg1;
- (BOOL)hiddenEditTipsRichTextView;
- (void)setHiddenEditTipsRichTextView:(BOOL)arg1;
- (void)setEditTipsRichTextView:(id)arg1;
- (void).cxx_destruct;
@end
