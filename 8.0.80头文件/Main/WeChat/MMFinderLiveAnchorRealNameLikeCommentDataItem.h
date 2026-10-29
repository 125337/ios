@interface MMFinderLiveAnchorRealNameLikeCommentDataItem : MMLiveCommentDataItem
{
    BOOL _notificationExposureReported; // +0x8
    MMFinderLiveAnchorRealNameLikeNotificationMsg * _notificationMsg; // +0x10
}
- (id)initWithAnchorRealNameLikeNotificationMsg:(id)arg1;
- (void)updateNotificationMsg:(id)arg1;
- (id)notificationMsg;
- (void)setNotificationMsg:(id)arg1;
- (BOOL)notificationExposureReported;
- (void)setNotificationExposureReported:(BOOL)arg1;
- (void).cxx_destruct;
@end
