@interface CBTAsstBoardImageCellView : CBTAsstBoardBaseCellView
{
    UIView * _imageContainerView; // +0x8
    NSMutableArray * _imageViews; // +0x10
}
- (void)setupUI;
- (void)setupCellWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)refreshImageAtIndex:(unsigned long long)arg1;
- (void)handleImageTap:(id)arg1;
- (void)showFullScreenImageForIndex:(long long)arg1;
- (void)enableCloudPagingForViewer:(id)arg1 viewModel:(id)arg2;
- (id)menuAnchorView;
- (id)imageContainerView;
- (void)setImageContainerView:(id)arg1;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (void).cxx_destruct;
@end
