@interface CBTCoopV2TimelineSearchAsstBoardViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _timelineAllUnavailable; // +0x8
    BOOL _timelineHasShortfall; // +0x9
    BOOL _hasResolvedRemoteData; // +0xa
    BOOL _hasLoadedLocalData; // +0xb
    BOOL _hasRequestedRemoteData; // +0xc
    NSArray * _dataItems; // +0x10
    id /* block */ _onDataUpdated; // +0x18
    id /* block */ _onRemoteDataResolved; // +0x20
    double _timelineListHeight; // +0x28
    NSMutableDictionary * _itemHeightCache; // +0x30
    WCTimelineBatchGetFeedsCGI * _batchGetFeedsCGI; // +0x38
    double _lastMeasuredCellWidth; // +0x40
    double _lastCalculatedListWidth; // +0x48
    unsigned long long _lastRequestedFeedCount; // +0x50
}
+ (double)listWidthForCellWidth:(double)arg1;
+ (id)itemKeyForDataItem:(id)arg1;
+ (id)cacheKeyForDataItem:(id)arg1 listWidth:(double)arg2;
+ (id)signatureForDataItem:(id)arg1;
+ (BOOL)isEquivalentDataItems:(id)arg1 other:(id)arg2;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)feedIds;
- (unsigned long long)requestedFeedCount;
- (unsigned long long)visibleFeedCount;
- (void)prepareDataIfNeededForCellWidth:(double)arg1;
- (id)itemHeightsForCellWidth:(double)arg1;
- (void)invalidateTimelineHeightCache;
- (double)listTopOffset;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (void)onClickAction;
- (void)loadLocalDataIfNeeded;
- (void)requestRemoteDataIfNeeded;
- (void)handleRemoteDataItems:(id)arg1 requestedCount:(unsigned long long)arg2;
- (void)handleAllUnavailable;
- (void)recalculateTimelineHeightForCellWidth:(double)arg1 force:(BOOL)arg2;
- (double)unavailableTextLineHeight;
- (double)allGoneLabelTopPadding;
- (double)unavailableFooterTopPadding;
- (double)allGoneLabelHeight;
- (double)unavailableFooterHeight;
- (double)extraUnavailableHeight;
- (double)cachedHeightForDataItem:(id)arg1 listWidth:(double)arg2;
- (double)listWidthForCellWidth:(double)arg1;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (id /* block */)onDataUpdated;
- (void)setOnDataUpdated:(id /* block */)arg1;
- (id /* block */)onRemoteDataResolved;
- (void)setOnRemoteDataResolved:(id /* block */)arg1;
- (double)timelineListHeight;
- (void)setTimelineListHeight:(double)arg1;
- (BOOL)timelineAllUnavailable;
- (void)setTimelineAllUnavailable:(BOOL)arg1;
- (BOOL)timelineHasShortfall;
- (void)setTimelineHasShortfall:(BOOL)arg1;
- (BOOL)hasResolvedRemoteData;
- (void)setHasResolvedRemoteData:(BOOL)arg1;
- (id)itemHeightCache;
- (void)setItemHeightCache:(id)arg1;
- (id)batchGetFeedsCGI;
- (void)setBatchGetFeedsCGI:(id)arg1;
- (double)lastMeasuredCellWidth;
- (void)setLastMeasuredCellWidth:(double)arg1;
- (double)lastCalculatedListWidth;
- (void)setLastCalculatedListWidth:(double)arg1;
- (BOOL)hasLoadedLocalData;
- (void)setHasLoadedLocalData:(BOOL)arg1;
- (BOOL)hasRequestedRemoteData;
- (void)setHasRequestedRemoteData:(BOOL)arg1;
- (unsigned long long)lastRequestedFeedCount;
- (void)setLastRequestedFeedCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
