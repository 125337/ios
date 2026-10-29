@interface EmoticonStoreListCache : MMObject <PBCoding>
{
    unsigned int _m_topHotNum; // +0x8
    unsigned int _m_recentHotNum; // +0xc
    NSMutableArray * _itemList; // +0x10
    NSMutableArray * _m_adArray; // +0x18
    NSMutableArray * _m_cellSetList; // +0x20
}
+ (void)PBArrayAdd_itemList;
+ (void)PBArrayAdd_m_topHotNum;
+ (void)PBArrayAdd_m_recentHotNum;
+ (void)PBArrayAdd_m_adArray;
+ (void)PBArrayAdd_m_cellSetList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)itemList;
- (void)setItemList:(id)arg1;
- (id)m_adArray;
- (void)setM_adArray:(id)arg1;
- (unsigned int)m_topHotNum;
- (void)setM_topHotNum:(unsigned int)arg1;
- (unsigned int)m_recentHotNum;
- (void)setM_recentHotNum:(unsigned int)arg1;
- (id)m_cellSetList;
- (void)setM_cellSetList:(id)arg1;
- (void).cxx_destruct;
@end

