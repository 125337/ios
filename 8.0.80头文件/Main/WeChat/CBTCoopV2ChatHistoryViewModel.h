@interface CBTCoopV2ChatHistoryViewModel : CBTCoopV2AsstBoardViewModel <ICBTContactGetExt>
{
    BOOL _canRenderCard; // +0x8
    BOOL _didRequestContactFromServer; // +0x9
    NSString * _chatId; // +0x10
    NSArray * _messageIds; // +0x18
    NSString * _cachedDisplayName; // +0x20
    NSString * _recordItemXml; // +0x28
    NSString * _cacheId; // +0x30
    NSString * _status; // +0x38
}
+ (id)displayNameForContact:(id)arg1 username:(id)arg2;
+ (XmlReaderNode_t *)findMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (id)messageIdsFromMsgNode:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2;
+ (double)cardWidthForCellWidth:(double)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)title;
- (id)subtitle;
- (id)resolveDisplayName;
- (void)onGetContactFromServer:(id)arg1;
- (void)updateFromXML:(id)arg1;
- (double)cardWidthForCellWidth:(double)arg1;
- (double)titleLineHeight;
- (double)subtitleLineHeight;
- (double)cardHeight;
- (double)iconSize;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (BOOL)isSourceFromUser;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (BOOL)isRecordAvailable;
- (BOOL)isFailed;
- (void)openRecordPreview;
- (id)chatId;
- (void)setChatId:(id)arg1;
- (id)messageIds;
- (void)setMessageIds:(id)arg1;
- (BOOL)canRenderCard;
- (void)setCanRenderCard:(BOOL)arg1;
- (id)cachedDisplayName;
- (void)setCachedDisplayName:(id)arg1;
- (BOOL)didRequestContactFromServer;
- (void)setDidRequestContactFromServer:(BOOL)arg1;
- (id)recordItemXml;
- (void)setRecordItemXml:(id)arg1;
- (id)cacheId;
- (void)setCacheId:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (void).cxx_destruct;
@end
