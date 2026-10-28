@interface WCFinderPersonalCenterItem : NSObject
{
    Class _cellClass; // +0x8
    long long _tag; // +0x10
    WCFinderRedDotTipsShowInfo * _redDotInfo; // +0x18
    id /* block */ _setupBlock; // +0x20
    id /* block */ _clickBlock; // +0x28
    id <WCFinderPersonalCenterCellProtocol> _weakCell; // +0x30
}
+ (id)itemWithCellClass:(Class)arg1 clickBlock:(id /* block */)arg2 setupBlock:(id /* block */)arg3;
+ (id)buttonItemWithTitle:(id)arg1 clickBlock:(id /* block */)arg2;
- (double)displayCellHeight;
- (id)dequeueCellFromCollectionView:(id)arg1 indexPath:(id)arg2;
- (void)handleClickFromVC:(id)arg1;
- (void)setRedDotInfo:(id)arg1;
- (void)updateCellRedDotInfo;
- (Class)cellClass;
- (void)setCellClass:(Class)arg1;
- (long long)tag;
- (void)setTag:(long long)arg1;
- (id)redDotInfo;
- (id /* block */)setupBlock;
- (void)setSetupBlock:(id /* block */)arg1;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (id)weakCell;
- (void)setWeakCell:(id)arg1;
- (void).cxx_destruct;
@end
