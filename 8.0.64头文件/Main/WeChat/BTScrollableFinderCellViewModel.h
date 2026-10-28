@interface BTScrollableFinderCellViewModel : BTBaseRecommendAppMsgCellViewModel <WCFinderMPInterestDataExt>
{
    NSMutableArray * _finderItemViewModelArr; // +0x28
    NSMutableArray * _finderItemViewModelArrForDisplay; // +0x30
    BOOL _hasUpdateDatas; // +0x38
    BOOL _hasRequestFinderInterestData; // +0x39
    id <BTScrollableFinderCellViewModelDelegate> _delegate; // +0x40
    WCFinderMPInterestData * _finderInterestData; // +0x48
    NSArray * _indexesOfExposedItemNeedToReport; // +0x50
}
+ (BOOL)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
+ (double)cellWidth;
+ (double)cellHeight;
- (id)itemViewClassName;
- (void)updateWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 accountIndex:(unsigned int)arg4 appMsgIndex:(unsigned int)arg5 viewWidth:(double)arg6;
- (BOOL)isDataChanged;
- (void)resetData;
- (BOOL)enableFinderInterestCard;
- (BOOL)hasFinderInteresetData;
- (void)requestFinderInterestCardIfNeeded;
- (BOOL)isFinderInterestDataWithIndex:(long long)arg1;
- (unsigned long long)itemCount;
- (id)finderItemViewModelArr;
- (id)finderItemViewModelArrForDisplay;
- (id)title;
- (long long)getDataIndexFromDisplayIndex:(long long)arg1;
- (long long)getDisplayIndexFromDataIndex:(long long)arg1;
- (void)clearFinderItemViewModelArrCache;
- (void)doCellViewDeleteAnimationWithItemIndexArr:(id)arg1;
- (double)viewHeight;
- (id)finderDataWrapper;
- (void)setFinderInterestData:(id)arg1;
- (void)stopAllAutoPlayCell;
- (void)onDisappear;
- (void)onFinderMPInterestDataDidDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderInterestData;
- (id)indexesOfExposedItemNeedToReport;
- (void)setIndexesOfExposedItemNeedToReport:(id)arg1;
- (BOOL)hasUpdateDatas;
- (void)setHasUpdateDatas:(BOOL)arg1;
- (BOOL)hasRequestFinderInterestData;
- (void)setHasRequestFinderInterestData:(BOOL)arg1;
- (void).cxx_destruct;
@end
