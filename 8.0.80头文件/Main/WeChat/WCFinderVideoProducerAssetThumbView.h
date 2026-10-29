@interface WCFinderVideoProducerAssetThumbView : UICollectionViewCell
{
    UIView * _containerView; // +0x8
    UIImageView * _thumbImageView; // +0x10
    UIImageView * _assetTypeIconView; // +0x18
    UIView * _selectedMaskView; // +0x20
    UIView * _replaceMaskView; // +0x28
    CAGradientLayer * _replaceBackgroundGradientLayer; // +0x30
    CAGradientLayer * _replaceMaskGradientLayer; // +0x38
    UILabel * _durationLabel; // +0x40
    MMAsset * _representedAsset; // +0x48
}
+ (id)cellIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)loadViewModel:(id)arg1;
- (void)setAssetReorderPlaceholder:(BOOL)arg1;
- (void)prepareForReuse;
- (void)loadAssetThumbViewForAssetInfo:(id)arg1 allowsAsyncFallback:(BOOL)arg2;
- (void)_resetDefaultThumbImage;
- (void)loadAssetTypeIconForAssetInfo:(id)arg1 optimizedAppearance:(BOOL)arg2;
- (id)durationTextForViewModel:(id)arg1;
- (void)_loadSelectedMaskViewForViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)_initView;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)assetTypeIconView;
- (void)setAssetTypeIconView:(id)arg1;
- (id)selectedMaskView;
- (void)setSelectedMaskView:(id)arg1;
- (id)replaceMaskView;
- (void)setReplaceMaskView:(id)arg1;
- (id)replaceBackgroundGradientLayer;
- (void)setReplaceBackgroundGradientLayer:(id)arg1;
- (id)replaceMaskGradientLayer;
- (void)setReplaceMaskGradientLayer:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)representedAsset;
- (void)setRepresentedAsset:(id)arg1;
- (void).cxx_destruct;
@end
