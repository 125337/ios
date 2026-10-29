@interface WCNewClickPageItemData : MMObject <PBCoding>
{
    int _costTime; // +0x8
    unsigned int _count; // +0xc
    unsigned int _specialPV; // +0x10
    NSString * _pageID; // +0x18
    NSMutableDictionary * _dicWidgetDatas; // +0x20
}
+ (void)PBArrayAdd_pageID;
+ (void)PBArrayAdd_costTime;
+ (void)PBArrayAdd_count;
+ (void)PBArrayAdd_specialPV;
+ (void)PBArrayAdd_dicWidgetDatas;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)pageID;
- (void)setPageID:(id)arg1;
- (int)costTime;
- (void)setCostTime:(int)arg1;
- (unsigned int)count;
- (void)setCount:(unsigned int)arg1;
- (unsigned int)specialPV;
- (void)setSpecialPV:(unsigned int)arg1;
- (id)dicWidgetDatas;
- (void)setDicWidgetDatas:(id)arg1;
- (void).cxx_destruct;
@end
