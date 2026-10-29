@interface StrongNotificationDataPB : MMObject <PBCoding>
{
    NSMutableDictionary * _configDic; // +0x8
    NSMutableArray * _itemAndMessageList; // +0x10
}
+ (void)PBArrayAdd_configDic;
+ (void)PBArrayAdd_itemAndMessageList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)configDic;
- (void)setConfigDic:(id)arg1;
- (id)itemAndMessageList;
- (void)setItemAndMessageList:(id)arg1;
- (void).cxx_destruct;
@end

