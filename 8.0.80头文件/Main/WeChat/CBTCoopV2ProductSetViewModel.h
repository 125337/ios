@interface CBTCoopV2ProductSetViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _isProductSetCategory; // +0x8
    CBTCoopV2ProductSetCellView * _cellView; // +0x10
    NSString * _bottomTag; // +0x18
    NSString * _thumbUrl; // +0x20
    NSString * _title; // +0x28
    NSString * _des; // +0x30
    NSString * _jsapiName; // +0x38
    NSString * _jsapiParam; // +0x40
    NSDictionary * _webSearchParams; // +0x48
}
+ (XmlReaderNode_t *)findMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (XmlReaderNode_t *)findAppMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2 defaultValue:(id)arg3;
+ (id)webSearchParamsFromJSApiParam:(id)arg1;
+ (id)webSearchParamsFromJSONString:(id)arg1;
+ (id)decodedXMLString:(id)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)parseProductSetXML;
- (BOOL)canRenderProductSetCard;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)titleText;
- (id)subtitleText;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)coverImageURL;
- (void)onClickAction;
- (void)openProductSetFromViewController:(id)arg1;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)bottomTag;
- (void)setBottomTag:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)des;
- (void)setDes:(id)arg1;
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (id)jsapiParam;
- (void)setJsapiParam:(id)arg1;
- (id)webSearchParams;
- (void)setWebSearchParams:(id)arg1;
- (BOOL)isProductSetCategory;
- (void)setIsProductSetCategory:(BOOL)arg1;
- (void).cxx_destruct;
@end
