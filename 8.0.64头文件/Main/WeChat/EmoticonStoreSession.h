@interface EmoticonStoreSession : MMObject
{
    NSMutableDictionary * m_itemList; // +0x8
    NSMutableArray * m_downloadingItemList; // +0x10
}
- (id)init;
- (id)findItemByProductID:(id)arg1;
- (id)addItem:(id)arg1 ForProductID:(id)arg2;
- (id)megerFromArray:(id)arg1;
- (id)megerFromArray:(id)arg1 IsForceUpdateTagAndIntroduce:(BOOL)arg2;
- (id)m_itemList;
- (void)setM_itemList:(id)arg1;
- (id)m_downloadingItemList;
- (void)setM_downloadingItemList:(id)arg1;
- (void).cxx_destruct;
@end
