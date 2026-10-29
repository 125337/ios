@interface EmoticonCustomManageDataLogic : MMObject <NSCopying>
{
    BOOL _showAddEmoticon; // +0x8
    BOOL _supportRecoverSelect; // +0x9
    BOOL _startMultiSelectStatus; // +0xa
    unsigned long long _type; // +0x10
    unsigned long long _status; // +0x18
    OrderedDictionary * _wrapList; // +0x20
    OrderedDictionary * _markedWrapList; // +0x28
    NSArray * _displayMd5List; // +0x30
    NSMutableArray * _md5ListIncludeMoving; // +0x38
    NSMutableArray * _originIndexesOfMovingWrap; // +0x40
    NSMutableArray * _insertedIndexesOfMovingWrap; // +0x48
    NSMutableArray * _needAnimateMd5List; // +0x50
    long long _placeHolderIndex; // +0x58
    unsigned long long _startMultiSelectIndex; // +0x60
    unsigned long long _lastMultiSelectIndex; // +0x68
    unsigned long long _startMultiSelectMarkedCount; // +0x70
}
- (id)initWithType:(unsigned long long)arg1;
- (id)init;
- (id)recoverMgr;
- (unsigned long long)totalEmoticonCountIncludeRecoverFailed;
- (unsigned long long)totalEmoticonCountShowed;
- (unsigned long long)totalShowingItems;
- (unsigned long long)totalShowingItemsWithoutInsertPlaceHolder:(BOOL)arg1;
- (id)emoticonManageWrapAtIndex:(unsigned long long)arg1;
- (id)originEmoticonManageWrapAtIndex:(unsigned long long)arg1;
- (id)indexesOfMovingWrap;
- (id)indexesOfInsertedWrapForMoveFinish;
- (id)indexesOfRemovedWrapForMoveFinish;
- (id)md5ListForMarkItems;
- (void)commitInsertPlaceWithIndex:(unsigned long long)arg1;
- (BOOL)commitInsertPlaceImmediately;
- (id)emoticonManageWrapForMd5:(id)arg1;
- (void)changeMarkStateWithWrap:(id)arg1;
- (void)clearAllMark;
- (void)clearMoveStatus;
- (void)checkNeedAnimateList;
- (void)clearAllSelectAndPrepareAnimation;
- (void)clearAllAnimatedWraps;
- (void)setStatus:(unsigned long long)arg1;
- (void)cleanInsertWithSucBlock:(id /* block */)arg1;
- (void)cleanInsert;
- (BOOL)shouldInsertPlaceHolderAt:(long long)arg1;
- (void)insertPlaceHolderAt:(long long)arg1 WithRemovePreviousInsertBlock:(id /* block */)arg2 onlyInsertBlock:(id /* block */)arg3;
- (void)getInsertIndexWithSucBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (void)startMultiSelectWithIndex:(unsigned long long)arg1;
- (void)moveMultiSelectWithIndex:(unsigned long long)arg1;
- (void)endMultiSelect;
- (BOOL)needForbiddenFirstWrap;
- (id)getLocalEmoticonList:(unsigned long long)arg1;
- (id)getMergedEmoticonList:(unsigned long long)arg1;
- (id)reloadDataWithType:(unsigned long long)arg1;
- (void)updateCustomAddWrapIn:(id)arg1 forMode:(unsigned long long)arg2;
- (void)updateSelectStatus:(id)arg1;
- (id)restoreDataForSelect:(id)arg1;
- (id)restoreDataForSelectAfterInsert:(id)arg1;
- (id)getDataForMove:(id)arg1;
- (void)updateWrapForAnimationWithStatus:(unsigned long long)arg1;
- (void)updateDisplayList;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)status;
- (id)wrapList;
- (void)setWrapList:(id)arg1;
- (id)markedWrapList;
- (void)setMarkedWrapList:(id)arg1;
- (id)displayMd5List;
- (void)setDisplayMd5List:(id)arg1;
- (BOOL)showAddEmoticon;
- (void)setShowAddEmoticon:(BOOL)arg1;
- (BOOL)supportRecoverSelect;
- (void)setSupportRecoverSelect:(BOOL)arg1;
- (id)md5ListIncludeMoving;
- (void)setMd5ListIncludeMoving:(id)arg1;
- (id)originIndexesOfMovingWrap;
- (void)setOriginIndexesOfMovingWrap:(id)arg1;
- (id)insertedIndexesOfMovingWrap;
- (void)setInsertedIndexesOfMovingWrap:(id)arg1;
- (id)needAnimateMd5List;
- (void)setNeedAnimateMd5List:(id)arg1;
- (long long)placeHolderIndex;
- (void)setPlaceHolderIndex:(long long)arg1;
- (unsigned long long)startMultiSelectIndex;
- (void)setStartMultiSelectIndex:(unsigned long long)arg1;
- (unsigned long long)lastMultiSelectIndex;
- (void)setLastMultiSelectIndex:(unsigned long long)arg1;
- (unsigned long long)startMultiSelectMarkedCount;
- (void)setStartMultiSelectMarkedCount:(unsigned long long)arg1;
- (BOOL)startMultiSelectStatus;
- (void)setStartMultiSelectStatus:(BOOL)arg1;
- (void).cxx_destruct;
@end
