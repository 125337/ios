@interface WCPayWalletBusinessCell : UICollectionViewCell
{
    FunctionDetail * _itemData; // +0x8
    WCPayWebImageView * _iconImgView; // +0x10
    WCPayWebImageView * _activityIconImgView; // +0x18
    MMUILabel * _nameLabel; // +0x20
    MMUILabel * _subTitleLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateCellWithItemData:(id)arg1;
- (void)updateView;
- (void)updateIconView;
- (void)updateNameLabel;
- (void)updateSubTitleLabel;
- (void)updateActivityIconView;
- (BOOL)isNeedShowActivityIcon;
- (id)accessibilityLabelString;
- (id)itemData;
- (void)setItemData:(id)arg1;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)activityIconImgView;
- (void)setActivityIconImgView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

