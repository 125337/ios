@interface MMAssetSelectedCollectionViewCell : UICollectionViewCell
{
    BOOL _isShowBorder; // +0x8
    MMAssetView * _assetView; // +0x10
    UIColor * _borderColor; // +0x18
}
- (void)setIsShowBorder:(BOOL)arg1;
- (id)assetView;
- (void)setAssetView:(id)arg1;
- (BOOL)isShowBorder;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (void).cxx_destruct;
@end

