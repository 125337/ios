@interface CBTCoopV2PhotoViewModel : CBTCoopV2AsstBoardViewModel <ICBTContactGetExt, IMsgExt>
{
    BOOL _useAspectFitForCover; // +0x8
    BOOL _sourceContactLoadStarted; // +0x9
    CBTCoopV2PhotoCellView * _cellView; // +0x10
    CContact * _sourceContact; // +0x18
    double _cellWidth; // +0x20
}
+ (BOOL)canRenderPhotoWithCardWrap:(id)arg1;
+ (BOOL)isStickerCardWrap:(id)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)isHorizontalCard;
- (id)coverImageURL;
- (id)coverImage;
- (BOOL)isLongPic;
- (double)aspectRatio;
- (id)title;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)sourceNickname;
- (BOOL)hasSourceView;
- (id)headImageURL;
- (void)loadSourceContactIfNeeded;
- (void)onClickAction;
- (void)onImageTap;
- (void)jumpWebView:(id)arg1 nsUrl:(id)arg2 nsRawUrl:(id)arg3;
- (id)buildForwardHistoryCardWraps;
- (BOOL)isForwardable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (void)onGetContactFromServer:(id)arg1;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (BOOL)useAspectFitForCover;
- (void)setUseAspectFitForCover:(BOOL)arg1;
- (id)sourceContact;
- (void)setSourceContact:(id)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (BOOL)sourceContactLoadStarted;
- (void)setSourceContactLoadStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end
