@interface WCVideoProducerAssetThumbView : UICollectionViewCell
{
    UIView * _containerView; // +0x8
    UIImageView * _thumbImageView; // +0x10
    UIImageView * _assetTypeIconView; // +0x18
    UIView * _selectedMaskView; // +0x20
}
+ (id)cellIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)loadViewModel:(id)arg1;
- (void)_loadAssetThumbViewForAssetInfo:(id)arg1;
- (void)_resetDefaultThumbImage;
- (void)_loadAssetTypeIconForAssetInfo:(id)arg1;
- (void)_loadSelectedMaskViewForViewModel:(id)arg1;
- (void)_initView;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)assetTypeIconView;
- (void)setAssetTypeIconView:(id)arg1;
- (id)selectedMaskView;
- (void)setSelectedMaskView:(id)arg1;
- (void).cxx_destruct;
@end

