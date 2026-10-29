@interface CBTCoopV2FinderLiveViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _isFinderLiveCategory; // +0x8
    NSString * _liveTitle; // +0x10
    NSString * _docid; // +0x18
    NSString * _imageURL; // +0x20
    double _coverWidth; // +0x28
    double _coverHeight; // +0x30
    NSString * _sourceTitle; // +0x38
    NSString * _sourceIconURL; // +0x40
    unsigned long long _liveStatus; // +0x48
    NSString * _liveStatusDesc; // +0x50
    NSString * _jsapiName; // +0x58
    NSString * _jsapiParam; // +0x60
}
+ (id)stringFromParams:(id)arg1 key:(id)arg2;
+ (XmlReaderNode_t *)findMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (XmlReaderNode_t *)findFinderLiveNodeFromMsg:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2 defaultValue:(id)arg3;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (BOOL)canRenderFinderLiveCard;
- (id)copyableText;
- (double)cardHeight;
- (double)coverAspectRatio;
- (BOOL)isLandscapeCover;
- (CGSize)horizontalCardItemSize;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)liveStatusLabelText;
- (BOOL)liveStatusBadgeIsAccent;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)coopV2ReportCardDescription;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (void)openFinderLiveFromViewController:(id)arg1;
- (id)parsedExtInfo;
- (void)updateFromXML:(id)arg1;
- (id)liveTitle;
- (void)setLiveTitle:(id)arg1;
- (id)docid;
- (void)setDocid:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (double)coverWidth;
- (void)setCoverWidth:(double)arg1;
- (double)coverHeight;
- (void)setCoverHeight:(double)arg1;
- (id)sourceTitle;
- (void)setSourceTitle:(id)arg1;
- (id)sourceIconURL;
- (void)setSourceIconURL:(id)arg1;
- (unsigned long long)liveStatus;
- (void)setLiveStatus:(unsigned long long)arg1;
- (id)liveStatusDesc;
- (void)setLiveStatusDesc:(id)arg1;
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (id)jsapiParam;
- (void)setJsapiParam:(id)arg1;
- (BOOL)isFinderLiveCategory;
- (void)setIsFinderLiveCategory:(BOOL)arg1;
- (void).cxx_destruct;
@end
