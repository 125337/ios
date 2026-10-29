@interface AppStandardTextContentImageThumbContainer : UIView
{
    AppStandardTextContentImageThumbConfig * _config; // +0x8
    AppStandardContentExternalLoadImageContainerView * _imageContainer; // +0x10
    UIView<AppStandardContentExternalLoadImageView> * _imageView; // +0x18
    MMGradientView * _metadataMaskView; // +0x20
    MMUILabel * _descLabel; // +0x28
    UIImageView * _classicStyleMetadataView; // +0x30
}
- (id)initWithConfig:(id)arg1;
- (void)initSubviews;
- (void)setImageView:(id)arg1;
- (void)layoutSubviews;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)imageContainer;
- (void)setImageContainer:(id)arg1;
- (id)imageView;
- (id)metadataMaskView;
- (void)setMetadataMaskView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)classicStyleMetadataView;
- (void)setClassicStyleMetadataView:(id)arg1;
- (void).cxx_destruct;
@end
