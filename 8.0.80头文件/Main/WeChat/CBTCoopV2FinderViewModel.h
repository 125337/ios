@interface CBTCoopV2FinderViewModel : CBTCoopV2AsstBoardViewModel
{
    WCFinderDataItem * _dataItem; // +0x8
    NSString * _transferredXMLForForward; // +0x10
    NSDictionary * _reportInfo; // +0x18
    double _verticalPadding; // +0x20
    NSString * _shareUrlForForward; // +0x28
    WCFinderShareToMomentsItem * _item; // +0x30
    double _cellWidth; // +0x38
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)item;
- (id)refObjectTid;
- (id)nickname;
- (id)desc;
- (BOOL)isLive;
- (BOOL)isVideo;
- (BOOL)isLongVideo;
- (BOOL)isMemberShipFeed;
- (id)avatarUrl;
- (CGSize)imageSize;
- (id)coverUrl;
- (id)fullCoverUrl;
- (CGSize)horizontalCardItemSize;
- (unsigned long long)mediaPhotoCount;
- (id)authIconURL;
- (unsigned long long)authIconType;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)displaySizeWithOriginSize:(CGSize)arg1;
- (double)adjustImageRatioBy:(CGSize)arg1;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (id)parseFinderShareItemFromXML:(id)arg1;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (BOOL)isForwardable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)buildForwardHistoryCardWraps;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardDescription;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)transferredXMLForForward;
- (void)setTransferredXMLForForward:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (double)verticalPadding;
- (void)setVerticalPadding:(double)arg1;
- (id)shareUrlForForward;
- (void)setShareUrlForForward:(id)arg1;
- (void)setItem:(id)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (void).cxx_destruct;
@end
