@interface MMFinderLiveSFBarrageViewModel : NSObject <MMFinderLiveBarrageModelExt>
{
    BOOL _isStartBarrage; // +0x8
    BOOL _isStartLandscapeBarrage; // +0x9
    BOOL _enableFaceDetectMask; // +0xa
    id <MMFinderLiveSFBarrageViewModelDelegate> _actionDelegate; // +0x10
    MMTimer * _triggerTimer; // +0x18
    NSMutableArray * _reusedCellList; // +0x20
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x28
    NSMutableArray * _floatCommentDataCache; // +0x30
    MMLiveCommentDataDictCache * _floatCommentDataDictCache; // +0x38
    NSMutableDictionary * _floatBarrageTagDict; // +0x40
    NSMutableArray * _landscapePublicCommentDataCache; // +0x48
    MMLiveCommentDataDictCache * _landscapePublicCommentDataDictCache; // +0x50
    NSMutableDictionary * _landscapePublicBarrageTagDict; // +0x58
    MMLiveCommentDataItem * _lastDisplayLandscapeCommentItem; // +0x60
    NSMutableArray * _availableCellList; // +0x68
    NSMutableArray * _reRunCellList; // +0x70
}
+ (id)supportedLandscapeBarrageMsgTypeList;
+ (id)supportedLandscapeBarrageMsgSubTypeList;
+ (id)filterFloatingBarrageItems:(id)arg1;
- (BOOL)updateLandscapeBarrageStartState;
- (BOOL)startLandscapeBarrage;
- (BOOL)stopLandscapeBarrage;
- (BOOL)enableStartLandscapeBarrage;
- (BOOL)trySynchronizeRecentCommentDataItems;
- (id)requestRecentLoadedPublicCommentItemList:(unsigned long long)arg1;
- (void)clearLandscapeBarrageDatas;
- (id)filterUnSupportedLandacapeBarrageDataItems:(id)arg1;
- (void)onFinderLiveCommentDataItemsUpdate:(id)arg1 taskId:(id)arg2 boxId:(id)arg3;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onTriggerCallback;
- (id)getReusedCellWithCommentDataItem:(id)arg1;
- (id)finderLiveTask;
- (unsigned long long)currCommentItemSynchronizeCntOnce;
- (void)startBarrage;
- (void)stopBarrage;
- (void)startTriggerTimer;
- (void)continueTriggerTimer;
- (void)stopTriggerTimer;
- (double)triggerInterval;
- (void)updateTriggerTimerState;
- (unsigned long long)availableCellCount;
- (id)getAvailableCellList;
- (id)getAvailableCell;
- (void)addToReRunBarrageCell:(id)arg1 front:(BOOL)arg2;
- (unsigned long long)getToReRunCellCount;
- (id)getToReRunCellList;
- (void)onBarrageCellReRunned:(id)arg1;
- (void)onAvailableCellBeUsed:(id)arg1;
- (void)onBarrageCellEndDisplay:(id)arg1;
- (void)onBarrageCellCancelDisplay:(id)arg1;
- (void)clearBarrageDataItemForCell:(id)arg1;
- (unsigned long long)commentDataCacheCount;
- (void)tryUpdateCellList;
- (id)getNextBarrageCommentItemList;
- (void)updateReusedCellListWithRemovedCell:(id)arg1;
- (BOOL)isBarrageCellInReusedList:(id)arg1;
- (id)getBarrageCommentItemWithSeq:(unsigned long long)arg1 boxId:(id)arg2;
- (id)getBarrageCommentItemWithLocalClientMsgId:(id)arg1 boxId:(id)arg2;
- (BOOL)updateBarrageCommentSeq:(unsigned long long)arg1 withLocalClientMsgId:(id)arg2 boxId:(id)arg3;
- (double)getBarrageCellCurrentAlpha;
- (BOOL)isCurrentHasData;
- (BOOL)updateEnableFaceDetectMask:(BOOL)arg1;
- (BOOL)currEnableFaceDetectMask;
- (void)onFinderLiveFloatingDataItemsUpdate:(id)arg1 taskId:(id)arg2;
- (BOOL)tryAddBarrageDataItems:(id)arg1 toListCache:(id)arg2 toDictCache:(id)arg3 toRecord:(id)arg4;
- (id)getBarrageArrayFilterRepeatAndInvalid:(id)arg1 fromRecord:(id)arg2;
- (id)filterSelfLocalCommitFromBarrageArray:(id)arg1;
- (void)addBarrageItems:(id)arg1 toRecord:(id)arg2;
- (void)clearBarrageItems:(id)arg1 fromRecord:(id)arg2;
- (BOOL)checkOverLimitForListCache:(id)arg1 dictCache:(id)arg2 record:(id)arg3;
- (void)clearCommentDataItems:(id)arg1 fromListCache:(id)arg2 dictCache:(id)arg3 record:(id)arg4;
- (unsigned long long)maxBarrageCacheCount;
- (void)clearExpiredFloatCommentItems:(unsigned long long)arg1;
- (void)clearDisplayedFloatCommentItems;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)isStartBarrage;
- (void)setIsStartBarrage:(BOOL)arg1;
- (BOOL)isStartLandscapeBarrage;
- (void)setIsStartLandscapeBarrage:(BOOL)arg1;
- (id)triggerTimer;
- (void)setTriggerTimer:(id)arg1;
- (id)reusedCellList;
- (void)setReusedCellList:(id)arg1;
- (BOOL)enableFaceDetectMask;
- (void)setEnableFaceDetectMask:(BOOL)arg1;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (id)floatCommentDataCache;
- (void)setFloatCommentDataCache:(id)arg1;
- (id)floatCommentDataDictCache;
- (void)setFloatCommentDataDictCache:(id)arg1;
- (id)floatBarrageTagDict;
- (void)setFloatBarrageTagDict:(id)arg1;
- (id)landscapePublicCommentDataCache;
- (void)setLandscapePublicCommentDataCache:(id)arg1;
- (id)landscapePublicCommentDataDictCache;
- (void)setLandscapePublicCommentDataDictCache:(id)arg1;
- (id)landscapePublicBarrageTagDict;
- (void)setLandscapePublicBarrageTagDict:(id)arg1;
- (id)lastDisplayLandscapeCommentItem;
- (void)setLastDisplayLandscapeCommentItem:(id)arg1;
- (id)availableCellList;
- (void)setAvailableCellList:(id)arg1;
- (id)reRunCellList;
- (void)setReRunCellList:(id)arg1;
- (void).cxx_destruct;
@end
