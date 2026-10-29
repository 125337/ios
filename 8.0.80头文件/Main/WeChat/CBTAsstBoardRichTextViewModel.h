@interface CBTAsstBoardRichTextViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _hasReportedReceiveMsg; // +0x8
    NSString * _displayXml; // +0x10
    NSDictionary * _parameterMap; // +0x18
}
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)setCardWrap:(id)arg1;
- (void)parseParameterTags;
- (BOOL)parseAssistantRichTextFormat:(id)arg1;
- (void)setHasInsertIntoTableView:(BOOL)arg1;
- (void)tryReportReceiveTextMsg;
- (void)reportClickWeAppLinkWithJumpAppid:(id)arg1 jumpPath:(id)arg2;
- (id)plainTextContentForForward;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)buildForwardHistoryCardWraps;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)displayXml;
- (void)setDisplayXml:(id)arg1;
- (id)parameterMap;
- (void)setParameterMap:(id)arg1;
- (BOOL)hasReportedReceiveMsg;
- (void)setHasReportedReceiveMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end
