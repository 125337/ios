@interface EmoticonTabRecommendData : NSObject <PBCoding>
{
    NSMutableArray * _m_itemList; // +0x8
}
+ (void)PBArrayAdd_m_itemList;
+ (void)initialize;
+ (id)Instance;
+ (id)getSaveRootDir;
+ (id)getSavePath;
- (id)getPBPropertyTable;
- (id)init;
- (id)itemList;
- (void)addItem:(id)arg1;
- (void)removeItemWithProductId:(id)arg1;
- (void)saveToFile;
- (id)m_itemList;
- (void)setM_itemList:(id)arg1;
- (void).cxx_destruct;
@end

