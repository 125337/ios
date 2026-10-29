@interface MMFinderLiveRealNameFriendLikeNotifyStyleCommentPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell
{
    MMFinderLiveRealNameFriendLikeNotificationView * _notificationView; // +0x8
}
- (id)initWithCellFrame:(id)arg1;
- (void)prepareForReuse;
- (void)updateBackGroundColor;
- (void)layoutUI;
- (BOOL)isUITypeValid;
- (void)layoutNotificationView;
- (void)tapNotification;
- (void)setCellFrame:(id)arg1;
- (id)getSelfAccessibility;
- (id)friendLikeDataItem;
- (id)finderLiveTask;
- (id)notificationView;
- (void)setNotificationView:(id)arg1;
- (void).cxx_destruct;
@end
