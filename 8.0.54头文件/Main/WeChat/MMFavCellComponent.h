@interface MMFavCellComponent : MMComponent <IFavoritesExt, INetworkStatusMgrExt, MMFavImageComponentDelegate>
{
    MMUIImageView * m_selectedView; // +0x10
    MMUIImageView * m_deselectedView; // +0x18
    MMFavBaselineComponent * m_baselineCom; // +0x20
    MMFavImageComponent * m_imageCom; // +0x28
    MMFavTextComponent * m_textCom; // +0x30
    MMFavBigImageFieldComponent * m_bigImageFieldCom; // +0x38
    UIView * m_contentView; // +0x40
    BOOL m_editing; // +0x48
    BOOL m_bShorten; // +0x49
    FavoritesItem * _favItem; // +0x50
    id <MMFavCellComponentDelegate> _delegate; // +0x58
    FavMultiMenuTableViewCell * _parentCellView; // +0x60
}
+ (double)calHeightWithComData:(id)arg1;
- (void)setHighlightContent:(id)arg1 Keywords:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)isPadStyle;
- (void)configContentLayout;
- (unsigned long long)cellStyle;
- (void)configSelectViewWith:(id)arg1 offsetX:(double)arg2 isAccessibilityElement:(BOOL)arg3;
- (void)changeSelectStatu:(BOOL)arg1;
- (BOOL)hasSelectedState;
- (BOOL)isPurgeStyle;
- (void)changeEditingStatus:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFavItem:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (id)getThumbComponent;
- (id)getThumbImageView;
- (id)getCdnImgView;
- (void)favMusicBeignToPlay:(id)arg1;
- (BOOL)enableTingListMode;
- (void)configBaselineComponent;
- (void)configImageComponent;
- (void)configTextComponent;
- (void)onClickDetailBtn:(id)arg1;
- (void)configFavCell;
- (void)layoutPurgeBtn:(id)arg1 offsetX:(double)arg2;
- (void)onClickPurgeBtn:(id)arg1;
- (void)onClickPurgeSelectBtn:(id)arg1;
- (void)layoutSubviewsAfterChangeContentX:(double)arg1;
- (id)favItem;
- (id)delegate;
- (id)parentCellView;
- (void)setParentCellView:(id)arg1;
- (void).cxx_destruct;
@end

