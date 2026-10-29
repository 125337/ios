@interface MMImgDataLogic_StorageMgr : MMImgDataLogic
{
    long long m_left; // +0x8
    long long m_right; // +0x10
    NSMutableArray * m_arrPreMsg; // +0x18
    NSMutableArray * m_arrNextMsg; // +0x20
    BOOL m_bLoading; // +0x28
    BOOL m_bPreEnd; // +0x29
    BOOL m_bNextEnd; // +0x2a
    long long m_preLoadSize; // +0x30
    long long m_distance; // +0x38
    NSArray * _allInfos; // +0x40
    NSMapTable * _itemToInfoMap; // +0x48
    NSObject<OS_dispatch_queue> * _queue; // +0x50
}
- (id)initWithAllInfos:(id)arg1 curInfo:(id)arg2;
- (id)infoForItem:(id)arg1;
- (void)preloadIfNeed:(id)arg1 complete:(id /* block */)arg2;
- (id)asyncPreloadPreData;
- (id)asyncPreloadNextData;
- (void)updatePreloadData;
- (id)p_buildItemFromInfo:(id)arg1;
- (id)allInfos;
- (void)setAllInfos:(id)arg1;
- (id)itemToInfoMap;
- (void)setItemToInfoMap:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end
