@interface CBTCoopV2MapViewModel : CBTCoopV2AsstBoardViewModel
{
    NSString * _resourceID; // +0x8
    NSString * _titleText; // +0x10
    NSString * _expandAppId; // +0x18
    NSString * _expandPagePath; // +0x20
}
+ (XmlReaderNode_t *)findAppMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2 defaultValue:(id)arg3;
+ (double)heightForText:(id)arg1 font:(id)arg2 width:(double)arg3;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)copyableText;
- (BOOL)isForwardable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (double)bubbleWidthForCellWidth:(double)arg1;
- (double)bubbleHeightForCellWidth:(double)arg1;
- (double)cardWidthForCellWidth:(double)arg1;
- (double)cardHeightForCellWidth:(double)arg1;
- (id)contentSignature;
- (BOOL)shouldShowForwardMenuItem;
- (id)coopV2ReportCardTitle;
- (id)copyContent;
- (void)openExpandWeApp;
- (void)openExpandWeAppWithRealtimeTarget:(id)arg1;
- (void)updateFromCardWrap:(id)arg1;
- (BOOL)updateFromXML:(id)arg1;
- (id)resourceID;
- (void)setResourceID:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)expandAppId;
- (void)setExpandAppId:(id)arg1;
- (id)expandPagePath;
- (void)setExpandPagePath:(id)arg1;
- (void).cxx_destruct;
@end
