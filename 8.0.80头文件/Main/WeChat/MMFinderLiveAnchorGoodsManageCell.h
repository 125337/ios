@interface MMFinderLiveAnchorGoodsManageCell : MMFinderLiveGoodsCell <MMFinderLiveTagsLabelDelegate>
{
    id <MMFinderLiveShopShelfManagedItemDelegate> _cellDelegate; // +0x40
    MMFinderLiveAnchorGoodsCellLeftCardView * _leftCardView; // +0x48
    MMFinderLiveTagsLabel * _goodsTitleLabel; // +0x50
    MMFinderLiveGoodsCellSubInfosView * _subInfosView; // +0x58
    UITapGestureRecognizer * _gestureRecognizer; // +0x60
    MMUIView * _backGroundClickView; // +0x68
}
+ (id)identifier;
+ (double)cellHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)imageWidthForCellWidth:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)addGoodsTitleLabel;
- (void)onWebImageGetDifferentSize;
- (void)layoutSubviews;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)addBackGroundClickView;
- (void)onTapGesture:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)unSelectedImageForSelectedButton;
- (id)accessibilityAttributedLabel;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)leftCardView;
- (void)setLeftCardView:(id)arg1;
- (id)goodsTitleLabel;
- (void)setGoodsTitleLabel:(id)arg1;
- (id)subInfosView;
- (void)setSubInfosView:(id)arg1;
- (id)gestureRecognizer;
- (void)setGestureRecognizer:(id)arg1;
- (id)backGroundClickView;
- (void)setBackGroundClickView:(id)arg1;
- (void).cxx_destruct;
@end
