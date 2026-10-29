@interface NotifyMessageViewModel : CommonMessageViewModel
{
    NotifyMsgItem * _notifyMsgItem; // +0x70
    WCFinderLiveShareCardExposeReportAdapter * _exposeReportAdapter; // +0x78
    NSDate * _startAutoPlay; // +0x80
    AnyPromise * _loadLiveInfoPromise; // +0x88
    MMFinderLiveContentVM * _contentVM; // +0x90
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
- (void).cxx_destruct;
@end

