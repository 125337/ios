@interface WCFinderFullFeedCommonViewModel : NSObject <WCFinderFullFeedCommonViewModelProtocol>
{
    BOOL _shouldPreserveFeeds; // +0x8
    id <WCFinderFullFeedCommonVMDelegate> _delegate; // +0x10
    NSMutableArray * _allDataItems; // +0x18
    NSMutableSet * _tidContainSet; // +0x20
    NSData * _lastBuff; // +0x28
    unsigned long long _placeHolderDisplayFlag; // +0x30
    NSString * _needCleanFeedIDAfterAppend; // +0x38
}
- (id)init;
- (long long)firstFeedNum;
- (unsigned long long)dataItemStartSection;
- (BOOL)isDataEmpty;
- (unsigned long long)getAllDataItemsCount;
- (BOOL)isDataIndexPath:(id)arg1;
- (BOOL)isDataSection:(unsigned long long)arg1;
- (id)contentVMAtSection:(unsigned long long)arg1;
- (long long)getFeedSectionNum:(long long)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (id)contentMediaIndexPathWithTid:(id)arg1;
- (void)deleteFeedWithTid:(id)arg1;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)onFinderContentVMDelete:(id)arg1;
- (BOOL)isSplitBubbleLayoutVMAtSection:(unsigned long long)arg1;
- (unsigned long long)sectionOfTid:(id)arg1;
- (unsigned long long)feedIndexOfTid:(id)arg1;
- (void)realRemoveContentVMFromDataSource:(id)arg1;
- (void)realRemoveContentVMDataSourceWithSectionIndexSet:(id)arg1;
- (id)getAllUnReadLiveFeed;
- (unsigned long long)getFirstUnExposedItemIndex;
- (unsigned long long)getLastExposedItemsIndex;
- (void)collectUnreadDataItems:(id)arg1;
- (int)tabType;
- (id)lastBuffer;
- (int)feedViewControllerScene;
- (BOOL)isValiadServerDataItem:(id)arg1;
- (BOOL)insertPopupContentVM:(id)arg1 aboveFeedId:(id)arg2;
- (long long)indexAtContentVMTid:(id)arg1;
- (BOOL)containTargetFeedId:(id)arg1;
- (id)getFeedReportInfoAtCellSection:(long long)arg1;
- (id)getFeedReportInfoForContentVM:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1;
- (void)triggerEnhanceListWithContentVM:(id)arg1 eventType:(int)arg2 streamType:(int)arg3;
- (void)enhanceFeedByLatestPostInfo;
- (void)handleComingEnhanceList:(id)arg1 withStreamType:(int)arg2 targetContentVM:(id)arg3;
- (void)disposeEnhanceInsertFeedsWithContentVM:(id)arg1 eventType:(int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)allDataItems;
- (void)setAllDataItems:(id)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (BOOL)shouldPreserveFeeds;
- (void)setShouldPreserveFeeds:(BOOL)arg1;
- (unsigned long long)placeHolderDisplayFlag;
- (void)setPlaceHolderDisplayFlag:(unsigned long long)arg1;
- (id)needCleanFeedIDAfterAppend;
- (void)setNeedCleanFeedIDAfterAppend:(id)arg1;
- (void).cxx_destruct;
@end

