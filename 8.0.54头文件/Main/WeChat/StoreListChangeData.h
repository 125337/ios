@interface StoreListChangeData : NSObject
{
    unsigned int _topHotNum; // +0x8
    unsigned int _recentHotNum; // +0xc
    NSArray * _cellSetList; // +0x10
}
- (id)cellSetList;
- (void)setCellSetList:(id)arg1;
- (unsigned int)topHotNum;
- (void)setTopHotNum:(unsigned int)arg1;
- (unsigned int)recentHotNum;
- (void)setRecentHotNum:(unsigned int)arg1;
- (void).cxx_destruct;
@end

