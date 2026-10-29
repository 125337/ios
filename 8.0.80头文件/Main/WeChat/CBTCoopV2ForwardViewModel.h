@interface CBTCoopV2ForwardViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _canRenderCard; // +0x8
    NSString * _title; // +0x10
    NSString * _subtitle; // +0x18
    NSString * _forwardMsgId; // +0x20
    NSString * _historyDesc; // +0x28
    NSString * _chatBotHistoryXml; // +0x30
}
+ (XmlReaderNode_t *)findMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2;
+ (id)extractChatBotHistoryXml:(id)arg1;
+ (id)extractTextForTag:(id)arg1 fromXml:(id)arg2;
+ (double)cardWidthForCellWidth:(double)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (void)updateFromXML:(id)arg1;
- (double)cardWidthForCellWidth:(double)arg1;
- (double)titleLineHeight;
- (double)subtitleLineHeight;
- (double)cardHeight;
- (double)thumbSize;
- (BOOL)canOpenHistory;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (BOOL)isSourceFromUser;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)forwardMsgId;
- (void)setForwardMsgId:(id)arg1;
- (id)historyDesc;
- (void)setHistoryDesc:(id)arg1;
- (id)chatBotHistoryXml;
- (void)setChatBotHistoryXml:(id)arg1;
- (BOOL)canRenderCard;
- (void)setCanRenderCard:(BOOL)arg1;
- (void).cxx_destruct;
@end
