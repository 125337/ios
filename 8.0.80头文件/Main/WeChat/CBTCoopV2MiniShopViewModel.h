@interface CBTCoopV2MiniShopViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _isMiniShopCategory; // +0x8
    BOOL _didTriggerExposurePreload; // +0x9
    CBTCoopV2MiniShopCellView * _cellView; // +0x10
    NSString * _iconURL; // +0x18
    NSString * _authIconURL; // +0x20
    NSString * _authIconURLDarkmode; // +0x28
    NSString * _authInfo; // +0x30
    NSString * _jsapiName; // +0x38
    NSString * _jsapiParam; // +0x40
    NSString * _bottomTag; // +0x48
    NSString * _titleText; // +0x50
}
+ (XmlReaderNode_t *)findMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (XmlReaderNode_t *)findRealXmlNodeFromMsg:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2 defaultValue:(id)arg3;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)titleText;
- (id)fixedSubtitleText;
- (id)copyableText;
- (double)cardHeight;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (BOOL)canRenderMiniShopCard;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)coopV2ReportCardDescription;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (void)updateFromXML:(id)arg1;
- (void)tryStartExposurePreload;
- (void)openMiniShopFromViewController:(id)arg1;
- (id)extractEcsJumpInfoBase64;
- (void)logEcsJumpInfoProto:(id)arg1;
- (id)currentVisibleNavigationController;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)authIconURL;
- (void)setAuthIconURL:(id)arg1;
- (id)authIconURLDarkmode;
- (void)setAuthIconURLDarkmode:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (id)jsapiParam;
- (void)setJsapiParam:(id)arg1;
- (id)bottomTag;
- (void)setBottomTag:(id)arg1;
- (void)setTitleText:(id)arg1;
- (BOOL)isMiniShopCategory;
- (void)setIsMiniShopCategory:(BOOL)arg1;
- (BOOL)didTriggerExposurePreload;
- (void)setDidTriggerExposurePreload:(BOOL)arg1;
- (void).cxx_destruct;
@end
