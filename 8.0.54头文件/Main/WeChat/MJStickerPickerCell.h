@interface MJStickerPickerCell : UICollectionViewCell <MJMaterialLoadingStatusView>
{
    BOOL _bSelect; // +0x8
    UIView * _loadingView; // +0x10
    MMWebImageView * _previewImageView; // +0x18
    UILabel * _contentLabel; // +0x20
    UIView * _borderView; // +0x28
}
- (id)mj_loadingContainerView;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutWithItem:(id)arg1;
- (void)clearContent;
- (void)updateSelectionStyle:(BOOL)arg1;
- (void)setBSelect:(BOOL)arg1;
- (id)contentLabel;
- (id)loadingView;
- (id)previewImageView;
- (id)borderView;
- (void)setLoadingView:(id)arg1;
- (BOOL)bSelect;
- (void)setPreviewImageView:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setBorderView:(id)arg1;
- (void).cxx_destruct;
@end

