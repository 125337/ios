@interface WAMainListPageLogic : MMObject <WAAppItemManagerExtension>
{
    BOOL _hasNoMore; // +0x8
    BOOL _needStarData; // +0x9
    BOOL _exposeUploaded; // +0xa
    unsigned int _currentPageNum; // +0xc
    unsigned int _previousPageUpdateTimeOfLastLoacalWAAppItem; // +0x10
    unsigned int _currentUpdateTimeOfLastLocalWAAppItem; // +0x14
    unsigned int _updateTimeOfLastRemoteWAAppItem; // +0x18
    unsigned int _initTimeStamp; // +0x1c
    NSMutableArray * _historyItems; // +0x20
    id <WAMainListPageLogicDelegate> _delegate; // +0x28
    NSString * _openSession; // +0x30
    NSMutableArray * _exposedItemDatas; // +0x38
}
- (id)initWithNeedStarData:(BOOL)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (BOOL)hasHistoryData;
- (BOOL)removeHistoryItem:(id)arg1;
- (BOOL)deleteHistoryItem:(id)arg1;
- (void)markItemExposed:(id)arg1;
- (void)uploadExposedByLeaveListType:(unsigned long long)arg1 clickIndex:(unsigned long long)arg2 appid:(id)arg3 nickName:(id)arg4 isStar:(BOOL)arg5;
- (void)uploadExposedByClickIndex:(unsigned long long)arg1;
- (void)uploadExposedByDissappearScene:(unsigned long long)arg1;
- (BOOL)insertHistoryItemAtTop:(id)arg1;
- (id)fetchNextPageLocalData;
- (void)fetchNextPageItems;
- (void)onWeAppItemsInfoUpdatedWithAPageItem:(id)arg1 localLastUpdateTime:(unsigned int)arg2 remoteLastUpdateTime:(unsigned int)arg3 hasMore:(BOOL)arg4 scene:(unsigned int)arg5;
- (void)onWeAppItemsInfoUpdatedErrorWithErrorCode:(int)arg1 scene:(unsigned int)arg2;
- (id)historyItems;
- (void)setHistoryItems:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasNoMore;
- (unsigned int)currentPageNum;
- (BOOL)needStarData;
- (void)setNeedStarData:(BOOL)arg1;
- (id)openSession;
- (void)setOpenSession:(id)arg1;
- (unsigned int)previousPageUpdateTimeOfLastLoacalWAAppItem;
- (void)setPreviousPageUpdateTimeOfLastLoacalWAAppItem:(unsigned int)arg1;
- (unsigned int)currentUpdateTimeOfLastLocalWAAppItem;
- (void)setCurrentUpdateTimeOfLastLocalWAAppItem:(unsigned int)arg1;
- (unsigned int)updateTimeOfLastRemoteWAAppItem;
- (void)setUpdateTimeOfLastRemoteWAAppItem:(unsigned int)arg1;
- (id)exposedItemDatas;
- (void)setExposedItemDatas:(id)arg1;
- (unsigned int)initTimeStamp;
- (void)setInitTimeStamp:(unsigned int)arg1;
- (BOOL)exposeUploaded;
- (void)setExposeUploaded:(BOOL)arg1;
- (void).cxx_destruct;
@end

