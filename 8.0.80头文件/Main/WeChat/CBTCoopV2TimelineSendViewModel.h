@interface CBTCoopV2TimelineSendViewModel : CBTAsstBoardBaseViewModel <WCFacadeExt>
{
    BOOL _isMarkdownStyle; // +0x8
    BOOL _usesTransparentMarkdownBackground; // +0x9
    NSString * _title; // +0x10
    NSString * _subtitle; // +0x18
    NSString * _feedId; // +0x20
    CBTCoopV2TimelineSendCellView * _cellView; // +0x28
    NSString * _pendingFetchItemId; // +0x30
    double _pendingJumpTapTime; // +0x38
}
+ (id)viewModelWithTitle:(id)arg1 subtitle:(id)arg2 feedId:(id)arg3 cardWrap:(id)arg4 delegate:(id)arg5;
+ (double)cardWidthForCellWidth:(double)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (double)cardWidthForCellWidth:(double)arg1;
- (double)titleLineHeight;
- (double)subtitleLineHeight;
- (double)cardHeight;
- (double)iconSize;
- (void)jumpToTimelineFeed;
- (void)_performJumpToTimelineFeedWithDataItem:(id)arg1 tTap:(double)arg2;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (BOOL)isSourceFromUser;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)title;
- (id)subtitle;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (BOOL)isMarkdownStyle;
- (void)setIsMarkdownStyle:(BOOL)arg1;
- (BOOL)usesTransparentMarkdownBackground;
- (void)setUsesTransparentMarkdownBackground:(BOOL)arg1;
- (id)pendingFetchItemId;
- (void)setPendingFetchItemId:(id)arg1;
- (double)pendingJumpTapTime;
- (void)setPendingJumpTapTime:(double)arg1;
- (void).cxx_destruct;
@end
