@interface CBTCoopV2ShopOrderViewModel : CBTCoopV2AsstBoardViewModel
{
    CBTCoopV2ShopOrderCellView * _cellView; // +0x8
    WCFinderOrderShareItem * _orderItem; // +0x10
    double _cellWidth; // +0x18
}
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)getCellReuseId;
- (double)cardContentWidth;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)coopV2ReportCardDescription;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (void)onClickAction;
- (id)orderItem;
- (id)productsWording;
- (id)stateWording;
- (id)productImageURL;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (void)setOrderItem:(id)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (void).cxx_destruct;
@end
