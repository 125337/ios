@interface CBTCoopV2FinderAccountViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _isFinderAccountCategory; // +0x8
    NSString * _titleText; // +0x10
    NSString * _descText; // +0x18
    NSString * _iconURL; // +0x20
    NSString * _authIconURL; // +0x28
    NSString * _bottomTag; // +0x30
    NSString * _finderUserName; // +0x38
}
+ (XmlReaderNode_t *)findMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2 defaultValue:(id)arg3;
+ (id)extractFinderUserNameFromJsapiParam:(id)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)fixedSubtitleText;
- (BOOL)canRenderFinderAccountCard;
- (id)copyableText;
- (double)cardHeight;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)coopV2ReportCardDescription;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (void)openFinderProfileFromViewController:(id)arg1;
- (void)updateFromXML:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)authIconURL;
- (void)setAuthIconURL:(id)arg1;
- (id)bottomTag;
- (void)setBottomTag:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (BOOL)isFinderAccountCategory;
- (void)setIsFinderAccountCategory:(BOOL)arg1;
- (void).cxx_destruct;
@end
