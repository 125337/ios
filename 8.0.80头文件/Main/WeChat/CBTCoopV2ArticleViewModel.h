@interface CBTCoopV2ArticleViewModel : CBTCoopV2AsstBoardViewModel <ICBTContactGetExt, IMsgExt>
{
    BOOL _shouldHideBubbleArrow; // +0x8
    BOOL _authorContactLoadStarted; // +0x9
    CBTCoopV2ArticleCellView * _cellView; // +0x10
    CContact * _authorContact; // +0x18
}
+ (double)cardWidthForCellWidth:(double)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)articleTitle;
- (id)digestText;
- (id)coverImageURL;
- (id)coverImage;
- (id)headImageURL;
- (id)authorName;
- (void)loadAuthorContactIfNeeded;
- (void)startWarmupArticle;
- (void)jumpToArticle;
- (BOOL)isForwardable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (double)cardWidthForCellWidth:(double)arg1;
- (double)titleLineHeight;
- (double)digestLineHeight;
- (double)cardHeight;
- (double)coverSize;
- (void)jumpWebView:(id)arg1 nsUrl:(id)arg2 nsRawUrl:(id)arg3;
- (void)onGetContactFromServer:(id)arg1;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (id)buildForwardHistoryCardWraps;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)coopV2ReportCardDescription;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (BOOL)shouldHideBubbleArrow;
- (void)setShouldHideBubbleArrow:(BOOL)arg1;
- (id)authorContact;
- (void)setAuthorContact:(id)arg1;
- (BOOL)authorContactLoadStarted;
- (void)setAuthorContactLoadStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end
