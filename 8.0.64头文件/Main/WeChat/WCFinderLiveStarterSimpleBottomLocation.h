@interface WCFinderLiveStarterSimpleBottomLocation : MMUIView
{
    id /* block */ _itemClick; // +0x8
    LbsLifeData * _lbsLifeData; // +0x10
    NSMutableArray * _itemArray; // +0x18
    double _itemTop; // +0x20
    double _itemMargin; // +0x28
    double _itemGap; // +0x30
    double _itemHeight; // +0x38
    long long _itemMaxCount; // +0x40
}
- (id)init;
- (void)createParams;
- (void)updateSimpleLocationLBSLife:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)layoutUI;
- (id)itemArray;
- (void)locationItemClick:(id)arg1;
- (id /* block */)itemClick;
- (void)setItemClick:(id /* block */)arg1;
- (id)lbsLifeData;
- (void)setLbsLifeData:(id)arg1;
- (void)setItemArray:(id)arg1;
- (double)itemTop;
- (void)setItemTop:(double)arg1;
- (double)itemMargin;
- (void)setItemMargin:(double)arg1;
- (double)itemGap;
- (void)setItemGap:(double)arg1;
- (double)itemHeight;
- (void)setItemHeight:(double)arg1;
- (long long)itemMaxCount;
- (void)setItemMaxCount:(long long)arg1;
- (void).cxx_destruct;
@end
