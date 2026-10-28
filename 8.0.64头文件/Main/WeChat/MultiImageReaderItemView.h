@interface MultiImageReaderItemView : ReaderItemView
{
    unsigned int _imageCount; // +0xa8
    NSArray * _coverImageURLs; // +0xb0
    BrandMultiImageCoverView * _multiCoverView; // +0xb8
    BrandImageCountView * _imageCountView; // +0xc0
    BrandImageCoverGradientView * _gradientBGView; // +0xc8
    NSMutableArray * _textInsideCoverConstraints; // +0xd0
    NSMutableArray * _textOutsideCoverConstraints; // +0xd8
}
- (void)setupUI;
- (void)topView;
- (void)setupConstraints;
- (void)updateTitle;
- (unsigned int)imageCount;
- (void)setImageCount:(unsigned int)arg1;
- (id)coverImageURLs;
- (void)setCoverImageURLs:(id)arg1;
- (id)multiCoverView;
- (void)setMultiCoverView:(id)arg1;
- (id)imageCountView;
- (void)setImageCountView:(id)arg1;
- (id)gradientBGView;
- (void)setGradientBGView:(id)arg1;
- (id)textInsideCoverConstraints;
- (void)setTextInsideCoverConstraints:(id)arg1;
- (id)textOutsideCoverConstraints;
- (void)setTextOutsideCoverConstraints:(id)arg1;
- (void).cxx_destruct;
@end
