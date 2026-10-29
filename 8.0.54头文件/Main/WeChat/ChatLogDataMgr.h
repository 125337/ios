@interface ChatLogDataMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _arrSessionInfo; // +0x8
    unsigned long long _startLoadDataTime; // +0x10
    unsigned int _loadDataCostTime; // +0x18
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrSessionItems; // +0x20
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrImageSessionItems; // +0x38
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrVideoSessionItems; // +0x50
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFileSessionItems; // +0x68
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterSessionItems; // +0x80
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterImgSessionItems; // +0x98
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterVideoSessionItems; // +0xb0
    vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterFileSessionItems; // +0xc8
    NSObject<OS_dispatch_queue> * _removeFileQueue; // +0xe0
    BOOL _loadingData; // +0xe8
    BOOL _loadDataEnd; // +0xe9
    unsigned long long _oneMsgSize; // +0xf0
    BOOL _bGetProgress; // +0xf8
    BOOL _bGetDetailOfAggregationMsg; // +0xf9
    BOOL _filteringData; // +0xfa
    BOOL _filterDataEnd; // +0xfb
    unsigned int _msgOldestTime; // +0xfc
    unsigned int _msgNewestTime; // +0x100
    unsigned long long _allSessionSize; // +0x108
    unsigned long long _allOtherFileSize; // +0x110
    unsigned long long _allMsgSize; // +0x118
    unsigned long long _allMessageCount; // +0x120
    unsigned long long _allThumbFileSize; // +0x128
    unsigned long long _allThumbFileCount; // +0x130
    unsigned long long _allAudioSize; // +0x138
    unsigned long long _allAudioCount; // +0x140
    unsigned long long _allImgThumbSize; // +0x148
    unsigned long long _allImgThumbCount; // +0x150
    unsigned long long _allAppThumbSize; // +0x158
    unsigned long long _allAppThumbCount; // +0x160
    unsigned long long _allVideoThumbSize; // +0x168
    unsigned long long _allVideoThumbCount; // +0x170
    unsigned long long _allRawImageSize; // +0x178
    unsigned long long _allRawImageCount; // +0x180
    unsigned long long _allRawVideoSize; // +0x188
    unsigned long long _allRawVideoCount; // +0x190
    unsigned long long _allVideoCount; // +0x198
    unsigned long long _allFileCount; // +0x1a0
    unsigned long long _allImageCount; // +0x1a8
    unsigned long long _allRecordCount; // +0x1b0
    NSMutableArray * _arrBrandSessionInfo; // +0x1b8
    NSRecursiveLock * _detailRecurciveLock; // +0x1c0
    ChatLogDataStat * _stat; // +0x1c8
    id /* block */ _chatLogCalCompletion; // +0x1d0
    id /* block */ _chatLogFilterCalCompletion; // +0x1d8
    map<unsigned int, unsigned long long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long long>>> _sizeOfFileType; // +0x1e0
}
+ (id)getSessionNickName:(id)arg1;
+ (BOOL)isTmpFile:(id)arg1;
+ (BOOL)isAppRecordMsg:(id)arg1;
+ (BOOL)isCanAddToFileItems:(shared_ptr<ChatLogDataItem>)arg1;
+ (void)calculateTrueCount:(void *)arg1 retCount:(unsigned long long *)arg2 retSize:(unsigned long long *)arg3;
+ (void)recalculateHardlinkSizeForSessionItem:(void *)arg1;
+ (unsigned long long)getOneSessionItemAllSize:(void *)arg1;
+ (unsigned long long)getSessionItemAllSize:(const void *)arg1;
+ (unsigned long long)getSessionItemFileSize:(const void *)arg1;
+ (unsigned long long)getSessionItemVideoSize:(const void *)arg1;
+ (unsigned long long)getSessionItemImageSize:(const void *)arg1;
+ (unsigned long long)getSessionItemResSize:(const void *)arg1;
+ (id)convertSessionItemMsgSize:(const void *)arg1;
+ (id)convertSessionItemOtherSize:(const void *)arg1;
+ (id)convertSessionItem:(const void *)arg1;
+ (void)setAppRecordFirstOpen;
+ (BOOL)isAppRecordFirstOpen;
+ (id)getRelatedMemoryKV;
- (id)init;
- (void)dealloc;
- (void)startLoadData;
- (void)startLoadDataWithUsernames:(id)arg1;
- (void)startLoadDataWithDBSize:(unsigned long long)arg1;
- (void)startLoadDataWithDBSize:(unsigned long long)arg1 usernames:(id)arg2;
- (void)stopLoadData;
- (unsigned int)getLoadDataCostTime;
- (BOOL)isDataLoadEnd;
- (BOOL)isFilteringData;
- (BOOL)isAlreadyStartLoadData;
- (id)getSessionName:(id)arg1;
- (unsigned int)parseMesLocalIdFromPath:(id)arg1;
- (void)setChatLogData:(int)arg1 msgType:(int)arg2 withFilePath:(id)arg3 withLocalID:(unsigned int)arg4 dataItem:(void *)arg5 sessionItem:(void *)arg6;
- (void)resetChatLogData:(int)arg1 msgType:(int)arg2 withFilePath:(id)arg3 withLocalID:(unsigned int)arg4 dataItem:(void *)arg5 sessionItem:(void *)arg6;
- (void)getRecordMsgInnerFileInfo:(id)arg1 localID:(unsigned int)arg2 forFiles:(id)arg3 inSessionItem:(void *)arg4 innerIndex:(id)arg5;
- (void)setChatLogRecordDataForFolder:(id)arg1 sessionItem:(void *)arg2;
- (void)getFileSizeAndTimeForDataItem:(void *)arg1 with:(id)arg2 with:(unsigned long long)arg3;
- (void)analyseResDir:(id)arg1 dataType:(int)arg2 msgType:(int)arg3 sessionItem:(void *)arg4;
- (void)reanalyseOriginVideoAndImage:(void *)arg1;
- (id)getCacheKeyFromFullPath:(id)arg1;
- (id)expandFullPathFromCacheKey:(id)arg1;
- (void)completeAfterLoadDataFinish;
- (void)onLoadDataWithDBSize:(unsigned long long)arg1 usernames:(id)arg2;
- (void)getDetailInfoForSessionInfo:(shared_ptr<ChatLogSessionItem>)arg1 oneMsgSize:(unsigned long long)arg2;
- (unsigned long long)getCountOfSessionItem;
- (shared_ptr<ChatLogSessionItem>)getSessionItemOfIndex:(unsigned long long)arg1;
- (shared_ptr<ChatLogSessionItem>)getSessionItemWithUserName:(id)arg1 bFilter:(BOOL)arg2;
- (const void *)getAllSessionItem;
- (const void *)getImageSessionItem;
- (const void *)getVideoSessionItem;
- (const void *)getFileSessionItem;
- (void)p_innerStopDownloadUploadTask:(const void *)arg1;
- (void)deleteSessions:(const void *)arg1 startTime:(unsigned int)arg2 endTime:(unsigned int)arg3;
- (void)deleteSessionDataItems:(const void *)arg1 withType:(int)arg2;
- (void)deleteSessionDataItems:(const void *)arg1;
- (void)deleteImageItems:(const void *)arg1;
- (void)deleteVideoItems:(const void *)arg1;
- (void)deleteFileItems:(const void *)arg1;
- (void)deleteDataItems:(const void *)arg1;
- (void)p_removeDataItemInFull:(const void *)arg1;
- (void)p_removeDataItemInFilter:(const void *)arg1;
- (void)innerDeleteDataItem:(void *)arg1;
- (const void *)getAllFilterSessionItem;
- (const void *)getFilterImageSessionItem;
- (const void *)getFilterVideoSessionItem;
- (const void *)getFilterFileSessionItem;
- (void)reloadDataStartTime:(unsigned int)arg1 endTime:(unsigned int)arg2;
- (void)getFilterInfo:(shared_ptr<ChatLogSessionItem>)arg1 oneMsgSize:(unsigned long long)arg2 startTime:(unsigned int)arg3 endTime:(unsigned int)arg4;
- (unsigned int)getMsgOldestTime;
- (unsigned int)getMsgNewestTime;
- (id)getAllBackupSessionItem;
- (void)asyncGetBackupChatLogSize;
- (void)asyncGetChatLogSizeOfSession:(id)arg1 afterTime:(unsigned int)arg2 endTime:(unsigned int)arg3;
- (vector<std::shared_ptr<ChatLogDataItem>, std::allocator<std::shared_ptr<ChatLogDataItem>>>)getAllDataItems;
- (vector<std::shared_ptr<ChatLogDataItem>, std::allocator<std::shared_ptr<ChatLogDataItem>>>)getAllFilterDataItems;
- (unsigned long long)allSessionSize;
- (void)setAllSessionSize:(unsigned long long)arg1;
- (unsigned long long)allOtherFileSize;
- (void)setAllOtherFileSize:(unsigned long long)arg1;
- (unsigned long long)allMsgSize;
- (void)setAllMsgSize:(unsigned long long)arg1;
- (unsigned long long)allMessageCount;
- (void)setAllMessageCount:(unsigned long long)arg1;
- (unsigned long long)allThumbFileSize;
- (void)setAllThumbFileSize:(unsigned long long)arg1;
- (unsigned long long)allThumbFileCount;
- (void)setAllThumbFileCount:(unsigned long long)arg1;
- (unsigned long long)allAudioSize;
- (void)setAllAudioSize:(unsigned long long)arg1;
- (unsigned long long)allAudioCount;
- (void)setAllAudioCount:(unsigned long long)arg1;
- (unsigned long long)allImgThumbSize;
- (void)setAllImgThumbSize:(unsigned long long)arg1;
- (unsigned long long)allImgThumbCount;
- (void)setAllImgThumbCount:(unsigned long long)arg1;
- (unsigned long long)allAppThumbSize;
- (void)setAllAppThumbSize:(unsigned long long)arg1;
- (unsigned long long)allAppThumbCount;
- (void)setAllAppThumbCount:(unsigned long long)arg1;
- (unsigned long long)allVideoThumbSize;
- (void)setAllVideoThumbSize:(unsigned long long)arg1;
- (unsigned long long)allVideoThumbCount;
- (void)setAllVideoThumbCount:(unsigned long long)arg1;
- (unsigned long long)allRawImageSize;
- (void)setAllRawImageSize:(unsigned long long)arg1;
- (unsigned long long)allRawImageCount;
- (void)setAllRawImageCount:(unsigned long long)arg1;
- (unsigned long long)allRawVideoSize;
- (void)setAllRawVideoSize:(unsigned long long)arg1;
- (unsigned long long)allRawVideoCount;
- (void)setAllRawVideoCount:(unsigned long long)arg1;
- (map<unsigned int, unsigned long long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long long>>>)sizeOfFileType;
- (void)setSizeOfFileType:(map<unsigned int, unsigned long long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long long>>>)arg1;
- (unsigned long long)allVideoCount;
- (void)setAllVideoCount:(unsigned long long)arg1;
- (unsigned long long)allFileCount;
- (void)setAllFileCount:(unsigned long long)arg1;
- (unsigned long long)allImageCount;
- (void)setAllImageCount:(unsigned long long)arg1;
- (unsigned long long)allRecordCount;
- (void)setAllRecordCount:(unsigned long long)arg1;
- (id)arrBrandSessionInfo;
- (void)setArrBrandSessionInfo:(id)arg1;
- (BOOL)bGetProgress;
- (void)setBGetProgress:(BOOL)arg1;
- (BOOL)bGetDetailOfAggregationMsg;
- (void)setBGetDetailOfAggregationMsg:(BOOL)arg1;
- (BOOL)filteringData;
- (void)setFilteringData:(BOOL)arg1;
- (BOOL)filterDataEnd;
- (void)setFilterDataEnd:(BOOL)arg1;
- (unsigned int)msgOldestTime;
- (void)setMsgOldestTime:(unsigned int)arg1;
- (unsigned int)msgNewestTime;
- (void)setMsgNewestTime:(unsigned int)arg1;
- (id)detailRecurciveLock;
- (void)setDetailRecurciveLock:(id)arg1;
- (id)stat;
- (void)setStat:(id)arg1;
- (id /* block */)chatLogCalCompletion;
- (void)setChatLogCalCompletion:(id /* block */)arg1;
- (id /* block */)chatLogFilterCalCompletion;
- (void)setChatLogFilterCalCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

