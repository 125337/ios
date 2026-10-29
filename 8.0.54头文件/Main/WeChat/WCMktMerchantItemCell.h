@interface WCMktMerchantItemCell : MMMultiMenuTableViewCell <WCMktCardItemViewDelegate, ILinkEventExt>
{
    BOOL _bIsExpandCardList; // +0x40
    BOOL _bIsLastItem; // +0x41
    id <WCMktMerchantItemCellDelegate> _delegate; // +0x48
    CardHomePageElement * _elemData; // +0x50
    WCPayWebImageView * _merchatLogoImgView; // +0x58
    UIImageView * _arrowImgView; // +0x60
    UrlLabel * _merchatNameLabel; // +0x68
    MMUILabel * _tradeRelationLabel; // +0x70
    UIView * _merchatTagListView; // +0x78
    UIButton * _mchActTagBtn; // +0x80
    WCMktCardItemView * _cardItemView; // +0x88
    UIButton * _expandBtn; // +0x90
    UIView * _sepBarView; // +0x98
    UIButton * _merchantAreaBtn; // +0xa0
}
+ (double)calcCellHeightWithMerchantData:(id)arg1 isExpandCardList:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)updateContentWithData:(id)arg1 isExpandCardList:(BOOL)arg2 bIsLastItem:(BOOL)arg3;
- (void)updateTagButtonWithElemMchLabelData:(id)arg1 tagBtn:(id)arg2;
- (id)genTagButtonWithElemMchLabelData:(id)arg1;
- (void)expandBtnClick:(id)arg1;
- (void)onMerchantAreaBtnClick;
- (void)onCardItemViewClickTagBtnToOpenTinyApp:(id)arg1;
- (void)onCardItemViewClickCardWithCardID:(id)arg1 cardIndex:(unsigned int)arg2;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(CGRect)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)elemData;
- (void)setElemData:(id)arg1;
- (BOOL)bIsExpandCardList;
- (void)setBIsExpandCardList:(BOOL)arg1;
- (BOOL)bIsLastItem;
- (void)setBIsLastItem:(BOOL)arg1;
- (id)merchatLogoImgView;
- (void)setMerchatLogoImgView:(id)arg1;
- (id)arrowImgView;
- (void)setArrowImgView:(id)arg1;
- (id)merchatNameLabel;
- (void)setMerchatNameLabel:(id)arg1;
- (id)tradeRelationLabel;
- (void)setTradeRelationLabel:(id)arg1;
- (id)merchatTagListView;
- (void)setMerchatTagListView:(id)arg1;
- (id)mchActTagBtn;
- (void)setMchActTagBtn:(id)arg1;
- (id)cardItemView;
- (void)setCardItemView:(id)arg1;
- (id)expandBtn;
- (void)setExpandBtn:(id)arg1;
- (id)sepBarView;
- (void)setSepBarView:(id)arg1;
- (id)merchantAreaBtn;
- (void)setMerchantAreaBtn:(id)arg1;
- (void).cxx_destruct;
@end

