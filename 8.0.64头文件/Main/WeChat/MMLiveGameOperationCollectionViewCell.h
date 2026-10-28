@interface MMLiveGameOperationCollectionViewCell : UICollectionViewCell <MMWebImageViewDelegate>
{
    FinderLiveGetUserGameConfigResponse_GameActivityBanner_GameActivityBannerInfo * _activity; // +0x8
    MMWebImageView * _operationImgView; // +0x10
}
+ (double)collectionCellSpacing;
+ (double)collectionCellWidth;
+ (double)collectionCellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutOperationImgView;
- (void)updateOperationImgView;
- (void)setActivity:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (id)activity;
- (id)operationImgView;
- (void)setOperationImgView:(id)arg1;
- (void).cxx_destruct;
@end
