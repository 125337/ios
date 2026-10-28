@interface WCFinderShareFeedCellViewModel : CommonMessageViewModel
{
    WCFinderDataItem * _dataItem; // +0x70
    WCFinderShareToMomentsItem * _item; // +0x78
}
+ (double)adjustImageRatioBy:(CGSize)arg1;
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)item;
- (BOOL)isPureText;
- (id)refObjectTid;
- (BOOL)isLive;
- (id)avatarUrl;
- (id)nickname;
- (CGSize)imageSize;
- (double)adjustImageRatio;
- (id)coverUrl;
- (id)fullCoverUrl;
- (BOOL)isVideo;
- (BOOL)isLongVideo;
- (id)desc;
- (unsigned long long)mediaPhotoCount;
- (void)exposeReport;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)defaultContentViewSize;
- (CGSize)pureTextContentViewSize;
- (double)estimateWidth;
- (BOOL)hadFullInfo;
- (id)fullClipInset;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (id)authIconURL;
- (unsigned long long)authIconType;
- (BOOL)isMemberShipFeed;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
