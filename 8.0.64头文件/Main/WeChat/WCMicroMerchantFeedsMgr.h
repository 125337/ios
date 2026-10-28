@interface WCMicroMerchantFeedsMgr : NSObject
{
    unsigned int _foldSectionSize; // +0x8
    MyWCDB * _database; // +0x10
    id /* block */ _groupItemUpdatedBlock; // +0x18
    id <WCMicroMerchantFeedsMgrDelegate> _delegate; // +0x20
    NSMutableDictionary * _microMerchantFeedGroups; // +0x28
    NSMutableDictionary * _reverseFeedID2GroupID; // +0x30
    NSMutableArray * _segments; // +0x38
    NSMutableDictionary * _microMerchantFeedsDataItemDict; // +0x40
    WCTimelineBatchGetFeedsCGI * _batchGetFeedsCGI; // +0x48
}
- (id)initWithDatabase:(id)arg1;
- (void)dealloc;
- (void)reloadCacheDatas;
- (void)checkFoldSizeChange;
- (void)dropAllMicroMerchantTableData;
- (void)cleanUpTables;
- (void)clearSoftDeletedMircoMechantFeeds;
- (void)clearNoUseSegments:(id)arg1 checkCnt:(unsigned int)arg2;
- (void)preloadMicroMerchantFeedsGroupOnBeigin;
- (void)preloadMicroMerchantFeedsGroupFromBottom:(id)arg1 toTop:(id)arg2;
- (id)foldSyncContext;
- (id)getCachedMicroMerchantFeedGroups;
- (id)getCachedMicroMerchantFeedGroup:(id)arg1;
- (id)filterIDList:(id)arg1 withMaxID:(id)arg2;
- (void)mergeTimelineIdx:(id)arg1;
- (id)splitArray:(id)arg1 pageSize:(unsigned int)arg2;
- (id)convertFeedIdArrayToDBSegments:(id)arg1;
- (void)saveUpdateSegment:(id)arg1 InsertSegments:(id)arg2;
- (void)updateMicroMerchantGroupCache:(id)arg1;
- (void)updateMicroMerchantGroupDatabase:(id)arg1 dataList:(id)arg2;
- (void)deleteAllCacheForGroupId:(id)arg1;
- (id)mergeMicroMerchantFeeds:(id)arg1 feedList:(id)arg2;
- (void)updateMicroMerchantGroupsCache:(id)arg1 dataList:(id)arg2;
- (id)getDataItemInDatabase:(id)arg1;
- (BOOL)deleteDataItemInDatabase:(id)arg1;
- (BOOL)deleteRelationInDatabase:(id)arg1;
- (BOOL)reloadDataItemFromDatabaseToCache:(id)arg1;
- (id)getMicroMerchantDataItemsByIds:(id)arg1;
- (void)deleteAllDatabaseObjectForGroupId:(id)arg1;
- (id)getDataItemInCache:(id)arg1;
- (BOOL)modifyCache:(id)arg1;
- (BOOL)deleteDataItemInCache:(id)arg1;
- (id)getDataItemsFromCache:(id)arg1;
- (BOOL)modifyDataItemInCache:(id)arg1 groupId:(id)arg2;
- (BOOL)replaceDataItemCache:(id)arg1 forGroupId:(id)arg2;
- (BOOL)removeAllDataItemsInCache:(id)arg1;
- (BOOL)deleteDataItemInCache:(id)arg1 groupId:(id)arg2;
- (id)getDataItemInCache:(id)arg1 groupId:(id)arg2;
- (unsigned long long)findDataIndexInCache:(id)arg1 itemID:(id)arg2;
- (id)findGroupIdWithFeedId:(id)arg1;
- (BOOL)isFeedIDFoldInGroup:(id)arg1;
- (long long)microMerchantFeedStatusForFeedID:(id)arg1;
- (void)fetchGroupItemsFromSvr:(id)arg1 originalDataList:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchGroupItemsFromSvr:(id)arg1 originalDataList:(id)arg2 fetchFeedIds:(id)arg3 completion:(id /* block */)arg4;
- (void)tryMergeSvrDataListDataItem:(id)arg1 withLocal:(id)arg2;
- (id)dataItemListToDataDict:(id)arg1;
- (void)tryMergeSvrDataListComment:(id)arg1 withLocal:(id)arg2;
- (BOOL)isTimelineUnfoldedFromUsername:(id)arg1;
- (BOOL)unfoldTimelineFromUsername:(id)arg1;
- (void)dumpAllCaches;
- (void)dumpReverseIDMap:(id)arg1;
- (void)dumpMicroMerchantFeedsGroup:(id)arg1;
- (void)dumpSegments:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id /* block */)groupItemUpdatedBlock;
- (void)setGroupItemUpdatedBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)microMerchantFeedGroups;
- (void)setMicroMerchantFeedGroups:(id)arg1;
- (id)reverseFeedID2GroupID;
- (void)setReverseFeedID2GroupID:(id)arg1;
- (id)segments;
- (void)setSegments:(id)arg1;
- (id)microMerchantFeedsDataItemDict;
- (void)setMicroMerchantFeedsDataItemDict:(id)arg1;
- (unsigned int)foldSectionSize;
- (void)setFoldSectionSize:(unsigned int)arg1;
- (id)batchGetFeedsCGI;
- (void)setBatchGetFeedsCGI:(id)arg1;
- (void).cxx_destruct;
@end
