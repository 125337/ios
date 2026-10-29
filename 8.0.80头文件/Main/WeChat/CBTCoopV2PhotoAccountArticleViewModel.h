@interface CBTCoopV2PhotoAccountArticleViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _isPhotoAccountArticleCategory; // +0x8
    CBTCoopV2PhotoAccountArticleCellView * _cellView; // +0x10
    NSString * _jumpURL; // +0x18
    NSString * _parsedTitle; // +0x20
    NSString * _parsedSourceTitle; // +0x28
    NSString * _parsedSourceIconUrl; // +0x30
    NSString * _parsedImageUrl; // +0x38
}
+ (XmlReaderNode_t *)findMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (XmlReaderNode_t *)findRealXmlNodeFromMsg:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2 defaultValue:(id)arg3;
+ (id)extractJumpURLFromJsapiParam:(id)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (BOOL)canRenderPhotoAccountArticleCard;
- (id)coverImageURL;
- (id)coverImage;
- (BOOL)isLongPic;
- (double)aspectRatio;
- (id)title;
- (id)sourceNickname;
- (BOOL)hasSourceView;
- (id)headImageURL;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (BOOL)useAspectFitForCover;
- (void)onClickAction;
- (void)onImageTap;
- (void)openJumpURL;
- (void)parseFromXML:(id)arg1;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)jumpURL;
- (void)setJumpURL:(id)arg1;
- (id)parsedTitle;
- (void)setParsedTitle:(id)arg1;
- (id)parsedSourceTitle;
- (void)setParsedSourceTitle:(id)arg1;
- (id)parsedSourceIconUrl;
- (void)setParsedSourceIconUrl:(id)arg1;
- (id)parsedImageUrl;
- (void)setParsedImageUrl:(id)arg1;
- (BOOL)isPhotoAccountArticleCategory;
- (void)setIsPhotoAccountArticleCategory:(BOOL)arg1;
- (void).cxx_destruct;
@end
