@interface WCFinderCoverBasePreviewView : MMUIView
{
    BOOL _scrollViewIsProcessing; // +0x8
    id <WCFinderCoverBasePreviewViewDelegate> _delegate; // +0x10
    MMUIScrollView * _scrollView; // +0x18
    UIView * _blurView; // +0x20
    UIView * _shadowView; // +0x28
    WCFinderCropRectModel * _cropRectModel; // +0x30
}
- (id)mergeEditImageFromImage:(id)arg1;
- (void)refreshPlayerPreviewByModeChange:(BOOL)arg1;
- (CGSize)getPlayerVideoSize;
- (void)curPreviewCoverImage:(id /* block */)arg1;
- (void)curFullCoverImage:(id /* block */)arg1;
- (CGRect)getCoverVisualRectByImage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)cropRectModel;
- (void)setCropRectModel:(id)arg1;
- (BOOL)scrollViewIsProcessing;
- (void)setScrollViewIsProcessing:(BOOL)arg1;
- (void).cxx_destruct;
@end
