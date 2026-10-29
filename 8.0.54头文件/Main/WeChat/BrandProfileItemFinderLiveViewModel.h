@interface BrandProfileItemFinderLiveViewModel : BrandProfileItemBaseViewModel <BrandFinderLiveDataWrapperExt, WCFinderLiveExt>
{
    BrandFinderLiveDataWrapper * _liveDataWrapperCache; // +0x10
    NSMutableArray * _liveTitleLabelStyles; // +0x18
    CGSize _liveTitleSize; // +0x20
}
- (id)tableViewCellClassName;
- (id)initWithItemMsg:(id)arg1;
- (double)calCellHeight;
- (double)normalCoverBottomMargin;
- (id)coverImgURL;
- (id)title;
- (double)titleMaxWidth;
- (id)titleLabelStyles;
- (id)desc;
- (void)clearLayoutCache;
- (id)profileFinderLiveInfo;
- (id)finderLiveDataWrapper;
- (id)cardViewModel;
- (BOOL)shouldUseNewFinderCardViewStyle;
- (unsigned long long)finderLiveCardStyle;
- (unsigned long long)style;
- (id)finderLiveTitle;
- (id)finderCoverImgUrl;
- (double)normalCoverTopMargin;
- (BOOL)isBrandLiveContent;
- (BOOL)isBrandLive;
- (id)brandLiveStatusWording;
- (CGSize)brandLiveSize;
- (void)fetchLiveStatus;
- (void)fetchLiveDetailData;
- (void)onLiveStatusChangedWithExportId:(id)arg1;
- (void)onReplayStatusChangedWithExportId:(id)arg1;
- (void)onRecommendReasonChangedWithExportId:(id)arg1;
- (void)onRecommendReasonAvailableOrUnavailableWithExportId:(id)arg1;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (id)liveDataWrapperCache;
- (void)setLiveDataWrapperCache:(id)arg1;
- (id)liveTitleLabelStyles;
- (void)setLiveTitleLabelStyles:(id)arg1;
- (CGSize)liveTitleSize;
- (void)setLiveTitleSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

