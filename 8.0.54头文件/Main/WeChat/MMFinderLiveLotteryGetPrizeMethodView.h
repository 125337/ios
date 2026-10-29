@interface MMFinderLiveLotteryGetPrizeMethodView : UIView
{
    double _currentHeight; // +0x8
    FinderLiveLotteryClaimMethod * _claimMethod; // +0x10
    NSMutableArray * _itemArray; // +0x18
    NSMutableArray * _itemHeightArray; // +0x20
    UIView * _sepelateLine; // +0x28
}
- (double)getPrizeMethodViewHeight:(id)arg1;
- (double)getHeightWithClaimInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSeparateLine;
- (void)createItemWithClaimInfo:(id)arg1 originY:(double)arg2 height:(double)arg3;
- (id)itemArray;
- (id)itemHeightArray;
- (double)currentHeight;
- (void)setCurrentHeight:(double)arg1;
- (id)claimMethod;
- (void)setClaimMethod:(id)arg1;
- (void)setItemArray:(id)arg1;
- (void)setItemHeightArray:(id)arg1;
- (id)sepelateLine;
- (void)setSepelateLine:(id)arg1;
- (void).cxx_destruct;
@end

