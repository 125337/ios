@interface CBTCoopV2SearchViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _canRenderSearchCard; // +0x8
    NSString * _titleText; // +0x10
    NSString * _subtitleText; // +0x18
    NSString * _sourceText; // +0x20
    NSString * _thumbURL; // +0x28
    NSDictionary * _webSearchParams; // +0x30
}
+ (XmlReaderNode_t *)findAppMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2 defaultValue:(id)arg3;
+ (id)webSearchParamsFromJSONString:(id)arg1;
+ (id)webSearchParamsFromJSApiParam:(id)arg1;
+ (id)decodedXMLString:(id)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)copyableText;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (double)titleLineHeight;
- (double)subtitleLineHeight;
- (double)sourceLineHeight;
- (double)titleRowHeight;
- (double)contentAreaHeight;
- (double)sourceAreaHeight;
- (double)searchCardHeight;
- (void)jumpToSearchDetailFromViewController:(id)arg1;
- (void)updateFromXML:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)subtitleText;
- (void)setSubtitleText:(id)arg1;
- (id)sourceText;
- (void)setSourceText:(id)arg1;
- (id)thumbURL;
- (void)setThumbURL:(id)arg1;
- (id)webSearchParams;
- (void)setWebSearchParams:(id)arg1;
- (BOOL)canRenderSearchCard;
- (void)setCanRenderSearchCard:(BOOL)arg1;
- (void).cxx_destruct;
@end
