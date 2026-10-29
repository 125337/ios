@interface WCFinderShareFeedCellViewModel : CommonMessageViewModel
{
    WCFinderDataItem * _dataItem; // +0x70
    WCFinderShareToMomentsItem * _item; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
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
- (unsigned long long)mediaPhotoCount;
- (id)authIconURL;
- (unsigned long long)authIconType;
- (void)exposeReport;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)displaySizeWithOriginSize:(CGSize)arg1;
- (double)adjustImageRatioBy:(CGSize)arg1;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (id)finderXmlStrippingChatRoomPrefix;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
