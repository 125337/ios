@interface BrandFinderLiveMessageViewModel : BaseMessageViewModel <BrandFinderLiveDataWrapperExt, WCFinderLiveExt>
{
    BOOL _isShouldLayout; // +0x5a
    id <BrandFinderLiveMessageCellViewDelegate> _finderLiveDelegate; // +0x60
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)shouldLayoutIfNeeded;
- (id)accessibilityDescription;
- (CGSize)brandFinderLiveMessageViewSize;
- (BOOL)shouldUseNewFinderCardViewStyle;
- (unsigned long long)finderLiveCardStyle;
- (id)cardViewModel;
- (id)liveDataWrapper;
- (void)doJumpToLiveRoom:(id)arg1;
- (BOOL)canForward;
- (void)doForward:(id)arg1;
- (void)fetchDetailData;
- (void)fetchLiveStatus;
- (void)onLiveStatusChangedWithExportId:(id)arg1;
- (void)onReplayStatusChangedWithExportId:(id)arg1;
- (void)onRecommendReasonChangedWithExportId:(id)arg1;
- (void)onRecommendReasonAvailableOrUnavailableWithExportId:(id)arg1;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (id)finderLiveDelegate;
- (void)setFinderLiveDelegate:(id)arg1;
- (BOOL)isShouldLayout;
- (void)setIsShouldLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
