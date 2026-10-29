@interface MultiImageReaderMessageCellView : ReaderMessageCellView
{
    BrandMultiImageCoverView * _multiCoverView; // +0x48
    BrandImageCountView * _imageCountView; // +0x50
    BrandImageCoverGradientView * _gradientBGView; // +0x58
}
- (void)setupUI;
- (void)layoutContentView;
- (void)setupConstraints;
- (void)updateTitle;
- (id)multiCoverView;
- (void)setMultiCoverView:(id)arg1;
- (id)imageCountView;
- (void)setImageCountView:(id)arg1;
- (id)gradientBGView;
- (void)setGradientBGView:(id)arg1;
- (void).cxx_destruct;
@end
