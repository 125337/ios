@interface AppStandardImageContentMessageCellView : AppStandardContentBaseMessageCellView
{
    RichTextView * _titleTextView; // +0xb8
    MMUILabel * _contentLabel; // +0xc0
    UIView<AppStandardContentExternalLoadImageView> * _mainImageView; // +0xc8
    AppStandardContentExternalLoadImageContainerView * _mainImgContainerView; // +0xd0
    MMGradientView * _metaDataBgView; // +0xd8
    UIImageView * _metadataVideoPlayIcon; // +0xe0
    MMUILabel * _metadatalabel; // +0xe8
}
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)initMainImage;
- (void)initTitle;
- (void)initMetaData;
- (void)createOrUpdateLayout;
- (id)imageViewInSize:(CGSize)arg1;
- (CGRect)coverFrameInContentView;
- (id)titleTextView;
- (void)setTitleTextView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)mainImageView;
- (void)setMainImageView:(id)arg1;
- (id)mainImgContainerView;
- (void)setMainImgContainerView:(id)arg1;
- (id)metaDataBgView;
- (void)setMetaDataBgView:(id)arg1;
- (id)metadataVideoPlayIcon;
- (void)setMetadataVideoPlayIcon:(id)arg1;
- (id)metadatalabel;
- (void)setMetadatalabel:(id)arg1;
- (void).cxx_destruct;
@end
