@interface WCAdvertiseDataHelper : MMObject
{
    NSMutableArray * m_advertiseList; // +0x8
    NSMutableArray * m_advertiseMsgXmlList; // +0x10
    WCAdvertiseCommentUploadMgr * m_adCommentUploader; // +0x18
    BOOL m_bLoaded; // +0x20
    NSObject<OS_dispatch_queue> * _dataSaveQueue; // +0x28
    NSMutableDictionary * _adPullCompareCache; // +0x30
}
- (id)init;
- (id)GetPathOfWCAdvertiseStorage;
- (BOOL)hasCommented:(id)arg1 dataItem:(id)arg2;
- (BOOL)hasOutOfNoActionTime:(id)arg1 dataItem:(id)arg2;
- (BOOL)isAdDataValidForLastClickTime:(id)arg1 dataItem:(id)arg2;
- (BOOL)hasExposured:(id)arg1 dataItem:(id)arg2;
- (BOOL)hasOutOfExposureTime:(id)arg1 dataItem:(id)arg2;
- (BOOL)hasOutOfAdEndTime:(id)arg1 dataItem:(id)arg2;
- (BOOL)isAdPreviewExpired:(id)arg1;
- (BOOL)IsAdvertiseDataValid:(id)arg1 dataItem:(id)arg2;
- (BOOL)IsAdvertiseDataCanBeReused:(id)arg1 dataItem:(id)arg2;
- (void)reuseAdvertiseData:(id)arg1 extInfo:(id)arg2;
- (void)reuseAdvertiseData:(id)arg1 isFromServerPush:(BOOL)arg2;
- (void)tryLoadAdvertiseData;
- (void)tryCleanLocalAdvertiseDataOnDuo;
- (void)saveAdvertiseDatas;
- (unsigned int)getEarliestTimeOfCommentsAndLikes:(id)arg1;
- (void)LL_addAdvertiseData:(id)arg1 IsAtFriend:(BOOL)arg2 needUpdateCreateTime:(BOOL)arg3;
- (long long)advertiseStorageMaxCount;
- (void)addAdvertiseData:(id)arg1 needUpdateCreateTime:(BOOL)arg2;
- (void)addAdvertiseDataList:(id)arg1;
- (void)deleteAdvertiseDataList:(id)arg1 extInfo:(id)arg2;
- (void)deleteAdvertiseDataList:(id)arg1;
- (void)deleteAdvertiseData:(id)arg1;
- (void)deleteAllAdvertiseData;
- (void)updateAdvertiseData:(id)arg1;
- (void)updateAdvertiseDataList:(id)arg1;
- (void)updateAdvertiseDataExceptCreateTime:(id)arg1;
- (void)updateAdvertiseDataWithClickTimestamp:(id)arg1;
- (id)getAdvertiseDataByCurMinTime:(unsigned int)arg1 MaxTime:(unsigned int)arg2;
- (id)getAdvertiseDataByCurMinTime:(unsigned int)arg1 MaxTime:(unsigned int)arg2 checkDataValid:(BOOL)arg3;
- (id)getTopAdvertiseDataByTopNumber:(unsigned int)arg1;
- (id)getAdvertiseItemByID:(id)arg1;
- (BOOL)isAdvertiseItemExistsWithID:(id)arg1;
- (id)GetPathOfWCAdvertiseMsgXmlStorage;
- (void)saveAdvertiseMsgXmlDatas;
- (id)getAdvertiseMsgXmlList;
- (void)addAdvertiseMsgXml:(id)arg1;
- (void)removeAllCacheAdvertiseMsgXml;
- (BOOL)checkInvalidAdData;
- (void)updateAtFriendAdvertiseData:(id)arg1;
- (void)safeRemoveAdInAdListAtIndex:(unsigned long long)arg1;
- (void)reportAdDeleteForExposureNoAction:(id)arg1 dataItem:(id)arg2;
- (void)saveAdPullCompareInfo:(id)arg1;
- (id)fetchAdPullCompareInfo:(id)arg1;
- (void)removeAdPullCompareInfo:(id)arg1;
- (void)cleanAdPullCompareCache;
- (void)tryToStoreWuidFromHistoryAd;
- (id)m_adCommentUploader;
- (void)setM_adCommentUploader:(id)arg1;
- (id)dataSaveQueue;
- (void)setDataSaveQueue:(id)arg1;
- (id)adPullCompareCache;
- (void)setAdPullCompareCache:(id)arg1;
- (void).cxx_destruct;
@end
