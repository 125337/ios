@interface NotifyMessageViewModel : CommonMessageViewModel
{
    BOOL _refreshingNotifySubscribeStatus; // +0x70
    BOOL _modifyingNotifySubscription; // +0x71
    NotifyMsgItem * _notifyMsgItem; // +0x78
    WCFinderLiveShareCardExposeReportAdapter * _exposeReportAdapter; // +0x80
    NSDate * _startAutoPlay; // +0x88
    AnyPromise * _loadLiveInfoPromise; // +0x90
    MMFinderLiveContentVM * _contentVM; // +0x98
    unsigned long long _notifySubscriptionRevision; // +0xa0
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)titleFont;
+ (id)itemsFont;
+ (id)reasonFont;
+ (double)itemsFontSize;
+ (BOOL)itemsDisplayContentAtTopicRight;
- (void)exposeExtStatsReportWhenDisappearFrom:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)calculateHeight;
- (id)notifyMsgItem;
- (void)refreshNotifySubscribeStatus;
- (void)modifyNotifySubscriptionWithAccept:(BOOL)arg1;
- (CGSize)imageSize;
- (double)verticalContentMargin;
- (BOOL)isLiveCell;
- (BOOL)isLiveCellLargeStyle;
- (void)report21158Expose;
- (void)setNotifyMsgItem:(id)arg1;
- (id)exposeReportAdapter;
- (void)setExposeReportAdapter:(id)arg1;
- (id)startAutoPlay;
- (void)setStartAutoPlay:(id)arg1;
- (id)loadLiveInfoPromise;
- (void)setLoadLiveInfoPromise:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (BOOL)refreshingNotifySubscribeStatus;
- (void)setRefreshingNotifySubscribeStatus:(BOOL)arg1;
- (BOOL)modifyingNotifySubscription;
- (void)setModifyingNotifySubscription:(BOOL)arg1;
- (unsigned long long)notifySubscriptionRevision;
- (void)setNotifySubscriptionRevision:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
