@interface CBTCoopV2TingOpViewModel : CBTCoopV2AsstBoardViewModel
{
    id <CBTCoopV2TingOpViewModelDelegate> _customDelegate; // +0x8
    MMListenOpItem * _opItem; // +0x10
}
+ (XmlReaderNode_t *)findAppMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (XmlReaderNode_t *)findTingOpItemNodeFromAppMsg:(XmlReaderNode_t *)arg1;
+ (id)opItemBase64StringFromNode:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)didFillHostInfo:(id)arg1;
- (id)titleText;
- (id)subtitleText;
- (id)iconURL;
- (id)contentSignature;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (CGSize)cardSizeForCellWidth:(double)arg1;
- (double)layoutWidthForCellWidth:(double)arg1;
- (double)cardHeight;
- (CGSize)coverSize;
- (double)titleLineHeight;
- (double)subtitleLineHeight;
- (double)contentTextHeight;
- (id)parseTingOpItemFromXML:(id)arg1;
- (id)customDelegate;
- (void)setCustomDelegate:(id)arg1;
- (id)opItem;
- (void)setOpItem:(id)arg1;
- (void).cxx_destruct;
@end
