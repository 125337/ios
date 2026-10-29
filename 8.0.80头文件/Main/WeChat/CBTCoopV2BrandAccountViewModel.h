@interface CBTCoopV2BrandAccountViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _isBrandAccountCategory; // +0x8
    unsigned int _certFlag; // +0xc
    NSString * _titleText; // +0x10
    NSString * _iconURL; // +0x18
    NSString * _authIconURL; // +0x20
    NSString * _bottomTag; // +0x28
    NSString * _authInfo; // +0x30
    NSString * _jsapiName; // +0x38
    NSString * _jsapiParam; // +0x40
}
+ (id)stringFromParams:(id)arg1 key:(id)arg2;
+ (long long)integerFromParams:(id)arg1 key:(id)arg2;
+ (id)numberFromParams:(id)arg1 key:(id)arg2;
+ (id)jsonStringFromParams:(id)arg1 key:(id)arg2;
+ (XmlReaderNode_t *)findMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (XmlReaderNode_t *)findRealXmlNodeFromMsg:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2 defaultValue:(id)arg3;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)fixedSubtitleText;
- (BOOL)canRenderBrandAccountCard;
- (id)copyableText;
- (double)cardHeight;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)coopV2ReportCardDescription;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (void)openBrandProfileFromViewController:(id)arg1;
- (void)hydrateContactFromParams:(id)arg1 params:(id)arg2;
- (id)parsedJsapiParam;
- (void)updateFromXML:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)authIconURL;
- (void)setAuthIconURL:(id)arg1;
- (unsigned int)certFlag;
- (void)setCertFlag:(unsigned int)arg1;
- (id)bottomTag;
- (void)setBottomTag:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (id)jsapiParam;
- (void)setJsapiParam:(id)arg1;
- (BOOL)isBrandAccountCategory;
- (void)setIsBrandAccountCategory:(BOOL)arg1;
- (void).cxx_destruct;
@end
