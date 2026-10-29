@interface CBTCoopV2ShopItemViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _didStartFetchProductCardInfo; // +0x8
    CBTCoopV2ShopItemCellView * _cellView; // +0x10
    EcsProductShareViewBuilder * _builder; // +0x18
    WCFinderLiveProductShareItem * _productShareItem; // +0x20
    unsigned long long _productContentVersion; // +0x28
    double _cellWidth; // +0x30
}
+ (id)buildConfigWithShareItem:(id)arg1;
+ (id)normalizedSellingPrice:(id)arg1;
+ (id)normalizedPriceWording:(id)arg1;
+ (id)trimmedString:(id)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)parseAndBuildProductShareItem;
- (void)startFetchProductCardInfoIfNeeded;
- (void)fetchProductCardInfo;
- (void)updateProductShareItemWithCard:(id)arg1 response:(id)arg2;
- (void)onProductCardInfoUpdated;
- (void)rebuildBuilderAndMarkDirty;
- (id)getCellReuseId;
- (double)cardContentWidth;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)titleText;
- (id)subtitleText;
- (id)subtitlePriceText;
- (id)coverImageURL;
- (void)onClickAction;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (BOOL)isForwardable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (void)onShopTap;
- (void)openProductCardJumpWithResponse:(id)arg1;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)builder;
- (void)setBuilder:(id)arg1;
- (id)productShareItem;
- (void)setProductShareItem:(id)arg1;
- (unsigned long long)productContentVersion;
- (void)setProductContentVersion:(unsigned long long)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (BOOL)didStartFetchProductCardInfo;
- (void)setDidStartFetchProductCardInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end
