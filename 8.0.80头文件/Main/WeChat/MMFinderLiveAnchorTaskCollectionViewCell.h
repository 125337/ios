@interface MMFinderLiveAnchorTaskCollectionViewCell : UICollectionViewCell <MMWebImageViewDelegate>
{
    FinderLiveQuestActivity * _activity; // +0x8
    MMWebImageView * _anchorTaskImgView; // +0x10
}
+ (double)collectionCellSpacing;
+ (double)collectionCellWidth;
+ (double)collectionCellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutAnchorTaskImgView;
- (void)updateAnchorTaskImgView;
- (void)setActivity:(id)arg1;
- (id)accessibilityLabel;
- (void)onLoadImageOK:(id)arg1;
- (id)activity;
- (id)anchorTaskImgView;
- (void)setAnchorTaskImgView:(id)arg1;
- (void).cxx_destruct;
@end
