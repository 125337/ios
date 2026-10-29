@interface MultiReaderMessageViewModel : ReaderMessageViewModel <RichTextLayoutDelegate, BrandPaySubcribeMgrExt, BrandFinderLiveDataWrapperExt, WCFinderLiveExt>
{
    NSMutableArray * m_titleSizeArr; // +0x90
    NSMutableDictionary * m_titleStyleDic; // +0x98
    NSMutableArray * m_digestSizeArr; // +0xa0
    NSMutableDictionary * m_digestStyleDic; // +0xa8
    NSMutableDictionary * m_isPaidStateDic; // +0xb0
    NSMutableDictionary * m_pageIdentifier2IndexDic; // +0xb8
    BOOL m_isPaySubcribeOpen; // +0xc0
    id <MultiReaderMessageCellViewDelegate> _multiReaderMessageCellViewDelegate; // +0xc8
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)messageNodeViewHeight;
- (double)appendNodeViewHeightIfIndex:(long long)arg1;
- (double)articleTopItemViewHeight:(id)arg1;
- (double)textTopItemViewHeight:(id)arg1;
- (double)textNormalItemViewHeight:(id)arg1 index:(unsigned int)arg2;
- (double)heightForTopItemView;
- (id)genTingItemForIndex:(unsigned int)arg1;
- (unsigned long long)musicSouceForIndex:(unsigned int)arg1;
- (unsigned int)playLengthForIndex:(unsigned int)arg1;
- (unsigned int)imageCountForIndex:(unsigned int)arg1;
- (BOOL)showMultiImageStyleForIndex:(unsigned int)arg1;
- (id)coverImageURLsForIndex:(unsigned int)arg1;
- (id)getRichTextView:(double)arg1 font:(id)arg2;
- (id)itemLabelWithFont:(id)arg1 width:(double)arg2;
- (void)resetTextSize;
- (CGSize)titleSizeOfIndex:(unsigned int)arg1;
- (id)titleOfIndex:(unsigned int)arg1;
- (id)titleStylesForIndex:(unsigned int)arg1;
- (CGSize)calculateTitleLabelSize:(unsigned int)arg1;
- (CGSize)digestSizeOfIndex:(unsigned int)arg1;
- (double)labelMaxWidthOfIndex:(unsigned int)arg1;
- (unsigned long long)limitLineNumberOfIndex:(unsigned int)arg1;
- (id)digestStylesForIndex:(unsigned int)arg1;
- (CGSize)calculateDigestLabelSize:(unsigned int)arg1;
- (BOOL)isItemNoCover:(id)arg1;
- (void)initPayStateIfNeed;
- (BOOL)isPayContentForIndex:(unsigned int)arg1;
- (BOOL)canShowImageIconForIndex:(unsigned int)arg1;
- (BOOL)isPaidForIndex:(unsigned int)arg1;
- (CGSize)payTagSizeForIndex:(unsigned int)arg1;
- (id)paySubcribeTagImageForIndex:(unsigned int)arg1;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(id)arg1 fullUrl:(id)arg2;
- (void)updatePayStatus:(BOOL)arg1 pageIdentifier:(id)arg2 index:(long long)arg3;
- (void)updateTitleAtIndex:(long long)arg1;
- (id)firstFinderLiveCardViewModel;
- (unsigned long long)firstBrandFinderLiveCardStyle;
- (double)finderLiveCardViewHeight;
- (BOOL)isBrandLiveContentShouldUseNewFinderCardViewStyleForIndex:(unsigned int)arg1;
- (BOOL)isBrandLiveContentForIndex:(unsigned int)arg1;
- (BOOL)isBrandLiveForIndex:(unsigned int)arg1;
- (id)brandLiveStatusWordingForIndex:(unsigned int)arg1;
- (CGSize)brandLiveSizeForIndex:(unsigned int)arg1;
- (BOOL)isYuanBaoPromotionForIndex:(unsigned int)arg1;
- (void)doJumpToLiveRoom:(id)arg1 forIndex:(unsigned int)arg2;
- (BOOL)canForwardBrandLiveForIndex:(unsigned int)arg1;
- (void)doForwardBrandLiveContent:(id)arg1 forIndex:(unsigned int)arg2;
- (void)fetchLiveDetailDataIfNeed;
- (void)fetchLiveStatusIfNeed;
- (void)fetchLiveStatusForIndex:(unsigned int)arg1;
- (void)fetchDetailDataForIndex:(unsigned int)arg1;
- (BOOL)isTXNewsMsg;
- (void)onLiveStatusChangedWithExportId:(id)arg1;
- (void)onReplayStatusChangedWithExportId:(id)arg1;
- (void)onRecommendReasonChangedWithExportId:(id)arg1;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (id)multiReaderMessageCellViewDelegate;
- (void)setMultiReaderMessageCellViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end
