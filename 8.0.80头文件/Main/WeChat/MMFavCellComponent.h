@interface MMFavCellComponent : MMComponent <IFavoritesExt, INetworkStatusMgrExt, MMFavImageComponentDelegate, ILocationThumbMgrExt>
{
    MMUIImageView * m_selectedView; // +0x10
    MMUIImageView * m_deselectedView; // +0x18
    FavCheckBox * m_checkboxView; // +0x20
    MMFavBaselineComponent * m_baselineCom; // +0x28
    MMFavImageComponent * m_imageCom; // +0x30
    MMFavTextComponent * m_textCom; // +0x38
    MMFavBigImageFieldComponent * m_bigImageFieldCom; // +0x40
    UIView * m_contentView; // +0x48
    UIView * m_multiSelectSizeBox; // +0x50
    double m_embeddedContentWidth; // +0x58
    MMUIButton * m_detailButton; // +0x60
    BOOL m_editing; // +0x68
    BOOL m_bShorten; // +0x69
    FavoritesItem * _favItem; // +0x70
    FavDataItemWrap * _detailDataWrap; // +0x78
    UIImageView * _locationMapImageView; // +0x80
    id <MMFavCellComponentDelegate> _delegate; // +0x88
    FavMultiMenuTableViewCell * _parentCellView; // +0x90
    unsigned long long _multiSelectCellStyle; // +0x98
    double _newCardContentSectionBottom; // +0xa0
    NSArray * _cardHighlightKeywords; // +0xa8
}
+ (double)calHeightWithComData:(id)arg1;
- (id)newCardImageComponent;
- (void)setNewCardImageComponent:(id)arg1;
- (id)newCardTextComponent;
- (void)setNewCardTextComponent:(id)arg1;
- (id)legacyContentBigImageFieldComponent;
- (void)newCardClearBigImageFieldComponent;
- (void)newCardUpdateOrCreateImageComponentWithData:(id)arg1 frame:(CGRect)arg2;
- (void)onNewCardUploadFailRetry;
- (void)onNewCardTagButtonClick:(id)arg1;
- (BOOL)newCardItemNeedsUploadStatus:(id)arg1 uploadFail:(BOOL *)arg2 uploading:(BOOL *)arg3;
- (double)newCardTrailingReservedWidthForDateUInt:(unsigned int)arg1 font:(id)arg2;
- (void)updateNewCardStarIconDisplay;
- (BOOL)updateNewCardTagListDisplayHeightChanged:(BOOL *)arg1;
- (void)setHighlightContent:(id)arg1 Keywords:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)isPadStyle;
- (double)legacyCardMainContentBottomForComData:(id)arg1;
- (void)configContentLayout;
- (unsigned long long)cellStyle;
- (void)configSelectViewWith:(id)arg1 offsetX:(double)arg2 isAccessibilityElement:(BOOL)arg3;
- (void)changeSelectStatu:(BOOL)arg1;
- (BOOL)hasSelectedState;
- (BOOL)isPurgeStyle;
- (BOOL)shouldUseNewMultiSelectCellStyle;
- (BOOL)shouldUseNewCardLayoutForCurrentItem;
- (void)configDetailButtonForCardView:(id)arg1;
- (void)changeLegacyEditingStatus:(BOOL)arg1 animated:(BOOL)arg2;
- (void)changeEditingStatus:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFavItem:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (id)getThumbComponent;
- (id)bigImageFieldImageView;
- (id)getThumbImageView;
- (id)getCdnImgView;
- (id)favTextComponent;
- (id)favImageComponent;
- (id)favBigImageFieldComponent;
- (id)currentCardView;
- (id)contentViewForFrame:(CGRect)arg1;
- (BOOL)shouldUseMultiSelectSizeBox;
- (double)cardWidthForCurrentContentLayout;
- (CGRect)multiSelectContentRectForCardView:(id)arg1;
- (id)currentContentLayoutView;
- (double)contentLeftInsetForLayoutView:(id)arg1;
- (double)contentRightInsetForLayoutView:(id)arg1;
- (double)contentTopInsetForLayoutView:(id)arg1;
- (double)contentWidthForLayoutView:(id)arg1 contentLeftInset:(double)arg2;
- (id)prepareMultiSelectSizeBoxForCardView:(id)arg1;
- (BOOL)hasRightThumbnailForComData:(id)arg1;
- (void)resetLegacyComponentDataWidthsForComData:(id)arg1;
- (double)rightThumbnailReservedWidthForComData:(id)arg1;
- (void)prepareMultiSelectSizeBoxDataForComData:(id)arg1 contentWidth:(double)arg2;
- (void)refreshCardStarLayoutIfNeeded;
- (void)favMusicBeignToPlay:(id)arg1;
- (BOOL)enableTingListMode;
- (void)configBaselineComponent;
- (void)configImageComponent;
- (void)configTextComponent;
- (void)resetContentComponentsForCardRebuild;
- (void)onClickDetailBtn:(id)arg1;
- (void)onClickXiaoweiBannerCloseBtn:(id)arg1;
- (void)configFavCell;
- (void)layoutPurgeBtn:(id)arg1 offsetX:(double)arg2;
- (void)onClickPurgeBtn:(id)arg1;
- (void)onClickPurgeSelectBtn:(id)arg1;
- (void)OnUpdateLocationThumb:(id)arg1 Task:(id)arg2;
- (void)OnLocationThumbMgrError:(int)arg1 Task:(id)arg2;
- (void)relayoutLegacyNewCardIfNeeded;
- (void)layoutLegacySubviewsAfterChangeContentX:(double)arg1;
- (void)relayoutNewCardIfNeeded;
- (id)favItem;
- (id)detailDataWrap;
- (void)setDetailDataWrap:(id)arg1;
- (id)locationMapImageView;
- (void)setLocationMapImageView:(id)arg1;
- (id)delegate;
- (id)parentCellView;
- (void)setParentCellView:(id)arg1;
- (unsigned long long)multiSelectCellStyle;
- (void)setMultiSelectCellStyle:(unsigned long long)arg1;
- (double)newCardContentSectionBottom;
- (void)setNewCardContentSectionBottom:(double)arg1;
- (id)cardHighlightKeywords;
- (void)setCardHighlightKeywords:(id)arg1;
- (void).cxx_destruct;
@end
